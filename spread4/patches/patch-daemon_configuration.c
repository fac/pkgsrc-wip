$NetBSD$

Use hostname lookup fix from 4.3.0
--- daemon/configuration.c.orig	2014-05-14 12:54:07.000000000 +0100
+++ daemon/configuration.c	2014-05-14 12:55:30.000000000 +0100
@@ -412,25 +412,20 @@
 
         /* Match my IP address to entry in configuration file */
 	if( my_name == NULL ){
-		gethostname(machine_name,sizeof(machine_name)); 
-		host_ptr = gethostbyname(machine_name);
-		if( host_ptr == 0 )
-			Alarm( EXIT, "Conf_load_conf_file: could not get my ip address (my name is %s)\n",
-				machine_name );
-                if (host_ptr->h_addrtype != AF_INET)
-                        Alarm(EXIT, "Conf_load_conf_file: Sorry, cannot handle addr types other than IPv4\n");
-                if (host_ptr->h_length != 4)
-                        Alarm(EXIT, "Conf_load_conf_file: Bad IPv4 address length\n");
-	
-		i = -1;	/* in case host_ptr->h_length == 0 */
-                for (j = 0; host_ptr->h_addr_list[j] != NULL; j++) {
-                        memcpy(&My.id, host_ptr->h_addr_list[j], sizeof(struct in_addr));
-			My.id = ntohl( My.id );
+                int32u *ips = Ip_enum_all();
+
+		i = -1;
+                for (j = 0; ips[j] != 0; j++) {
+			My.id = ntohl( ips[j] );
+                        Alarmp( SPLOG_DEBUG, CONF_SYS, "Conf_load_conf_file: trying IP %d.%d.%d.%d\n", IP1(My.id), IP2(My.id), IP3(My.id), IP4(My.id) );
 			i = Conf_proc_by_id( My.id, &My );
 			if( i >= 0 ) break;
                 }
-		if( i < 0 ) Alarm( EXIT,
-			"Conf_load_conf_file: My proc id (%d.%d.%d.%d) is not in configuration\n", IP1(My.id),IP2(My.id),IP3(My.id),IP4(My.id) );
+		if ( i < 0 ) {
+                        Alarm( EXIT, "Conf_load_conf_file: None of local IPs found in configuration\n" );
+                }
+
+                free(ips);
 
 	}else if( ! strcmp( my_name, "Monitor" ) ){
 		gethostname(machine_name,sizeof(machine_name)); 
