/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBXpcConnection : NSObject {
    <CBXpcConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _eventQueue;
    NSMutableDictionary * _options;
    int  _sessionType;
    bool  _uiAppIsBackgrounded;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

- (void).cxx_destruct;
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_applicationWillEnterForegroundNotification;
- (void)_checkIn;
- (void)_checkOut;
- (void)_handleConnectionEvent:(id)arg1;
- (void)_handleFinalized;
- (void)_handleInvalid;
- (void)_handleMsg:(id)arg1;
- (void)_handleReset;
- (id)_nameForMessage:(unsigned short)arg1;
- (void)_sendBarrier;
- (void)disconnect;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)setTargetQueue:(id)arg1;

@end
