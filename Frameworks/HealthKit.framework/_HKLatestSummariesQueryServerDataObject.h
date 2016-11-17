/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKLatestSummariesQueryServerDataObject : _HKQueryServerDataObject {
    NSCalendar * _calendar;
    NSDate * _endDate;
    NSDate * _startDate;
    NSSet * _typeFilters;
}

@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSSet *typeFilters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)calendar;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTypeFilters:(id)arg1;
- (id)startDate;
- (id)typeFilters;

@end
