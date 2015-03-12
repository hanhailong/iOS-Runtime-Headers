/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    struct RetainPtr<_UINavigationInteractiveTransitionBase> { 
        void *m_ptr; 
    } _backTransitionController;
    } _forwardTransitionController;
    struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; struct Timer<WebKit::ViewGestureController> { int (**x_4_1_1)(); struct RunLoop {} *x_4_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_4_1_3; struct ViewGestureController {} *x_4_1_4; } x4; struct RefPtr<WebCore::IOSurface> { struct IOSurface {} *x_5_1_1; } x5; id x6; struct RetainPtr<UIView> { void *x_7_1_1; } x7; struct RetainPtr<UIView> { void *x_8_1_1; } x8; struct RetainPtr<UIView> { void *x_9_1_1; } x9; struct RetainPtr<WKSwipeTransitionController> { void *x_10_1_1; } x10; struct RetainPtr<_UIViewControllerOneToOneTransitionContext> { void *x_11_1_1; } x11; unsigned long long x12; boolx13; struct WeakObjCPtr<WKWebView> { id x_14_1_1; } x14; struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x_15_1_1; } x15; unsigned long long x16; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_17_1_1; unsigned int x_17_1_2; unsigned int x_17_1_3; } x17; } *_gestureController;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)directionForTransition:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (id)initWithViewGestureController:(struct ViewGestureController { int (**x1)(); struct WebPageProxy {} *x2; int x3; struct Timer<WebKit::ViewGestureController> { int (**x_4_1_1)(); struct RunLoop {} *x_4_1_2; struct RetainPtr<__CFRunLoopTimer *> { void *x_3_2_1; } x_4_1_3; struct ViewGestureController {} *x_4_1_4; } x4; struct RefPtr<WebCore::IOSurface> { struct IOSurface {} *x_5_1_1; } x5; id x6; struct RetainPtr<UIView> { void *x_7_1_1; } x7; struct RetainPtr<UIView> { void *x_8_1_1; } x8; struct RetainPtr<UIView> { void *x_9_1_1; } x9; struct RetainPtr<WKSwipeTransitionController> { void *x_10_1_1; } x10; struct RetainPtr<_UIViewControllerOneToOneTransitionContext> { void *x_11_1_1; } x11; unsigned long long x12; boolx13; struct WeakObjCPtr<WKWebView> { id x_14_1_1; } x14; struct RefPtr<WebKit::WebPageProxy> { struct WebPageProxy {} *x_15_1_1; } x15; unsigned long long x16; struct Vector<WTF::String, 0, WTF::CrashOnOverflow> { struct String {} *x_17_1_1; unsigned int x_17_1_2; unsigned int x_17_1_3; } x17; }*)arg1 gestureRecognizerView:(id)arg2;
- (BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (void)invalidate;
- (BOOL)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;

@end