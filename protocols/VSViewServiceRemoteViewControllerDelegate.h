/* Generated by RuntimeBrowser.
 */

@protocol VSViewServiceRemoteViewControllerDelegate <NSObject>

@required

- (void)dismissViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
- (void)presentViewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didCancelRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didChooseAdditionalProvidersForRequest:(NSUUID *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceRemoteViewController:(VSViewServiceRemoteViewController *)arg1 request:(NSUUID *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;

@end
