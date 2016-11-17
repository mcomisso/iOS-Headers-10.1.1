/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, UIPreviewInteractionDelegate, _UIForcePresentationControllerDelegate> {
    bool  _behaviorTurnedOn;
    id  _currentCommitTransition;
    UIPresentationController<UIForcePresentationController> * _currentPresentationController;
    UIViewController * _currentPreviewViewController;
    <UIForceTransitioningDelegate> * _currentTransitionDelegate;
    _UIDeepPressAnalyzer * _deepPressAnalyzer;
    <UIPreviewInteractionControllerDelegate> * _delegate;
    _UIFeedbackStatesBehavior * _feedbackBehavior;
    UIInteractionProgress * _interactionProgressForCommit;
    UIInteractionProgress * _interactionProgressForPresentation;
    bool  _isCommitting;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    UIPanGestureRecognizer * _modalPanGestureRecognizer;
    UIViewController * _presentingViewController;
    _UIPreviewGestureRecognizer * _previewGestureRecognizer;
    UIPreviewInteraction * _previewInteraction;
    _UIRevealGestureRecognizer * _revealGestureRecognizer;
    UIView * _sourceView;
    bool  _statusBarWasHidden;
    _UITouchesObservingGestureRecognizer * _touchObservingGestureRecognizer;
    UIWindow * _windowForPreviewPresentation;
}

@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (nonatomic, retain) id currentCommitTransition;
@property (nonatomic, retain) UIPresentationController<UIForcePresentationController> *currentPresentationController;
@property (nonatomic, retain) UIViewController *currentPreviewViewController;
@property (nonatomic, retain) <UIForceTransitioningDelegate> *currentTransitionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) _UIDeepPressAnalyzer *deepPressAnalyzer;
@property (nonatomic) <UIPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIFeedbackStatesBehavior *feedbackBehavior;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInteractionProgress *interactionProgressForCommit;
@property (nonatomic, retain) UIInteractionProgress *interactionProgressForPresentation;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, retain) UIPanGestureRecognizer *modalPanGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) _UIPreviewGestureRecognizer *previewGestureRecognizer;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic, retain) _UIRevealGestureRecognizer *revealGestureRecognizer;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) bool statusBarWasHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UITouchesObservingGestureRecognizer *touchObservingGestureRecognizer;
@property (nonatomic, retain) UIWindow *windowForPreviewPresentation;

- (void).cxx_destruct;
- (void)_activateFeedback;
- (void)_activateFeedbackIfNeeded;
- (void)_configureCommitInteractionProgressForView:(id)arg1;
- (void)_deactivateFeedbackIfNeeded;
- (void)_finalizeInteractivePreview;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleTouchObservingGesture:(id)arg1;
- (void)_panningRecognizerDidFire:(id)arg1;
- (bool)_previewingIsPossibleForView:(id)arg1;
- (void)_resetCustomPresentationHooks;
- (void)_setCalloutBarHidden:(bool)arg1;
- (void)_setStatusBarHidden:(bool)arg1;
- (id)_transitionDelegateForPreviewViewController:(id)arg1 atPosition:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3;
- (void)_turnOffFeedbackBehavior;
- (void)_turnOnFeedbackBehavior;
- (bool)_usesPreviewInteraction;
- (bool)_usesPreviewPresentationController;
- (bool)_viewControllerIsChildOfExpandedSplitViewController:(id)arg1;
- (id)beginPreviewGestureRecognizer;
- (void)cancelInteractivePreview;
- (void)commitInteractivePreview;
- (bool)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (void)configureRevealTransformWithInteractionProgress:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inView:(id)arg3 containerView:(id)arg4;
- (id)currentCommitTransition;
- (id)currentPresentationController;
- (id)currentPreviewViewController;
- (id)currentTransitionDelegate;
- (void)dealloc;
- (id)deepPressAnalyzer;
- (id)delegate;
- (id)feedbackBehavior;
- (void)forcePresentationController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)forcePresentationControllerDidDismiss:(id)arg1;
- (void)forcePresentationControllerWantsToCommit:(id)arg1;
- (void)forcePresentationControllerWillDismiss:(id)arg1;
- (void)forcePresentationTransitionWillBegin:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)init;
- (void)initGestureRecognizers;
- (id)initWithView:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)interactionProgressForCommit;
- (id)interactionProgressForPresentation;
- (struct CGPoint { double x1; double x2; })location;
- (id)modalPanGestureRecognizer;
- (id)presentationGestureRecognizer;
- (id)presentingViewController;
- (id)previewGestureRecognizer;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)revealGestureRecognizer;
- (void)setCurrentCommitTransition:(id)arg1;
- (void)setCurrentPresentationController:(id)arg1;
- (void)setCurrentPreviewViewController:(id)arg1;
- (void)setCurrentTransitionDelegate:(id)arg1;
- (void)setDeepPressAnalyzer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackBehavior:(id)arg1;
- (void)setInteractionProgressForCommit:(id)arg1;
- (void)setInteractionProgressForPresentation:(id)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setModalPanGestureRecognizer:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviewGestureRecognizer:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setRevealGestureRecognizer:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setStatusBarWasHidden:(bool)arg1;
- (void)setTouchObservingGestureRecognizer:(id)arg1;
- (void)setWindowForPreviewPresentation:(id)arg1;
- (id)sourceView;
- (bool)startInteractivePreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)startInteractivePreviewWithGestureRecognizer:(id)arg1;
- (bool)statusBarWasHidden;
- (id)touchObservingGestureRecognizer;
- (id)windowForPreviewPresentation;

@end
