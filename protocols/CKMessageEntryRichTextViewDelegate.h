/* Generated by RuntimeBrowser.
 */

@protocol CKMessageEntryRichTextViewDelegate <UITextViewDelegate>

@required

- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 didTapMediaObject:(CKMediaObject *)arg2;
- (void)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 pastedURL:(NSString *)arg2;
- (bool)messageEntryRichTextView:(CKMessageEntryRichTextView *)arg1 shouldPasteMediaObjects:(NSArray *)arg2;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(CKMessageEntryRichTextView *)arg1;
- (void)messageEntryRichTextViewWasTapped:(CKMessageEntryRichTextView *)arg1 isLongPress:(bool)arg2;

@end
