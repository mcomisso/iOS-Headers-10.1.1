/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailNotesCell : EKEventDetailCell {
    bool  _isTruncatingNotes;
    UILabel * _notesTitleView;
    UITextView * _notesView;
}

@property (nonatomic, readonly) bool isTruncatingNotes;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void).cxx_destruct;
- (id)_notesTitleView;
- (id)_notesView;
- (bool)isTruncatingNotes;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (bool)update;

// Image: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework

+ (Class)safeCategoryBaseClass;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityChargedLineBoundsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x1; double x2; })arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (bool)isAccessibilityElement;

@end
