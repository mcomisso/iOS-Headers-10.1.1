/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAlertView : UIView {
    bool  __currentlyRunningModal;
    NSMutableArray * _actions;
    UIAlertController * _alertController;
    bool  _alertControllerShouldDismiss;
    long long  _alertViewStyle;
    long long  _cancelIndex;
    id  _context;
    long long  _defaultButtonIndex;
    id  _delegate;
    bool  _dismissingAlertController;
    UIViewController * _externalViewControllerForPresentation;
    long long  _firstOtherButtonIndex;
    bool  _handlingAlertActionShouldDismiss;
    bool  _hasPreparedAlertActions;
    bool  _isPresented;
    NSString * _message;
    _UIAlertControllerShimPresenter * _presenter;
    UIAlertView * _retainedSelf;
    bool  _runsModal;
    NSString * _subtitle;
}

@property (setter=_setCurrentlyRunningModal:, nonatomic) bool _currentlyRunningModal;
@property (nonatomic) long long alertViewStyle;
@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) id delegate;
@property (getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:, nonatomic, retain) UIViewController *externalViewControllerForPresentation;
@property (nonatomic, readonly) long long firstOtherButtonIndex;
@property (nonatomic) bool groupsTextFields;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) long long numberOfButtons;
@property (nonatomic) bool showsOverSpringBoardAlerts;
@property (nonatomic, copy) NSString *title;
@property (getter=isVisible, nonatomic, readonly) bool visible;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_alertViewForSessionWithRemoteViewController:(id)arg1;
+ (id)_alertViewForWindow:(id)arg1;
+ (id)_alertWindow;
+ (bool)_isAlertControllerShimClass;
+ (id)_remoteAlertViewWithBlock:(id /* block */)arg1;
+ (void)_setSpringBoardAlertDisplayingOverApplicationAlert:(bool)arg1;
+ (bool)_springBoardAlertDisplayingOverApplicationAlert;
+ (void)applyTransformToAllAlerts:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
+ (struct CGSize { double x1; double x2; })minimumSize;

- (void).cxx_destruct;
- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_addButtonWithTitleText:(id)arg1;
- (id)_addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (id)_alertController;
- (void)_beginRunningModallyIfNecessary;
- (id)_buttonAtIndex:(long long)arg1;
- (double)_buttonHeight;
- (bool)_canShowAlerts;
- (void)_changeButtonTitleAtIndex:(long long)arg1 toTitle:(id)arg2;
- (long long)_currentOrientation;
- (bool)_currentlyRunningModal;
- (id)_defaultButton;
- (id)_destructiveButton;
- (id)_dimView;
- (void)_dismissForTappedIndex:(long long)arg1;
- (void)_endRunningModallyIfNecessary;
- (id)_externalViewControllerForPresentation;
- (bool)_isAnimating;
- (bool)_isSBAlert;
- (double)_maxHeight;
- (long long)_maximumNumberOfTextFieldsForCurrentStyle;
- (void)_performPopup:(bool)arg1;
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (void)_prepareAlertActions;
- (void)_prepareForDisplay;
- (void)_prepareToBeReplaced;
- (bool)_prepareToDismissForTappedIndex:(long long)arg1;
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(bool)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAccessoryViewController:(id)arg1;
- (void)_setCurrentlyRunningModal:(bool)arg1;
- (void)_setDefaultButton:(id)arg1;
- (void)_setDestructiveButton:(id)arg1;
- (void)_setExternalViewControllerForPresentation:(id)arg1;
- (void)_setFirstOtherButtonIndex:(long long)arg1;
- (void)_setIsPresented:(bool)arg1;
- (void)_setTextFieldsHidden:(bool)arg1;
- (bool)_shouldUseUndoStyle;
- (void)_showAnimated:(bool)arg1;
- (void)_showByReplacingAlert:(id)arg1 animated:(bool)arg2;
- (void)_showByReplacingPreviousAlertAnimated:(bool)arg1;
- (void)_textDidChangeInTextField:(id)arg1;
- (id)_titleLabel;
- (void)_updateButtonTitles;
- (void)_updateFirstOtherButtonEnabledState;
- (void)_updateFrameForDisplay;
- (void)_updateMessageAndSubtitle;
- (void)_useLegacyUI:(bool)arg1;
- (void)_useUndoStyle:(bool)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)alertSheetStyle;
- (long long)alertViewStyle;
- (struct CGSize { double x1; double x2; })backgroundSize;
- (int)bodyMaxLineCount;
- (id)bodyText;
- (id)bodyTextLabel;
- (id)buttonAtIndex:(long long)arg1;
- (int)buttonCount;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)defaultButton;
- (long long)defaultButtonIndex;
- (id)delegate;
- (bool)dimsBackground;
- (void)dismiss;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)firstOtherButtonIndex;
- (bool)forceHorizontalButtonsLayout;
- (bool)groupsTextFields;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (bool)isBodyTextTruncated;
- (bool)isVisible;
- (id)keyboard;
- (void)layout;
- (void)layoutAnimated:(bool)arg1;
- (id)message;
- (long long)numberOfButtons;
- (int)numberOfLinesInTitle;
- (long long)numberOfRows;
- (void)popupAlertAnimated:(bool)arg1;
- (void)popupAlertAnimated:(bool)arg1 animationType:(int)arg2;
- (void)popupAlertAnimated:(bool)arg1 atOffset:(double)arg2;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)replaceAlert:(id)arg1;
- (bool)requiresPortraitOrientation;
- (bool)runsModal;
- (void)setAlertSheetStyle:(int)arg1;
- (void)setAlertViewStyle:(long long)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDefaultButtonIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(bool)arg1;
- (void)setForceHorizontalButtonsLayout:(bool)arg1;
- (void)setGroupsTextFields:(bool)arg1;
- (void)setKeyboardShowsOnPopup:(bool)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumberOfRows:(long long)arg1;
- (void)setRunsModal:(bool)arg1;
- (void)setShowsOverSpringBoardAlerts:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuspendTag:(int)arg1;
- (void)setTableShouldShowMinimumContent:(bool)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (void)show;
- (void)showWithAnimationType:(int)arg1;
- (bool)showsOverSpringBoardAlerts;
- (id)subtitle;
- (int)suspendTag;
- (bool)tableShouldShowMinimumContent;
- (id)tableView;
- (id)taglineTextLabel;
- (id)textField;
- (id)textFieldAtIndex:(long long)arg1;
- (int)textFieldCount;
- (id)title;
- (id)titleLabel;
- (int)titleMaxLineCount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (id)window;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftUIKit.dylib

- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4;

@end
