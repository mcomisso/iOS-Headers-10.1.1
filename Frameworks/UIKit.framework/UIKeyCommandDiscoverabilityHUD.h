/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUD : NSObject {
    NSTimer * _HUDPopTimer;
    bool  _commandKeyIsDown;
    _UIKeyCommandDiscoverabilityHUDWindow * _window;
}

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)sharedKeyCommandDiscoverabilityHUD;

- (void).cxx_destruct;
- (void)_HUDPopTimerFired:(id)arg1;
- (id)_performableKeyCommandsWithResponder:(id)arg1;
- (void)_scheduleHUDPresentation;
- (void)dealloc;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (void)_applicationWillResignActive;
- (void)_axSelectFirstHUDElement;
- (void)_dismissHUD;
- (void)_presentHUDWithKeyCommands:(id)arg1;
- (bool)accessibilityPerformEscape;
- (void)handlePhysicalKeyboardEvent:(id)arg1;

@end
