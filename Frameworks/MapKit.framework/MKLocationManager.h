/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MKLocationProviderDelegate> {
    bool  _allowOldLocations;
    double  _applicationResumeTime;
    double  _applicationSuspendTime;
    int  _consecutiveOutOfCourseCount;
    bool  _continuedAfterBecomingInactive;
    bool  _continuesWhileInactive;
    bool  _enabled;
    bool  _hasCustomDesiredAccuracy;
    CLHeading * _heading;
    NSHashTable * _headingObservers;
    NSTimer * _headingThrottlingTimer;
    double  _headingUpdateTime;
    bool  _isLastLocationStale;
    bool  _isReceivingAccurateLocations;
    CLLocation * _lastGoodLocation;
    CLLocation * _lastLocation;
    NSLock * _lastLocationLock;
    bool  _lastLocationPushed;
    double  _lastLocationReportTime;
    double  _lastLocationUpdateTime;
    double  _lastVehicleHeading;
    double  _lastVehicleHeadingUpdateTime;
    double  _lastVehicleSpeed;
    double  _lastVehicleSpeedUpdateTime;
    double  _locationAccuracyUpdateTime;
    id /* block */  _locationCorrector;
    NSError * _locationError;
    NSHashTable * _locationListeners;
    NSHashTable * _locationObservers;
    <MKLocationProvider> * _locationProvider;
    <MNLocationRecorder> * _locationRecorder;
    GEOLocationShifter * _locationShifter;
    double  _locationUpdateStartTime;
    bool  _logStartStopLocationUpdates;
    double  _minimumLocationUpdateInterval;
    double  _navCourse;
    id /* block */  _networkActivity;
    NSLock * _observersLock;
    NSMutableArray * _recentLocationUpdateIntervals;
    bool  _suspended;
    CLHeading * _throttledHeading;
    bool  _trackingHeading;
    bool  _trackingLocation;
    bool  _useCourseForHeading;
    NSMutableArray * _waitForAccurateLocationsHandlers;
    NSTimer * _waitForAccurateLocationsTimer;
}

@property (nonatomic) long long activityType;
@property (nonatomic) bool allowOldLocations;
@property (nonatomic, copy) id /* block */ authorizationRequestBlock;
@property (nonatomic) bool continuesWhileInactive;
@property (nonatomic, readonly) GEOLocation *courseCorrectedLocation;
@property (nonatomic, readonly) GEOLocation *currentLocation;
@property (nonatomic, readonly) double currentVehicleHeading;
@property (nonatomic, readonly) double currentVehicleSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly) GEOLocation *gridSnappedCurrentLocation;
@property (nonatomic, readonly) bool hasLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLHeading *heading;
@property (nonatomic) long long headingOrientation;
@property (nonatomic, readonly) double headingUpdateTimeInterval;
@property (nonatomic, readonly) bool isHeadingServicesAvailable;
@property (nonatomic, readonly) bool isLastLocationStale;
@property (nonatomic, readonly) bool isLocationServicesApproved;
@property (nonatomic, readonly) bool isLocationServicesAvailable;
@property (nonatomic, readonly) bool isLocationServicesDenied;
@property (nonatomic, readonly) bool isLocationServicesEnabled;
@property (nonatomic, readonly) bool isLocationServicesPossiblyAvailable;
@property (nonatomic, readonly) bool isLocationServicesRestricted;
@property (nonatomic, readonly) CLLocation *lastGoodLocation;
@property (nonatomic, readonly) CLLocation *lastLocation;
@property (getter=wasLastLocationPushed, nonatomic, readonly) bool lastLocationPushed;
@property (nonatomic, readonly) int lastLocationSource;
@property (nonatomic, readonly) CLLocation *lastProviderLocation;
@property (nonatomic, copy) id /* block */ locationCorrector;
@property (nonatomic, readonly) NSError *locationError;
@property (nonatomic, retain) <MKLocationProvider> *locationProvider;
@property (nonatomic, retain) <MNLocationRecorder> *locationRecorder;
@property (getter=isLocationServicesAuthorizationNeeded, nonatomic, readonly) bool locationServicesAuthorizationNeeded;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (nonatomic, readonly) bool locationShiftEnabled;
@property (nonatomic) bool logStartStopLocationUpdates;
@property (nonatomic) bool matchInfoEnabled;
@property (nonatomic) double minimumLocationUpdateInterval;
@property (nonatomic, readonly) double navigationCourse;
@property (nonatomic, copy) id /* block */ networkActivity;
@property (readonly) Class superclass;
@property (nonatomic, retain) CLHeading *throttledHeading;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic) bool useCourseForHeading;
@property (nonatomic, readonly) double vehicleHeadingOrCourse;

+ (void)setCanMonitorWiFiStatus:(bool)arg1;
+ (id)sharedLocationManager;
+ (id)timeoutError;

- (void).cxx_destruct;
- (bool)_isTimeToResetOnResume;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_setIsReceivingAccurateLocations:(bool)arg1;
- (void)_setTrackingHeading:(bool)arg1;
- (void)_setTrackingLocation:(bool)arg1;
- (bool)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_suspend;
- (void)_syncLocationProviderWithTracking;
- (void)_useCoreLocationProvider;
- (void)_waitForAccurateLocationsTimerFired:(id)arg1;
- (long long)activityType;
- (bool)allowOldLocations;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id /* block */)authorizationRequestBlock;
- (bool)continuesWhileInactive;
- (id)courseCorrectedLocation;
- (id)currentLocation;
- (double)currentVehicleHeading;
- (double)currentVehicleSpeed;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (void)dealloc;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (id)gridSnappedCurrentLocation;
- (bool)hasLocation;
- (id)heading;
- (long long)headingOrientation;
- (double)headingUpdateTimeInterval;
- (id)init;
- (bool)isEnabled;
- (bool)isHeadingServicesAvailable;
- (bool)isLastLocationStale;
- (bool)isLocationServicesApproved;
- (bool)isLocationServicesAuthorizationNeeded;
- (bool)isLocationServicesAvailable;
- (bool)isLocationServicesDenied;
- (bool)isLocationServicesEnabled;
- (bool)isLocationServicesPossiblyAvailable;
- (bool)isLocationServicesPossiblyAvailable:(id*)arg1;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isLocationServicesRestricted;
- (id)lastGoodLocation;
- (id)lastLocation;
- (int)lastLocationSource;
- (id)lastProviderLocation;
- (void)listenForLocationUpdates:(id)arg1;
- (id /* block */)locationCorrector;
- (id)locationError;
- (id)locationProvider;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (id)locationRecorder;
- (bool)locationShiftEnabled;
- (bool)logStartStopLocationUpdates;
- (bool)matchInfoEnabled;
- (double)minimumLocationUpdateInterval;
- (double)navigationCourse;
- (id /* block */)networkActivity;
- (void)pushLocation:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)reset;
- (void)resetAfterResumeIfNecessary;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setActivityType:(long long)arg1;
- (void)setAllowOldLocations:(bool)arg1;
- (void)setAuthorizationRequestBlock:(id /* block */)arg1;
- (void)setContinuesWhileInactive:(bool)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHeading:(id)arg1;
- (void)setHeadingOrientation:(long long)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id /* block */)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setLogStartStopLocationUpdates:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setMinimumLocationUpdateInterval:(double)arg1;
- (void)setNetworkActivity:(id /* block */)arg1;
- (void)setThrottledHeading:(id)arg1;
- (void)setUseCourseForHeading:(bool)arg1;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id /* block */)arg2;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id /* block */)arg2 timeout:(double)arg3;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id /* block */)arg2 timeout:(double)arg3 maxLocationAge:(double)arg4;
- (id)singleLocationUpdateWithHandler:(id /* block */)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startVehicleHeadingUpdate;
- (void)startVehicleSpeedUpdate;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopListeningForLocationUpdates:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopVehicleHeadingUpdate;
- (void)stopVehicleSpeedUpdate;
- (id)throttledHeading;
- (double)timeScale;
- (bool)useCourseForHeading;
- (double)vehicleHeadingOrCourse;
- (void)waitForAccurateLocationWithHandler:(id /* block */)arg1;
- (bool)wasLastLocationPushed;

@end
