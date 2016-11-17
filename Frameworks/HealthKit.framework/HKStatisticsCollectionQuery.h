/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatisticsCollectionQuery : HKQuery {
    NSDate * _anchorDate;
    id /* block */  _initialResultsHandler;
    NSDateComponents * _intervalComponents;
    NSNumber * _lastAnchor;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
    NSMutableArray * _results;
    HKStatisticsCollection * _statisticsCollection;
    id /* block */  _statisticsUpdateHandler;
}

@property (readonly) NSDate *anchorDate;
@property (nonatomic, copy) id /* block */ initialResultsHandler;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (retain) NSNumber *lastAnchor;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) unsigned long long options;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (nonatomic, copy) id /* block */ statisticsUpdateHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (void)_queue_deliverError:(id)arg1;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (id /* block */)_queue_errorHandler;
- (bool)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (id)anchorDate;
- (void)deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (void)deliverStatisticsBatch:(id)arg1 initialDelivery:(bool)arg2 finalBatch:(bool)arg3 anchor:(id)arg4 forQuery:(id)arg5;
- (void)deliverStatisticsResetForQuery:(id)arg1;
- (void)deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 forQuery:(id)arg3;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id /* block */)initialResultsHandler;
- (id)intervalComponents;
- (id)lastAnchor;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)resetStatisticsForQuery:(id)arg1;
- (void)setInitialResultsHandler:(id /* block */)arg1;
- (void)setLastAnchor:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setStatisticsCollection:(id)arg1;
- (void)setStatisticsUpdateHandler:(id /* block */)arg1;
- (id)statisticsCollection;
- (id /* block */)statisticsUpdateHandler;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;

@end
