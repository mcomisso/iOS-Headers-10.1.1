/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlaceholderOperation : NSOperation {
    NSObject<OS_dispatch_group> * _group;
    bool  _isExecuting;
    bool  _isFinished;
    CKDOperation * _realOperation;
    NSDate * _startDate;
    NSOperationQueue * _targetOperationQueue;
}

@property (nonatomic, readonly) CKDClientContext *context;
@property (nonatomic) bool isExecuting;
@property (nonatomic) bool isFinished;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) CKDClientProxy *proxy;
@property (nonatomic, readonly) CKDOperation *realOperation;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) NSOperationQueue *targetOperationQueue;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_runDurationString;
- (id)_startDateString;
- (void)cancel;
- (id)ckShortDescription;
- (id)context;
- (id)description;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)operationID;
- (id)proxy;
- (id)realOperation;
- (void)setIsExecuting:(bool)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)targetOperationQueue;

@end
