/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@class NSError, NSObject<GSProtocol>, NSObject<OS_dispatch_group>;

@interface GSDaemonProxySync : NSProxy <GSProtocol> {
    NSError *_error;
    NSObject<OS_dispatch_group> *_group;
    NSObject<GSProtocol> *_proxy;
    int _recursive;
    id _result;
}

@property(retain) NSError * error;
@property(retain) id result;

+ (id)proxy;

- (void)dealloc;
- (id)error;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (void)handleBoolResult:(BOOL)arg1 error:(id)arg2;
- (void)handleObjResult:(id)arg1 error:(id)arg2;
- (id)initWithXPCObject:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)result;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (id)waitForResultWithCFError:(struct __CFError {}**)arg1;
- (id)waitForResultWithError:(id*)arg1;

@end
