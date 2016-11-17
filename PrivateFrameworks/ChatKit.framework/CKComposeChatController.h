/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKComposeChatController : CKChatController <CKComposeRecipientSelectionControllerDelegate> {
    UIBarButtonItem * _composeCancelItem;
    CKComposeRecipientSelectionController * _composeRecipientSelectionController;
    bool  _newComposeCancelled;
    CKComposition * _prepopulatedComposition;
    NSArray * _prepopulatedRecipients;
}

@property (nonatomic, retain) UIBarButtonItem *composeCancelItem;
@property (nonatomic, retain) CKComposeRecipientSelectionController *composeRecipientSelectionController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKComposeChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool newComposeCancelled;
@property (nonatomic, retain) CKComposition *prepopulatedComposition;
@property (nonatomic, retain) NSArray *prepopulatedRecipients;
@property (nonatomic, readonly) NSArray *proposedRecipients;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unatomizedRecipientText;

- (void).cxx_destruct;
- (bool)_chatShowsUnexpectedlyLoggedOutNotification;
- (double)_entryViewTopInsetPadding;
- (void)_saveDraftState;
- (void)_setConversationDeferredSetup;
- (void)_updateNavigationButtons;
- (void)_updateTitleAnimated:(bool)arg1;
- (bool)becomeFirstResponder;
- (void)cancelButtonTapped:(id)arg1;
- (id)composeCancelItem;
- (id)composeRecipientSelectionController;
- (void)conversationLeft;
- (void)dealloc;
- (bool)hasFailedRecipients;
- (bool)hasUnreachableEmergencyRecipient;
- (id)initWithRecipientAddresses:(id)arg1 composition:(id)arg2;
- (id)inputAccessoryView;
- (bool)isComposingRecipient;
- (bool)isSafeToMarkAsRead;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (bool)newComposeCancelled;
- (id)outgoingComposeViewForSendAnimation;
- (void)parentControllerDidResume:(bool)arg1 animating:(bool)arg2;
- (void)prepareForSuspend;
- (id)prepopulatedComposition;
- (id)prepopulatedRecipients;
- (id)proposedRecipients;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (void)sendComposition:(id)arg1;
- (void)setComposeCancelItem:(id)arg1;
- (void)setComposeRecipientSelectionController:(id)arg1;
- (void)setNewComposeCancelled:(bool)arg1;
- (void)setPrepopulatedComposition:(id)arg1;
- (void)setPrepopulatedRecipients:(id)arg1;
- (bool)shouldUseNavigationBarCanvasView;
- (double)topInsetPadding;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (id)unatomizedRecipientText;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
