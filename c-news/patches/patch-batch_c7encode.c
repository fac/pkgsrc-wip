$NetBSD$

Prototype for exit(3).

--- batch/c7encode.c.orig	1989-02-21 00:04:56.000000000 +0000
+++ batch/c7encode.c
@@ -1,4 +1,5 @@
 #include <stdio.h>
+#include <stdlib.h>
 
 #ifdef SCCSID
 static char	*SccsId = "@(#)encode.c	1.3	5/15/85";
