/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSString;

@interface ASSmartMailTask : ASSendMailTask  {
    int _messageType;
    NSString *_originalMessageId;
    NSString *_originalFolderId;
    NSString *_originalLongId;
    BOOL _retryWithoutReferences;
}


- (id)command;
- (id)contentType;
- (void)dealloc;
- (id)requestBodyStreamOutKnownSize:(int*)arg1;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 originalFolderID:(id)arg5 originalLongID:(id)arg6;
- (id)parameterData;
- (BOOL)expectsWBXML;
- (BOOL)processContext:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (int)commandCode;

@end