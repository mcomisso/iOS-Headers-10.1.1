/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotationView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _badgeImageSize;
    unsigned long long  _count;
    UIImageView * _countBadgeImageView;
    UILabel * _countLabel;
    PUMapViewControllerSpec * _spec;
    PUStackView * _stackView;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, readonly) double sideCapWidth;
@property (nonatomic, readonly, retain) PUStackView *stackView;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void).cxx_destruct;
- (void)cleanUpAnimatedState;
- (id)compactDescription;
- (unsigned long long)count;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1 nonFrontOnly:(bool)arg2;
- (void)setCount:(unsigned long long)arg1;
- (double)sideCapWidth;
- (id)stackView;
- (void)updateLabelForAnnotation:(id)arg1;
- (void)updateOrder;
- (void)updateStackViewForAnnotation:(id)arg1;
- (bool)wouldCoverAnnotationView:(id)arg1;

// Image: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)configureAnnotationWithSpec:(id)arg1;
- (bool)isAccessibilityElement;

@end
