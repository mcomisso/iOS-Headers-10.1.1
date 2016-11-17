/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsContentView : UIView {
    NSAttributedString * _attributedTitle;
    NSString * _auxSubtitle;
    UILabel * _auxSubtitleLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    PXRoundedCornerOverlayView * _cornerOverlayView;
    UIImageView * _imageView;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSAttributedString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *auxSubtitle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSAttributedString *title;

- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_updateAuxSubtitleLabel;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)auxSubtitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAuxSubtitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
