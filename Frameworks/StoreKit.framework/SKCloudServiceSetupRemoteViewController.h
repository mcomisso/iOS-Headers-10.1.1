/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface> {
    <SKCloudServiceSetupRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKCloudServiceSetupRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)didFinishLoadingWithSuccess:(bool)arg1 error:(id)arg2;
- (void)dismissCloudServiceSetupViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
