/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerCell : UICollectionViewTableCell {
    UILongPressGestureRecognizer * _actionGestureRecognizer;
    long long  _cellStyle;
    _UIDocumentPickerDocumentCollectionViewController * _collectionView;
    NSArray * _gridConstraints;
    NSLayoutConstraint * _indentationConstraint;
    UIView * _indentationHelperView;
    NSArray * _indentedConstraints;
    _UIDocumentPickerContainerItem * _item;
    UILongPressGestureRecognizer * _pickableDiagnosticGestureRecognizer;
    UIProgressView * _progressView;
    UIImageView * _selectionView;
    UILabel * _subtitle2Label;
    UILabel * _subtitleJoiner;
    UILabel * _subtitleLabel;
    NSArray * _tableConstraints;
    UIImageView * _tagView;
    NSLayoutConstraint * _thumbnailCenterHeightConstraint;
    NSLayoutConstraint * _thumbnailCenterWidthConstraint;
    UIImageView * _thumbnailView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILongPressGestureRecognizer *actionGestureRecognizer;
@property (nonatomic) long long cellStyle;
@property (nonatomic) _UIDocumentPickerDocumentCollectionViewController *collectionView;
@property (nonatomic, retain) NSArray *gridConstraints;
@property (nonatomic, retain) NSLayoutConstraint *indentationConstraint;
@property (nonatomic, retain) UIView *indentationHelperView;
@property (nonatomic, retain) NSArray *indentedConstraints;
@property (nonatomic, retain) _UIDocumentPickerContainerItem *item;
@property (nonatomic, retain) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer;
@property (nonatomic, retain) UIProgressView *progressView;
@property (nonatomic, retain) UIImageView *selectionView;
@property (nonatomic, retain) UILabel *subtitle2Label;
@property (nonatomic, retain) UILabel *subtitleJoiner;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) NSArray *tableConstraints;
@property (nonatomic, retain) UIImageView *tagView;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailCenterHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailCenterWidthConstraint;
@property (nonatomic, retain) UIImageView *thumbnailView;
@property (nonatomic, retain) UILabel *titleLabel;

// Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI

+ (id)_subtitleFontForTable:(bool)arg1;
+ (id)_titleFontForTable:(bool)arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeForCellStyle:(long long)arg1 traitCollection:(id)arg2;
+ (struct CGSize { double x1; double x2; })thumbnailSizeForTraits:(id)arg1 cellStyle:(long long)arg2;

- (void).cxx_destruct;
- (void)_activityAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_infoAction:(id)arg1;
- (void)_moreAction:(id)arg1;
- (void)_moveAction:(id)arg1;
- (void)_renameAction:(id)arg1;
- (void)_showPickableDiagnostic;
- (void)_udpateLabelAlpha;
- (void)_updateAccessoryType;
- (void)_updateConstraintsForCellStyle;
- (void)_updateFonts;
- (void)_updateIconSize;
- (void)_updateSelectionState:(bool)arg1;
- (void)_updateSeparatorInset;
- (id)actionGestureRecognizer;
- (void)applyLayoutAttributes:(id)arg1;
- (id)availableActions;
- (bool)canBecomeFirstResponder;
- (long long)cellStyle;
- (id)collectionView;
- (void)dealloc;
- (id)gridConstraints;
- (id)indentationConstraint;
- (id)indentationHelperView;
- (id)indentedConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)pickableDiagnosticGestureRecognizer;
- (void)prepareForReuse;
- (id)progressView;
- (void)reloadItem:(bool)arg1;
- (id)selectionView;
- (void)setActionGestureRecognizer:(id)arg1;
- (void)setCellStyle:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setGridConstraints:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIndentationConstraint:(id)arg1;
- (void)setIndentationHelperView:(id)arg1;
- (void)setIndentedConstraints:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setPickableDiagnosticGestureRecognizer:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionView:(id)arg1;
- (void)setSubtitle2Label:(id)arg1;
- (void)setSubtitleJoiner:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTableConstraints:(id)arg1;
- (void)setTagView:(id)arg1;
- (void)setThumbnailCenterHeightConstraint:(id)arg1;
- (void)setThumbnailCenterWidthConstraint:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitle2Label;
- (id)subtitleJoiner;
- (id)subtitleLabel;
- (id)tableConstraints;
- (id)tagView;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)thumbnailCenterHeightConstraint;
- (id)thumbnailCenterWidthConstraint;
- (id)thumbnailView;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateActionGestureRecognizer;
- (void)updateForEditingState;

// Image: /System/Library/AccessibilityBundles/CloudDocsUI.axbundle/CloudDocsUI

+ (Class)safeCategoryBaseClass;

- (id)_axCustomActionsDefault;
- (bool)_axInfoAction;
- (bool)_axMoreAction;
- (void)_showActions:(id)arg1;
- (id)accessibilityCustomActions;
- (id)accessibilityLabel;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)isAccessibilityElement;

@end
