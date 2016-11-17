/* Generated by RuntimeBrowser.
 */

@protocol WPXPCDaemonProtocol <NSObject>

@optional

- (void)addCharacteristic:(WPCharacteristic *)arg1 forService:(NSUUID *)arg2;
- (void)checkAllowDuplicates:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)connectToPeer:(NSUUID *)arg1;
- (void)disableScanning;
- (void)disconnectFromPeer:(NSUUID *)arg1;
- (void)discoverCharacteristicsAndServices:(NSDictionary *)arg1 forPeripheral:(NSUUID *)arg2;
- (void)enableTestMode;
- (void)getAllTrackedZones;
- (void)getPowerLogStats:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)listenToBandwidthNotifications;
- (void)registerWithDaemon:(NSString *)arg1 forProcess:(NSString *)arg2 machName:(NSString *)arg3 shouldHoldVoucherForConnections:(bool)arg4;
- (void)sendDataToCharacteristic:(WPCharacteristic *)arg1 inService:(NSString *)arg2 forPeer:(NSUUID *)arg3;
- (void)shouldSubscribe:(bool)arg1 toPeer:(NSUUID *)arg2 withCharacteristic:(NSString *)arg3 inService:(NSString *)arg4;
- (void)startAdvertising:(WPAdvertisingRequest *)arg1;
- (void)startScanning:(WPScanRequest *)arg1;
- (void)startTrackingPeerWithRequest:(WPPeerTrackingRequest *)arg1;
- (void)startTrackingZone:(WPZoneTrackingRequest *)arg1;
- (void)stopAdvertising:(WPAdvertisingRequest *)arg1;
- (void)stopScanning:(WPScanRequest *)arg1;
- (void)stopTrackingAllZones;
- (void)stopTrackingPeerWithRequest:(WPPeerTrackingRequest *)arg1;
- (void)stopTrackingZones:(NSArray *)arg1;

@end
