/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {
    UIView * _accessoryView;
    bool  _batterySaverModeActive;
    unsigned long long  _cachedBatteryStyle;
    int  _cachedCapacity;
    bool  _cachedImageHasAccessoryImage;
    _UILegibilityImageSet * _cachedImageSet;
    int  _capacity;
    int  _state;
}

@property (nonatomic) unsigned long long cachedBatteryStyle;
@property (nonatomic) int cachedCapacity;
@property (nonatomic) bool cachedImageHasAccessoryImage;
@property (nonatomic, retain) _UILegibilityImageSet *cachedImageSet;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)_accessoryImage;
- (struct CGSize { double x1; double x2; })_batteryOffsetWithBackground:(id)arg1;
- (id)_contentsImage;
- (bool)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (unsigned long long)cachedBatteryStyle;
- (int)cachedCapacity;
- (bool)cachedImageHasAccessoryImage;
- (id)cachedImageSet;
- (id)contentsImage;
- (double)extraRightPadding;
- (double)legibilityStrength;
- (void)setCachedBatteryStyle:(unsigned long long)arg1;
- (void)setCachedCapacity:(int)arg1;
- (void)setCachedImageHasAccessoryImage:(bool)arg1;
- (void)setCachedImageSet:(id)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityIsBatteryPercentVisible;
- (bool)_axIsCapacityDirty;
- (void)_axSetCapacityDirty:(bool)arg1;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (bool)isAccessibilityElement;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end