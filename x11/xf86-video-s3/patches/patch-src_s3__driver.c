$NetBSD: patch-src_s3__driver.c,v 1.1 2015/04/02 22:16:47 tnn Exp $

From ed0fbfd27609e897c42d7ab316481a9504746233 Mon Sep 17 00:00:00 2001
From: Gaetan Nadon <memsize@videotron.ca>
Date: Tue, 7 Jan 2014 16:28:58 -0500
Subject: Remove mibstore.h

As it was done in numerous other drivers. Fixes compile error.

Tested-by: Trevor Woerner <trevor.woerner@linaro.org>
Signed-off-by: Gaetan Nadon <memsize@videotron.ca>

diff --git a/src/s3_driver.c b/src/s3_driver.c
index 61242ad..85763ba 100644
--- src/s3_driver.c
+++ src/s3_driver.c
@@ -52,7 +52,6 @@
 #include "compiler.h"
 #include "mipointer.h"
 #include "micmap.h"
-#include "mibstore.h"
 #include "fb.h"
 #include "inputstr.h"
 #include "shadowfb.h"
@@ -822,7 +821,6 @@ static Bool S3ScreenInit(SCREEN_INIT_ARGS_DECL)
 	fbPictureInit (pScreen, 0, 0);
 	S3DGAInit(pScreen);
 
-        miInitializeBackingStore(pScreen);
         xf86SetBackingStore(pScreen);
 
 	/* framebuffer manager setup */
