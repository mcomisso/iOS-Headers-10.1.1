/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTextContentView : UITextContentView {
    bool  _keepScrollPosition;
    long long  _preventScrollSelectionToVisible;
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollPosition;
}

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (bool)becomeFirstResponder;
- (void)beginPreventingScrollSelectionToVisible;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)decreaseQuoteLevel;
- (id)enclosingScrollView;
- (void)endPreventingScrollSelectionToVisible;
- (void)ensureSelection;
- (void)increaseQuoteLevel;
- (id)keyCommands;
- (bool)resignFirstResponder;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)showQuoteLevelOptions;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;

// Image: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityCustomTextOperations;
- (bool)_accessibilityHasTextOperations;
- (id)_accessibilityHitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilityRoleDescription;
- (void)_accessibilitySetValue:(id)arg1;
- (bool)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)_axAttachmentNames;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end
