--- contrib/miniupnp/miniupnpc/minissdpc.c.orig	2016-10-08 19:12:49 UTC
+++ contrib/miniupnp/miniupnpc/minissdpc.c
@@ -35,6 +35,7 @@ struct sockaddr_un {
 #include <sys/socket.h>
 #include <sys/un.h>
 #endif
+#include <sys/time.h>
 
 #include "minissdpc.h"
 #include "miniupnpc.h"
