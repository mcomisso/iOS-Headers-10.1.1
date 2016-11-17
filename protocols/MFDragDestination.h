/* Generated by RuntimeBrowser.
 */

@protocol MFDragDestination <NSObject>

@required

- (void)dragEntered:(id <MFDraggableItem>)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)dragExited:(id <MFDraggableItem>)arg1;
- (void)dragUpdated:(id <MFDraggableItem>)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)dropItem:(id <MFDraggableItem>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dropRect;
- (NSArray *)supportedDropTypes:(NSArray *)arg1;
- (UIView *)viewForDrop;

@end
