/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSleepQueryResultBuilder : NSObject {
    NSDateInterval * _resultInterval;
    NSMutableDictionary * _samplesByCategoryValue;
    NSArray * _sourceOrder;
}

- (void).cxx_destruct;
- (id)_categorySampleBufferForCategoryValue:(long long)arg1;
- (id)_createDateIntervalsFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)_organizeSamplesBySource:(id)arg1;
- (void)addSleepSamples:(id)arg1;
- (id)calculateResult;
- (id)initWithResultInterval:(id)arg1 sourceOrder:(id)arg2;

@end
