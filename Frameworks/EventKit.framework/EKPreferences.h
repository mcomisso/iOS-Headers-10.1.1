/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (nonatomic) bool alwaysSetArrivedAndSettledForReminders;
@property (nonatomic, retain) NSArray *deselectedCalendarIdentifiers;
@property (nonatomic, retain) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) bool privacyPaneHasBeenAcknowledged;
@property (nonatomic) bool refiringReminderAlarmsEnabled;
@property (nonatomic) bool remindMeAboutThisInCalendarWidgetEnabled;
@property (nonatomic, retain) NSArray *selectedCalendarIdentifiers;
@property (nonatomic) double travelEngineThrottlePeriod;
@property (nonatomic) bool useShortReminderRefireInterval;
@property (nonatomic) bool useShortReminderSnoozeInterval;

+ (id)shared;

- (void).cxx_destruct;
- (bool)alwaysSetArrivedAndSettledForReminders;
- (id)deselectedCalendarIdentifiers;
- (id)deselectedCalendarSyncHashes;
- (id)init;
- (bool)privacyPaneHasBeenAcknowledged;
- (bool)refiringReminderAlarmsEnabled;
- (bool)remindMeAboutThisInCalendarWidgetEnabled;
- (id)selectedCalendarIdentifiers;
- (void)setAlwaysSetArrivedAndSettledForReminders:(bool)arg1;
- (void)setDeselectedCalendarIdentifiers:(id)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setPrivacyPaneHasBeenAcknowledged:(bool)arg1;
- (void)setRefiringReminderAlarmsEnabled:(bool)arg1;
- (void)setRemindMeAboutThisInCalendarWidgetEnabled:(bool)arg1;
- (void)setSelectedCalendarIdentifiers:(id)arg1;
- (void)setTravelEngineThrottlePeriod:(double)arg1;
- (void)setUseShortReminderRefireInterval:(bool)arg1;
- (void)setUseShortReminderSnoozeInterval:(bool)arg1;
- (double)travelEngineThrottlePeriod;
- (bool)useShortReminderRefireInterval;
- (bool)useShortReminderSnoozeInterval;

@end