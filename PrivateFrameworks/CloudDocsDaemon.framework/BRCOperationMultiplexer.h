/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class BRCLocalContainer, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface BRCOperationMultiplexer : NSObject {
    BRCLocalContainer *_container;
    NSMutableArray *_inflightBatches;
    unsigned int _maxCountOfBatchesInFlight;
    unsigned int _maxCountOfOperationInBatch;
    NSMutableArray *_multiplexedOperations;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void).cxx_destruct;
- (void)_removeOperation:(id)arg1;
- (void)_schedule;
- (void)_signal;
- (void)addOperation:(id)arg1;
- (void)close;
- (id)description;
- (id)initWithName:(id)arg1 container:(id)arg2;
- (id)operationFromBatch:(id)arg1 completionBlock:(id)arg2;
- (void)resume;
- (void)suspend;

@end
