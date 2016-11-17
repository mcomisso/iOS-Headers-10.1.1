/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusGuideRegion : _UIFocusRegion {
    <_UIFocusGuideRegionDelegate> * _delegate;
}

@property (nonatomic) <_UIFocusGuideRegionDelegate> *delegate;

- (void).cxx_destruct;
- (id)_delegatePreferredFocusEnvironmentsForMovement:(id)arg1;
- (id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)_fallbackFocusItemForMovement:(id)arg1 inFocusMap:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (bool)_isEnabledForFocusedRegion:(id)arg1;
- (bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (bool)_shouldOccludeRegion:(id)arg1;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end