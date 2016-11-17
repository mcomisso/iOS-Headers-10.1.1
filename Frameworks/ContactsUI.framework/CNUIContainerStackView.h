/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIContainerStackView : UIView <_UIMultilineTextContentSizing> {
    long long  _alignment;
    NSMutableArray * _arrangedSubviews;
    long long  _axis;
    bool  _baselineRelativeArrangement;
    NSMutableDictionary * _cachedIntrinsicSizes;
    double * _cachedSpacings;
    NSMapTable * _cachedSystemLayoutSizes;
    struct { double x1; double x2; } * _cachedVisibleStackLinePairs;
    <CNUIContainerStackViewDelegate> * _delegate;
    long long  _distribution;
    bool  _layoutMarginsRelativeArrangement;
    double  _preferredMaxLayoutWidth;
    double  _spacing;
    Class  _spacingViewClass;
    NSMutableArray * _spacingViews;
    struct { 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int delegateDidInvalidateIntrinsicContentSize : 1; 
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview : 1; 
        unsigned int delegateLayoutFrameForArrangedSubview : 1; 
        unsigned int delegateMinimumSpacingAdjecentToArrangedSubview : 1; 
    }  _stackViewFlags;
}

@property (nonatomic) long long alignment;
@property (nonatomic, copy) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIContainerStackViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution;
@property (readonly) unsigned long long hash;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) bool layoutMarginsRelativeArrangement;
@property (nonatomic) double spacing;
@property (nonatomic, retain) Class spacingViewClass;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)__calculateIntrinsicSizesForViews:(id)arg1 withAvailableSize:(struct CGSize { double x1; double x2; })arg2 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 totalSize:(struct CGSize { double x1; double x2; }*)arg4;
- (void)__finalizeSizesForViews:(id)arg1 withIndexesToRemeasure:(id)arg2 availableSize:(struct CGSize { double x1; double x2; })arg3 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 totalSize:(struct CGSize { double x1; double x2; }*)arg5;
- (id)__indexesToRemeasureAfterCompressingViews:(id)arg1 ifNeededToFitAvailableSize:(struct CGSize { double x1; double x2; })arg2 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 totalSize:(struct CGSize { double x1; double x2; }*)arg4;
- (id)__indexesToRemeasureAfterExpandingViews:(id)arg1 withDistribution:(long long)arg2 ifNeededToFillAvailableSize:(struct CGSize { double x1; double x2; })arg3 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 totalSize:(struct CGSize { double x1; double x2; }*)arg5;
- (id)_baselineViewVendForFirstBaseline:(bool)arg1;
- (void)_calculateAlignmentPositionsForViews:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)_calculateDistributiontPositionsForViews:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 totalSize:(struct CGSize { double x1; double x2; })arg3 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (void)_calculateSizesForViews:(id)arg1 withDistribution:(long long)arg2 availableSize:(struct CGSize { double x1; double x2; })arg3 intoRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4 totalSize:(struct CGSize { double x1; double x2; }*)arg5 maxSize:(struct CGSize { double x1; double x2; }*)arg6;
- (void)_didRemoveSubview:(id)arg1;
- (void)_freeCachedMetricsIfNeeded;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_needsDoubleUpdateConstraintsPass;
- (void)_positionsViews:(id)arg1 withRects:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_resetToBeginningOfDoublePass;
- (void)_setInSecondConstraintsPass:(bool)arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArangedSubview:(id)arg2;
- (double)_totalSpacingAndCacheMetricsIfNeededForViews:(id)arg1;
- (id)_visibleArrangedSubviews;
- (void)addArrangedSubview:(id)arg1;
- (long long)alignment;
- (id)arrangedSubviews;
- (long long)axis;
- (id)delegate;
- (long long)distribution;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateIntrinsicContentSize;
- (bool)isBaselineRelativeArrangement;
- (bool)isLayoutMarginsRelativeArrangement;
- (void)layoutSubviews;
- (void)notifyArrangedSubviewVisibilityChanged:(id)arg1;
- (void)removeArrangedSubview:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDistribution:(long long)arg1;
- (void)setLayoutMarginsRelativeArrangement:(bool)arg1;
- (void)setSpacing:(double)arg1;
- (void)setSpacingViewClass:(Class)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)spacing;
- (Class)spacingViewClass;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
