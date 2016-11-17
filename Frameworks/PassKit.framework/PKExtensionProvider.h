/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKExtensionProvider : NSObject {
    bool  _didReceiveExtensions;
    NSObject<OS_dispatch_queue> * _extensionQueue;
    NSObject<OS_dispatch_semaphore> * _extensionSema;
    NSDictionary * _extensions;
    id  _matchingContext;
    NSDictionary * _passKitExtensions;
}

@property (nonatomic, readonly) NSArray *allExtensions;
@property (nonatomic) bool didReceiveExtensions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *extensionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *extensionSema;
@property (nonatomic, retain) NSDictionary *extensions;
@property (nonatomic, retain) id matchingContext;
@property (nonatomic, retain) NSDictionary *passKitExtensions;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;
- (void)_beginRemoteViewControllerExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;
- (id)_extensionWithIdentifier:(id)arg1;
- (void)_receivedExtensions:(id)arg1;
- (id)allExtensions;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (bool)didReceiveExtensions;
- (void)endMatchingExtensions;
- (id)extensionQueue;
- (id)extensionSema;
- (id)extensionWithIdentifier:(id)arg1;
- (void)extensionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)extensions;
- (id)init;
- (id)matchingContext;
- (id)passKitExtensions;
- (void)setDidReceiveExtensions:(bool)arg1;
- (void)setExtensionQueue:(id)arg1;
- (void)setExtensionSema:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setMatchingContext:(id)arg1;
- (void)setPassKitExtensions:(id)arg1;

@end
