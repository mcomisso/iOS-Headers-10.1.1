/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLocationController : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> * __authorizationQueue;
    NSMutableArray * __enqueuedAssetsWaitingForLocation;
    CLLocationManager * __locationManager;
    bool  __monitoringLocation;
    CLHeading * _currentHeading;
    CLLocation * _currentLocation;
    bool  _enabled;
    bool  _headingEnabled;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_authorizationQueue;
@property (nonatomic, readonly) NSMutableArray *_enqueuedAssetsWaitingForLocation;
@property (nonatomic, readonly) CLLocationManager *_locationManager;
@property (getter=_isMonitoringLocation, nonatomic, readonly) bool _monitoringLocation;
@property (nonatomic, readonly) CLHeading *currentHeading;
@property (nonatomic, readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isHeadingEnabled, nonatomic) bool headingEnabled;
@property (readonly) Class superclass;

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;

- (void).cxx_destruct;
- (id)_authorizationQueue;
- (void)_authorizeOrStartLocationManager;
- (id)_enqueuedAssetsWaitingForLocation;
- (bool)_isMonitoringLocation;
- (id)_locationManager;
- (void)_startMonitoringLocationUpdates;
- (void)_stopMonitoringLocationUpdates;
- (void)_updateAssetsWaitingOnLocation;
- (void)_updateLocationMonitoring;
- (id)currentHeading;
- (id)currentLocation;
- (void)dealloc;
- (void)enqueueAssetForLocationUpdates:(id)arg1;
- (id)init;
- (bool)isEnabled;
- (bool)isHeadingEnabled;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)locationMetadataForLocation:(id)arg1 captureOrientation:(long long)arg2 device:(long long)arg3;
- (void)setEnabled:(bool)arg1;
- (void)setHeadingEnabled:(bool)arg1;

@end
