$NetBSD: patch-mozilla_ipc_chromium_src_base_message__loop.cc,v 1.1 2016/04/17 18:22:21 ryoon Exp $

--- mozilla/ipc/chromium/src/base/message_loop.cc.orig	2014-07-18 00:05:24.000000000 +0000
+++ mozilla/ipc/chromium/src/base/message_loop.cc
@@ -14,20 +14,18 @@
 #include "base/string_util.h"
 #include "base/thread_local.h"
 
-#if defined(OS_MACOSX)
+#if defined(MOZ_WIDGET_COCOA)
 #include "base/message_pump_mac.h"
 #endif
 #if defined(OS_POSIX)
 #include "base/message_pump_libevent.h"
 #endif
-#if defined(OS_LINUX) || defined(OS_BSD)
 #if defined(MOZ_WIDGET_GTK)
 #include "base/message_pump_glib.h"
 #endif
 #ifdef MOZ_WIDGET_QT
 #include "base/message_pump_qt.h"
 #endif
-#endif
 #ifdef ANDROID
 #include "base/message_pump_android.h"
 #endif
@@ -138,9 +136,9 @@ MessageLoop::MessageLoop(Type type)
   }
 #elif defined(OS_POSIX)
   if (type_ == TYPE_UI) {
-#if defined(OS_MACOSX)
+#if defined(MOZ_WIDGET_COCOA)
     pump_ = base::MessagePumpMac::Create();
-#elif defined(OS_LINUX) || defined(OS_BSD)
+#elif defined(MOZ_WIDGET_GTK) || defined(MOZ_WIDGET_QT)
     pump_ = new base::MessagePumpForUI();
 #endif  // OS_LINUX
   } else if (type_ == TYPE_IO) {
