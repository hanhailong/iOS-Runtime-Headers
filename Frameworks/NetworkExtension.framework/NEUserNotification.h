/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface NEUserNotification : NSObject {
    id _callback;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _isBanner;
    struct __CFUserNotification { } *_notification;
    struct __CFRunLoopSource { } *_notificationSource;
}

@property(copy) id callback;
@property(retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property BOOL isBanner;
@property struct __CFUserNotification { }* notification;
@property struct __CFRunLoopSource { }* notificationSource;

- (void).cxx_destruct;
- (id)callback;
- (id)callbackQueue;
- (void)cancel;
- (void)dealloc;
- (id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned int)arg3;
- (id)initBannerWithHeader:(id)arg1 message:(id)arg2 disagreeMessage:(id)arg3;
- (BOOL)isBanner;
- (struct __CFUserNotification { }*)notification;
- (struct __CFRunLoopSource { }*)notificationSource;
- (BOOL)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(id)arg2;
- (void)setCallback:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setIsBanner:(BOOL)arg1;
- (void)setNotification:(struct __CFUserNotification { }*)arg1;
- (void)setNotificationSource:(struct __CFRunLoopSource { }*)arg1;

@end
