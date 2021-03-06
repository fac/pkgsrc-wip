$NetBSD$

Fixes implicit declaration of fopen64, ftello64, and fseeko64 warnings.

--- source/mupen64plus-core/src/main/zip/ioapi.h.orig	2013-07-04 00:27:56.000000000 +0000
+++ source/mupen64plus-core/src/main/zip/ioapi.h
@@ -68,6 +68,10 @@
   #define ftello64 ftell
   #define fseeko64 fseek
  #endif
+#else
+  #define fopen64 fopen
+  #define ftello64 ftello
+  #define fseeko64 fseeko
 #endif
 #endif
 
