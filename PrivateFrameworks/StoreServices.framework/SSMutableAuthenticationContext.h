/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying> {
}

@property(copy) NSDictionary * HTTPHeaders;
@property(copy) NSString * accountName;
@property(getter=isAccountNameEditable) BOOL accountNameEditable;
@property int accountScope;
@property BOOL allowsBioAuthentication;
@property BOOL allowsBootstrapCellularData;
@property BOOL allowsRetry;
@property BOOL canCreateNewAccount;
@property BOOL canSetActiveAccount;
@property(copy) NSString * clientIdentifierHeader;
@property(copy,readonly) NSString * debugDescription;
@property(getter=isDemoAccount) BOOL demoAccount;
@property(copy,readonly) NSString * description;
@property BOOL displaysOnLockScreen;
@property(readonly) unsigned int hash;
@property(copy) NSString * initialPassword;
@property BOOL persistsAcrossDeviceLock;
@property BOOL persistsPasswordFallback;
@property(copy) NSString * preferredITunesStoreClient;
@property int promptStyle;
@property(copy) NSString * reasonDescription;
@property(copy) NSDictionary * requestParameters;
@property(retain) NSNumber * requiredUniqueIdentifier;
@property BOOL shouldCreateNewSession;
@property BOOL shouldFollowAccountButtons;
@property BOOL shouldIgnoreProtocol;
@property BOOL shouldSuppressDialogs;
@property(copy) NSDictionary * signupRequestParameters;
@property(readonly) Class superclass;
@property int tokenType;
@property(copy) NSArray * userAgentComponents;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountNameEditable:(BOOL)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setAllowsBioAuthentication:(BOOL)arg1;
- (void)setAllowsBootstrapCellularData:(BOOL)arg1;
- (void)setAllowsRetry:(BOOL)arg1;
- (void)setCanCreateNewAccount:(BOOL)arg1;
- (void)setCanSetActiveAccount:(BOOL)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setDisplaysOnLockScreen:(BOOL)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setInitialPassword:(id)arg1;
- (void)setPersistsAcrossDeviceLock:(BOOL)arg1;
- (void)setPersistsPasswordFallback:(BOOL)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setPromptStyle:(int)arg1;
- (void)setReasonDescription:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setShouldCreateNewSession:(BOOL)arg1;
- (void)setShouldFollowAccountButtons:(BOOL)arg1;
- (void)setShouldIgnoreProtocol:(BOOL)arg1;
- (void)setShouldSuppressDialogs:(BOOL)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setTokenType:(int)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValuesWithAccount:(id)arg1;

@end
