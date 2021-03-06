/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface TCMessageContext : NSObject {
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;
    NSMutableArray *m_currentObjectStack;
    NSMutableSet *m_errors;
    NSMutableDictionary *m_placeholderToObjectIdMap;
    NSMutableSet *m_warnings;
}

+ (void)createContextForCurrentThread;
+ (id)currentObjectOrPlaceholder;
+ (id)getErrorArray;
+ (id)getWarningArray;
+ (void)initialize;
+ (BOOL)isFileStructuredStorage;
+ (void)popCurrentObject;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)pushCurrentObject:(id)arg1;
+ (id)pushCurrentPlaceholder;
+ (void)removeContextForCurrentThread;
+ (void)replacePlaceholdersWithObjects;
+ (void)reportError:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)reportErrorException:(id)arg1;
+ (void)reportObject:(id)arg1 withWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg2;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg2 parameters:(void*)arg3;
+ (void)reportWarning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)restoreObjectStack:(unsigned int)arg1;
+ (unsigned int)saveObjectStack;
+ (void)setIsFileStructuredStorage:(BOOL)arg1;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;

- (void)addErrorMessageEntry:(id)arg1;
- (void)addWarningMessageEntry:(id)arg1;
- (id)currentObject;
- (void)dealloc;
- (id)init;
- (void)popObject;
- (void)popPlaceholder:(id)arg1;
- (void)pushObject:(id)arg1;
- (id)pushPlaceholder;
- (void)replacePlaceholdersWithObjects;
- (void)reportWarningForObject:(id)arg1 affectedObject:(id)arg2 warning:(struct TCTaggedMessageStructure { int x1; id x2; }*)arg3 parameterList:(void*)arg4;
- (void)setObject:(id)arg1 forPlaceholderKey:(id)arg2;

@end
