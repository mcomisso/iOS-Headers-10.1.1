/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerView : UIView <NSCoding, UIPickerTableViewContainerDelegate, UIPickerViewScrollTesting, UITableViewDataSource, UITableViewDelegate> {
    UIView * _backgroundView;
    UIImageView * _bottomGradient;
    UIView * _bottomLineView;
    _UIPickerViewTestParameters * _currentTestParameters;
    <UIPickerViewDataSource> * _dataSource;
    <UIPickerViewDelegate> * _delegate;
    NSMutableArray * _dividers;
    bool  _enabled;
    UIView * _foregroundView;
    bool  _magnifierEnabled;
    UIColor * _magnifierLineColor;
    CALayer * _maskGradientLayer;
    long long  _numberOfComponents;
    struct { 
        unsigned int needsLayout : 1; 
        unsigned int delegateRespondsToNumberOfComponentsInPickerView : 1; 
        unsigned int delegateRespondsToNumberOfRowsInComponent : 1; 
        unsigned int delegateRespondsToDidSelectRow : 1; 
        unsigned int delegateRespondsToViewForRow : 1; 
        unsigned int delegateRespondsToTitleForRow : 1; 
        unsigned int delegateRespondsToAttributedTitleForRow : 1; 
        unsigned int delegateRespondsToWidthForComponent : 1; 
        unsigned int delegateRespondsToRowHeightForComponent : 1; 
        unsigned int showsSelectionBar : 1; 
        unsigned int allowsMultipleSelection : 1; 
        unsigned int allowSelectingCells : 1; 
        unsigned int soundsDisabled : 1; 
        unsigned int usesCheckedSelection : 1; 
        unsigned int skipsBackground : 1; 
        unsigned int isInLayoutSubviews : 1; 
    }  _pickerViewFlags;
    _UIFeedbackRetargetBehavior * _retargetBehavior;
    NSMutableArray * _selectionBars;
    NSMutableArray * _tables;
    UIColor * _textColor;
    UIColor * _textShadowColor;
    UIView * _topFrame;
    UIImageView * _topGradient;
    UIView * _topLineView;
    bool  _usesModernStyle;
}

@property (setter=_setMagnifierEnabled:, nonatomic) bool _magnifierEnabled;
@property (nonatomic) <UIPickerViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_enabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=_highlightColor, setter=_setHighlightColor:, nonatomic, retain) UIColor *highlightColor;
@property (getter=_magnifierLineColor, setter=_setMagnifierLineColor:, nonatomic, retain) UIColor *magnifierLineColor;
@property (nonatomic, readonly) long long numberOfComponents;
@property (getter=_retargetBehavior, setter=_setRetargetBehavior:, nonatomic, retain) _UIFeedbackRetargetBehavior *retargetBehavior;
@property (nonatomic) bool showsSelectionIndicator;
@property (readonly) Class superclass;
@property (getter=_textColor, setter=_setTextColor:, nonatomic, retain) UIColor *textColor;
@property (getter=_textShadowColor, setter=_setTextShadowColor:, nonatomic, retain) UIColor *textShadowColor;
@property (getter=_usesModernStyle, setter=_setUsesModernStyle:) bool usesModernStyle;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (struct CGSize { double x1; double x2; })defaultSizeForCurrentOrientation;
+ (struct CGSize { double x1; double x2; })defaultSizeForMainScreenTraits;
+ (struct CGSize { double x1; double x2; })defaultSizeForTraits:(id)arg1;
+ (void)initialize;
+ (struct CGSize { double x1; double x2; })sizeForMainScreenTraitsThatFits:(struct CGSize { double x1; double x2; })arg1;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 forTraits:(id)arg2;

- (void).cxx_destruct;
- (void)_UIAppearance_setMagnifierLineColor:(id)arg1;
- (void)_UIAppearance_setTextColor:(id)arg1;
- (void)__scalarStatisticsForUserValueChangedEvent:(void *)arg1; // needs 1 arg types, found 5: short, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, char *, short, /* Warning: Unrecognized filer type: ',' using 'void*' */ void*
- (void)_addMagnifierLinesForRowHeight:(double)arg1;
- (void)_completeCurrentTest;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize { double x1; double x2; })_contentSizeForRow:(long long)arg1 inComponent:(long long)arg2;
- (id)_contentView;
- (id)_createColumnWithTableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rowHeight:(double)arg2;
- (id)_createTableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forComponent:(long long)arg2;
- (id)_createViewForPickerPiece:(long long)arg1;
- (id)_delegateAttributedTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (long long)_delegateNumberOfComponents;
- (long long)_delegateNumberOfRowsInComponent:(long long)arg1;
- (double)_delegateRowHeightForComponent:(long long)arg1;
- (id)_delegateTitleForRow:(long long)arg1 forComponent:(long long)arg2;
- (double)_delegateWidthForComponent:(long long)arg1 ofCount:(int)arg2 withSizeLeft:(double)arg3;
- (bool)_drawsBackground;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_effectiveTableViewFrameForColumn:(long long)arg1;
- (bool)_enabled;
- (bool)_forceTextAlignmentCentered;
- (id)_highlightColor;
- (struct CGSize { double x1; double x2; })_intrinsicSizeWithinSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_isLandscapeOrientation;
- (void)_iterateOnCurrentTest;
- (bool)_magnifierEnabled;
- (id)_magnifierLineColor;
- (bool)_needsLayout;
- (void)_noteScrollingFinishedForComponent:(long long)arg1;
- (id)_orientationImageSuffix;
- (void)_performScrollTest:(id)arg1 withIterations:(long long)arg2 rowsToScroll:(long long)arg3 inComponent:(long long)arg4;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_perspectiveTransform;
- (id)_popoverSuffix;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetSelectionOfTables;
- (id)_retargetBehavior;
- (id)_scalarStatisticsForUserValueChangedEvent;
- (void)_selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3 notify:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionBarRectForHeight:(double)arg1;
- (id)_selectionBarSuffix;
- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(bool)arg3;
- (void)_sendSelectionChangedForComponent:(long long)arg1 notify:(bool)arg2;
- (void)_sendSelectionChangedFromTable:(id)arg1 notify:(bool)arg2;
- (void)_setColumnView:(id)arg1 enabled:(bool)arg2;
- (void)_setDrawsBackground:(bool)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setHighlightColor:(id)arg1;
- (void)_setMagnifierEnabled:(bool)arg1;
- (void)_setMagnifierLineColor:(id)arg1;
- (void)_setRetargetBehavior:(id)arg1;
- (void)_setTextColor:(id)arg1;
- (void)_setTextShadowColor:(id)arg1;
- (void)_setUsesCheckedSelection:(bool)arg1;
- (void)_setUsesModernStyle:(bool)arg1;
- (bool)_shouldDrawWithModernStyle;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)_soundsEnabled;
- (double)_tableRowHeight;
- (id)_textColor;
- (id)_textShadowColor;
- (void)_updateSelectedRows;
- (void)_updateWithOldSize:(struct CGSize { double x1; double x2; })arg1 newSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)_usesCheckSelection;
- (bool)_usesCheckedSelection;
- (bool)_usesModernStyle;
- (double)_wheelShift;
- (void)_willPlayClickSound;
- (bool)allowsMultipleSelection;
- (long long)columnForTableView:(id)arg1;
- (id)createDividerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dataSource;
- (struct CGSize { double x1; double x2; })defaultSize;
- (id)delegate;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)imageForPickerPiece:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElementByDefault;
- (void)layoutSubviews;
- (long long)numberOfColumns;
- (long long)numberOfComponents;
- (long long)numberOfRowsInColumn:(long long)arg1;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)pickerImageNamePrefix;
- (void)reload;
- (void)reloadAllPickerPieces;
- (void)reloadComponent:(long long)arg1;
- (void)reloadData;
- (void)reloadDataForColumn:(int)arg1;
- (struct CGSize { double x1; double x2; })rowSizeForComponent:(long long)arg1;
- (void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(bool)arg3;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(bool)arg3;
- (int)selectedRowForColumn:(int)arg1;
- (long long)selectedRowInComponent:(long long)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setShowsSelectionIndicator:(bool)arg1;
- (void)setSoundsEnabled:(bool)arg1;
- (bool)showsSelectionIndicator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableViewForColumn:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForRow:(long long)arg1 forComponent:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRowsForColumn:(int)arg1;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (int)_accessibilityPickerType;
- (void)_accessibilityResetContainerElements;
- (id)accessibilityElements;
- (void)dealloc;
- (bool)isAccessibilityElement;
- (void)reloadAllComponents;
- (double)scrollAnimationDuration;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end
