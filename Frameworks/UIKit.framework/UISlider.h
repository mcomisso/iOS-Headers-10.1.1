/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISlider : UIControl <NSCoding> {
    double  _alpha;
    bool  _animatingWithDynamics;
    struct __CFDictionary { } * _contentLookup;
    _UIFeedbackEdgeBehavior * _edgeFeedbackBehavior;
    double  _hitOffset;
    UIImageView * _innerThumbView;
    bool  _maxColorIsValid;
    UIColor * _maxTintColor;
    UIView * _maxTrackClipView;
    UIImageView * _maxTrackView;
    float  _maxValue;
    UIImageView * _maxValueImageView;
    UIColor * _minTintColor;
    UIImageView * _minTrackView;
    float  _minValue;
    UIImageView * _minValueImageView;
    _UIFeedbackModulationBehavior * _modulationFeedbackBehavior;
    struct { 
        unsigned int continuous : 1; 
        unsigned int animating : 1; 
        unsigned int preparingToAnimate : 1; 
        unsigned int showValue : 1; 
        unsigned int trackEnabled : 1; 
        unsigned int creatingSnapshot : 1; 
        unsigned int thumbDisabled : 1; 
        unsigned int minTrackHidden : 1; 
    }  _sliderFlags;
    bool  _thumbIsArtworkBased;
    UIColor * _thumbTintColor;
    UIImageView * _thumbView;
    UIView * _thumbViewNeue;
    NSArray * _trackColors;
    bool  _trackIsArtworkBased;
    bool  _useLookNeue;
    float  _value;
}

@property (nonatomic) double akMaximumValue;
@property (nonatomic) double akMinimumValue;
@property (nonatomic) double akValue;
@property (getter=isContinuous, nonatomic) bool continuous;
@property (nonatomic, readonly) UIImage *currentMaximumTrackImage;
@property (nonatomic, readonly) UIImage *currentMinimumTrackImage;
@property (nonatomic, readonly) UIImage *currentThumbImage;
@property (getter=_edgeFeedbackBehavior, setter=_setEdgeFeedbackBehavior:, nonatomic, retain) _UIFeedbackEdgeBehavior *edgeFeedbackBehavior;
@property (nonatomic, retain) UIColor *maximumTrackTintColor;
@property (nonatomic) float maximumValue;
@property (nonatomic, retain) UIImage *maximumValueImage;
@property (nonatomic, retain) UIColor *minimumTrackTintColor;
@property (nonatomic) float minimumValue;
@property (nonatomic, retain) UIImage *minimumValueImage;
@property (getter=_modulationFeedbackBehavior, setter=_setModulationFeedbackBehavior:, nonatomic, retain) _UIFeedbackModulationBehavior *modulationFeedbackBehavior;
@property (nonatomic, retain) UIColor *thumbTintColor;
@property (nonatomic) float value;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (bool)_allowActionsToQueue;

- (void).cxx_destruct;
- (id)__distributionStatisticsForUserInteractionDuration;
- (bool)_alwaysHandleScrollerMouseEvent;
- (void)_buildTrackArtwork;
- (id)_contentForState:(unsigned long long)arg1;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (double)_cornerRadiusForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_edgeFeedbackBehavior;
- (void)_initImages;
- (void)_initSubviews;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isThumbEnabled;
- (void)_layoutSubviewsForBoundsChange:(bool)arg1;
- (id)_maxTrackView;
- (id)_maxValueView;
- (id)_maximumTrackImageForState:(unsigned long long)arg1;
- (id)_minTrackView;
- (id)_minValueView;
- (id)_minimumTrackImageForState:(unsigned long long)arg1;
- (id)_modulationFeedbackBehavior;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_rebuildControlThumb:(bool)arg1 track:(bool)arg2;
- (void)_sendDelayedActions;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setEdgeFeedbackBehavior:(id)arg1;
- (void)_setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setMinimumTrackVisible:(bool)arg1 withDuration:(double)arg2;
- (void)_setModulationFeedbackBehavior:(id)arg1;
- (void)_setThumbEnabled:(bool)arg1;
- (void)_setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setThumbTintColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTrackEnabled:(bool)arg1;
- (void)_setUseLookNeue:(bool)arg1;
- (void)_setValue:(float)arg1 andSendAction:(bool)arg2;
- (void)_setValue:(float)arg1 minValue:(float)arg2 maxValue:(float)arg3 andSendAction:(bool)arg4;
- (void)_setupFeedback;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_thumbHitEdgeInsets;
- (id)_thumbImageForState:(unsigned long long)arg1;
- (bool)_trackEnabled;
- (void)_updateAppearanceForEnabled:(bool)arg1;
- (void)_updateMaxTrackColorForInitialization:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (id)createThumbView;
- (id)createThumbViewNeue;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)currentThumbImage;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (bool)isAnimatingValueChange;
- (bool)isContinuous;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (void)layoutSubviews;
- (id)maximumTrackImageForState:(unsigned long long)arg1;
- (id)maximumTrackTintColor;
- (float)maximumValue;
- (id)maximumValueImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)minimumTrackImageForState:(unsigned long long)arg1;
- (id)minimumTrackTintColor;
- (float)minimumValue;
- (id)minimumValueImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContinuous:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMaximumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMaximumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)setMaximumValue:(float)arg1;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumTrackImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setMinimumTrackImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setMinimumTrackTintColor:(id)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setShowValue:(bool)arg1;
- (void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setThumbImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setThumbTintColor:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbImageForState:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (id)thumbTintColor;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)value;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueTextRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityAbsoluteValue;
- (void)_accessibilityAnnounceNewValue;
- (void)_accessibilityBumpValue:(bool)arg1;
- (double)_accessibilityIncreaseAmount:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_accessibilityMaxScrubberPosition;
- (double)_accessibilityMaxValue;
- (struct CGPoint { double x1; double x2; })_accessibilityMinScrubberPosition;
- (double)_accessibilityMinValue;
- (void)_accessibilitySetValue:(id)arg1;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)isAccessibilityElement;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (double)akMaximumValue;
- (double)akMinimumValue;
- (double)akValue;
- (void)setAkMaximumValue:(double)arg1;
- (void)setAkMinimumValue:(double)arg1;
- (void)setAkValue:(double)arg1;

@end
