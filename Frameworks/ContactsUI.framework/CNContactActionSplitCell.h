/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactActionSplitCell : CNLabeledCell {
    UIButton * _leftLabel;
    UIButton * _rightLabel;
}

@property (nonatomic, readonly) UIButton *leftLabel;
@property (nonatomic, readonly) UIButton *rightLabel;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void).cxx_destruct;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;
- (id)constantConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelView;
- (id)leftLabel;
- (double)minCellHeight;
- (id)rightLabel;
- (id)rightMostView;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (id)standardButton;

// Image: /System/Library/AccessibilityBundles/ContactsUI.axbundle/ContactsUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityElements;

@end
