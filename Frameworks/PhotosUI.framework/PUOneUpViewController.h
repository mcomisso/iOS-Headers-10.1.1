/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpViewController : UIViewController <PHAirPlayControllerContentProvider, PUAccessoryTileViewControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PUAssetDisplayDescriptorNavigator, PUBarsControllerDelegate, PUBrowsingViewModelChangeObserver, PUDoubleTapZoomControllerDelegate, PUInteractiveDismissalControllerDelegate, PUIrisImageTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOneUpAssetTransitionViewController, PUOneUpBarsControllerDelegate, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpTilingLayoutDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUPlayButtonTileViewControllerDelegate, PUTilingViewControllerTransitionEndPoint, PUTilingViewScrollDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUUserTransformTileViewControllerDelegate, PUViewControllerSpecChangeObserver, PXDiagnosticsEnvironment, PXPurgeableController, UIScrollViewDelegate, _UISettingsKeyObserver> {
    PUOneUpAccessoryViewControllersManager * __accessoryViewControllersManager;
    PUAccessoryVisibilityInteractionController * __accessoryVisibilityInteractionController;
    PUBrowsingBackgroundTileViewController * __backgroundTileViewController;
    PUOneUpBarsController * __barsController;
    NSTimer * __chromeAutoHideTimer;
    PUAssetDisplayDescriptorNavigationRequest * __currentNavigationRequest;
    PUDoubleTapZoomController * __doubleTapZoomController;
    PUOneUpGestureRecognizerCoordinator * __gestureRecognizerCoordinator;
    NSArray * __hiddenTilesController;
    PUInteractivePinchDismissalController * __interactivePinchDismissalController;
    PUInteractiveSwipeDismissalController * __interactiveSwipeDismissalController;
    bool  __isIrisPlaying;
    bool  __isPerformingPreviewCommitTransition;
    bool  __isPresentedForSecondScreen;
    struct CGSize { 
        double width; 
        double height; 
    }  __layoutReferenceSize;
    bool  __needsUpdateAudioState;
    bool  __needsUpdateBarsController;
    bool  __needsUpdateEditMode;
    bool  __needsUpdateLayout;
    bool  __needsUpdatePreferredContentSize;
    bool  __needsUpdatePreloadInsets;
    bool  __needsUpdateSpec;
    unsigned long long  __options;
    PUOverOneUpPresentationSession * __overOneUpPresentationSession;
    PUParallaxComputer * __parallaxComputer;
    struct CGSize { 
        double width; 
        double height; 
    }  __pendingViewTransitionSize;
    double  __preloadInsetsBasedOffViewWidth;
    PUOneUpViewController * __secondScreenBrowser;
    bool  __shouldShowAccessoryAfterUnlock;
    PUOneUpViewControllerSpec * __spec;
    bool  __suppressColorSettings;
    NSArray * __tileKindsToHide;
    PUTilingView * __tilingView;
    bool  _allowsPreviewActions;
    PUBrowsingSession * _browsingSession;
    bool  _isCommitingPreview;
    bool  _isPresentedForPreview;
    PUPreviewActionController * _previewActionController;
    NSString * _scrubbingIdentifier;
    id /* block */  _unlockDeviceHandler;
    id /* block */  _unlockDeviceStatus;
}

@property (nonatomic, readonly) PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager;
@property (nonatomic, readonly) PUAccessoryVisibilityInteractionController *_accessoryVisibilityInteractionController;
@property (setter=_setBackgroundTileViewController:, nonatomic, retain) PUBrowsingBackgroundTileViewController *_backgroundTileViewController;
@property (nonatomic, readonly) PUOneUpBarsController *_barsController;
@property (setter=_setChromeAutoHideTimer:, nonatomic, retain) NSTimer *_chromeAutoHideTimer;
@property (setter=_setCurrentNavigationRequest:, nonatomic, retain) PUAssetDisplayDescriptorNavigationRequest *_currentNavigationRequest;
@property (nonatomic, readonly) PUDoubleTapZoomController *_doubleTapZoomController;
@property (nonatomic, readonly) PUOneUpGestureRecognizerCoordinator *_gestureRecognizerCoordinator;
@property (setter=_setHiddenTilesController:, nonatomic, retain) NSArray *_hiddenTilesController;
@property (nonatomic, readonly) PUInteractivePinchDismissalController *_interactivePinchDismissalController;
@property (nonatomic, readonly) PUInteractiveSwipeDismissalController *_interactiveSwipeDismissalController;
@property (setter=_setIrisPlaying:, nonatomic) bool _isIrisPlaying;
@property (setter=_setPerformingPreviewCommitTransition:, nonatomic) bool _isPerformingPreviewCommitTransition;
@property (nonatomic, readonly) bool _isPresentedForSecondScreen;
@property (setter=_setLayoutReferenceSize:, nonatomic) struct CGSize { double x1; double x2; } _layoutReferenceSize;
@property (setter=_setNeedsUpdateAudioState:, nonatomic) bool _needsUpdateAudioState;
@property (setter=_setNeedsUpdateBarsController:, nonatomic) bool _needsUpdateBarsController;
@property (setter=_setNeedsUpdateEditMode:, nonatomic) bool _needsUpdateEditMode;
@property (setter=_setNeedsUpdateLayout:, nonatomic) bool _needsUpdateLayout;
@property (setter=_setNeedsUpdatePreferredContentSize:, nonatomic) bool _needsUpdatePreferredContentSize;
@property (setter=_setNeedsUpdatePreloadInsets:, nonatomic) bool _needsUpdatePreloadInsets;
@property (setter=_setNeedsUpdateSpec:, nonatomic) bool _needsUpdateSpec;
@property (nonatomic, readonly) unsigned long long _options;
@property (setter=_setOverOneUpPresentationSession:, nonatomic, retain) PUOverOneUpPresentationSession *_overOneUpPresentationSession;
@property (nonatomic, readonly) PUParallaxComputer *_parallaxComputer;
@property (setter=_setPendingViewTransitionSize:, nonatomic) struct CGSize { double x1; double x2; } _pendingViewTransitionSize;
@property (setter=_setPreloadInsetsBasedOffViewWidth:, nonatomic) double _preloadInsetsBasedOffViewWidth;
@property (setter=_setSecondScreenBrowser:, nonatomic, retain) PUOneUpViewController *_secondScreenBrowser;
@property (setter=_setShouldShowAccessoryAfterUnlock:, nonatomic) bool _shouldShowAccessoryAfterUnlock;
@property (nonatomic, readonly) PUOneUpViewControllerSpec *_spec;
@property (setter=_setSuppressBackdropColorSettings:, nonatomic) bool _suppressColorSettings;
@property (setter=_setTileKindsToHide:, nonatomic, retain) NSArray *_tileKindsToHide;
@property (setter=_setTilingView:, nonatomic, retain) PUTilingView *_tilingView;
@property (setter=setAllowsPreviewActions:, nonatomic) bool allowsPreviewActions;
@property (nonatomic, readonly) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setCommitingPreview:, nonatomic) bool isCommitingPreview;
@property (setter=setPresentedForPreview:, nonatomic) bool isPresentedForPreview;
@property (nonatomic, readonly) PUOneUpBarsController *ppt_barsController;
@property (nonatomic, readonly) UIViewController *ppt_currentAccessoryViewController;
@property (nonatomic, readonly) UIScrollView *ppt_mainScrollView;
@property (nonatomic, readonly) PUOverOneUpPresentationSession *ppt_overOneUpPresentationSession;
@property (nonatomic, readonly) PUPreviewActionController *previewActionController;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unlockDeviceHandler;
@property (nonatomic, copy) id /* block */ unlockDeviceStatus;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void).cxx_destruct;
- (void)_abandonTileController:(id)arg1;
- (long long)_accessoryContentKindForCurrentAsset;
- (id)_accessoryViewControllersManager;
- (id)_accessoryVisibilityInteractionController;
- (id)_assetReferenceAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_assetViewModelAtIndexPath:(id)arg1 layout:(id)arg2;
- (id)_backgroundTileViewController;
- (id)_barsController;
- (void)_browsingVideoPlayerDidPlayToEndTime:(id)arg1;
- (bool)_canAttemptNavigationToAssetDisplayDescriptor:(id)arg1;
- (void)_cancelTimedChromeAutoHide;
- (id)_chromeAutoHideTimer;
- (void)_chromeAutoHideTimerFired:(id)arg1;
- (void)_configureAdoptedTileController:(id)arg1;
- (id)_currentAccessoryViewController;
- (id)_currentAssetViewModel;
- (id)_currentContentTileController;
- (id)_currentNavigationRequest;
- (id)_currentPlaceholderSnapshotViewForTileController:(id)arg1;
- (void)_didEndTransition;
- (id)_doubleTapZoomController;
- (void)_fixAssetViewModelTileTransformIfNecessary:(id)arg1;
- (id)_gestureRecognizerCoordinator;
- (void)_handleTouchGesture:(id)arg1;
- (id)_hiddenTilesController;
- (void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(bool)arg1;
- (void)_hideOverlays;
- (id)_interactivePinchDismissalController;
- (id)_interactiveSwipeDismissalController;
- (void)_invalidateAudioState;
- (void)_invalidateBarsControllers;
- (void)_invalidateEditMode;
- (void)_invalidateLayout;
- (void)_invalidatePreferredContentSize;
- (void)_invalidatePreloadInsets;
- (void)_invalidateSpec;
- (bool)_isAccessoryVisible;
- (bool)_isDrivingScrubbing;
- (bool)_isIrisPlaying;
- (bool)_isLayoutAffectedBySpecChange:(id)arg1;
- (bool)_isLocationFromProviderInAccessoryArea:(id)arg1;
- (bool)_isLocationFromProviderOverControl:(id)arg1;
- (bool)_isPerformingPreviewCommitTransition;
- (bool)_isPresentedForSecondScreen;
- (bool)_isSecondScreenBrowserVisible;
- (struct CGSize { double x1; double x2; })_layoutReferenceSize;
- (bool)_needsUpdate;
- (bool)_needsUpdateAudioState;
- (bool)_needsUpdateBarsController;
- (bool)_needsUpdateEditMode;
- (bool)_needsUpdateLayout;
- (bool)_needsUpdatePreferredContentSize;
- (bool)_needsUpdatePreloadInsets;
- (bool)_needsUpdateSpec;
- (id)_newOneUpLayout;
- (void)_notifyTileIsReadyWithTimeOut:(double)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_options;
- (id)_overOneUpPresentationSession;
- (id)_parallaxComputer;
- (struct CGSize { double x1; double x2; })_pendingViewTransitionSize;
- (void)_performNavigationToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)_preloadInsetsBasedOffViewWidth;
- (void)_presentAlertForError:(id)arg1;
- (void)_presentErrorAlertForUnplayableAssetReference:(id)arg1;
- (void)_scheduleTimedChromeAutoHide;
- (id)_secondScreenBrowser;
- (void)_setAccessoryVisible:(bool)arg1;
- (void)_setBackgroundTileViewController:(id)arg1;
- (void)_setChromeAutoHideTimer:(id)arg1;
- (void)_setCurrentNavigationRequest:(id)arg1;
- (void)_setHiddenTilesController:(id)arg1;
- (void)_setIrisPlaying:(bool)arg1;
- (void)_setLayoutReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateAudioState:(bool)arg1;
- (void)_setNeedsUpdateBarsController:(bool)arg1;
- (void)_setNeedsUpdateEditMode:(bool)arg1;
- (void)_setNeedsUpdateLayout:(bool)arg1;
- (void)_setNeedsUpdatePreferredContentSize:(bool)arg1;
- (void)_setNeedsUpdatePreloadInsets:(bool)arg1;
- (void)_setNeedsUpdateSpec:(bool)arg1;
- (void)_setOverOneUpPresentationSession:(id)arg1;
- (void)_setPendingViewTransitionSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setPerformingPreviewCommitTransition:(bool)arg1;
- (void)_setPreloadInsetsBasedOffViewWidth:(double)arg1;
- (void)_setSecondScreenBrowser:(id)arg1;
- (void)_setShouldShowAccessoryAfterUnlock:(bool)arg1;
- (void)_setSuppressBackdropColorSettings:(bool)arg1;
- (void)_setTileKindsToHide:(id)arg1;
- (void)_setTilingView:(id)arg1;
- (bool)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)arg1;
- (bool)_shouldShowAccessoryAfterUnlock;
- (bool)_shouldUseGlobalAccessoryViewVisibility;
- (id)_spec;
- (bool)_suppressColorSettings;
- (id)_tileKindsToHide;
- (id)_tilingView;
- (void)_toggleAccessoryVisibility;
- (void)_toggleCommentsVisibility;
- (void)_unhideOverlays;
- (void)_updateAudioStateIfNeeded;
- (void)_updateBackgroundTileViewController;
- (void)_updateBarsControllerIfNeeded;
- (void)_updateEditModeIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayout:(id)arg1;
- (void)_updateLayoutIfNeeded;
- (void)_updateLayoutReferenceSize;
- (void)_updatePreferredContentSizeIfNeeded;
- (void)_updatePreloadInsetsIfNeeded;
- (void)_updatePreviewActionController;
- (void)_updateSpecIfNeeded;
- (void)_updateViewModelWithCurrentScrollPosition;
- (id)_videoPlayerAtIndexPath:(id)arg1 layout:(id)arg2;
- (void)_willBeginTransition;
- (id)accessoryTileViewControllerAccessoryViewController:(id)arg1;
- (id)accessoryTileViewControllerHostViewController:(id)arg1;
- (id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (bool)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)arg1;
- (bool)accessoryVisibilityInteractionController:(id)arg1 canBeginAtLocationFromProvider:(id)arg2;
- (bool)accessoryVisibilityInteractionController:(id)arg1 isLocationFromProviderInAccessoryContent:(id)arg2;
- (void)accessoryVisibilityInteractionController:(id)arg1 setAccessoryVisible:(bool)arg2 changeReason:(long long)arg3;
- (void)accessoryVisibilityInteractionControllerDidEnd:(id)arg1;
- (id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg1;
- (void)airPlayControllerScreenAvailabilityChanged:(id)arg1;
- (bool)allowsPreviewActions;
- (id)barsController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)barsControllerContentGuideInsetsDidChange:(id)arg1;
- (id)barsControllerViewController:(id)arg1;
- (id)barsControllerViewHostingGestureRecognizers:(id)arg1;
- (id)browsingSession;
- (id)contentScrollView;
- (id)contentViewControllerForAirPlayController:(id)arg1;
- (void)dealloc;
- (bool)doubleTapZoomController:(id)arg1 canDoubleTapBeginAtLocationFromProvider:(id)arg2;
- (id)doubleTapZoomController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (id)doubleTapZoomControllerTilingView:(id)arg1;
- (id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1;
- (id)initWithBrowsingSession:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)interactiveDismissalController:(id)arg1 canBeginDismissalAtLocationFromProvider:(id)arg2;
- (id)interactiveDismissalControllerDesignatedTileController:(id)arg1;
- (id)interactiveDismissalControllerTilingView:(id)arg1;
- (id)interactiveDismissalControllerViewController:(id)arg1;
- (id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)arg1;
- (id)irisImageTileViewController:(id)arg1 delegateForGestureRecognizer:(id)arg2;
- (void)irisImageTileViewControllerDidBeginHinting:(id)arg1;
- (void)irisImageTileViewControllerDidBeginPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidEndPlaying:(id)arg1;
- (void)irisImageTileViewControllerDidEndVitality:(id)arg1;
- (id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)arg1;
- (bool)isCommitingPreview;
- (bool)isPresentedForPreview;
- (struct CGPoint { double x1; double x2; })layout:(id)arg1 accessoryOffsetForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 aspectRatioForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })layout:(id)arg1 badgeSizeForItemAtIndexPath:(id)arg2;
- (struct CGPoint { double x1; double x2; })layout:(id)arg1 contentOffsetForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 disableInitialZoomToFillForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg2;
- (double)layout:(id)arg1 minimumVisibleContentHeightForItemAtIndexPath:(id)arg2;
- (id)layout:(id)arg1 modelTileTransformForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowAccessoryForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowLoadingIndicatorForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowPlayButtonForItemAtIndexPath:(id)arg2;
- (bool)layout:(id)arg1 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg2;
- (void)loadView;
- (void)navigateToAssetDisplayDescriptor:(id)arg1 beforeDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)oneUpAccessoryViewControllersManager:(id)arg1 preventRevealInMomentActionForAssetReference:(id)arg2;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(id /* block */)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(id /* block */)arg2;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (bool)oneUpBarsController:(id)arg1 canShowCommentsForAsset:(id)arg2;
- (void)oneUpBarsController:(id)arg1 didTapPlayPauseButton:(bool)arg2;
- (bool)oneUpBarsController:(id)arg1 isAccessoryAvailableForAssetReference:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg2;
- (bool)oneUpBarsController:(id)arg1 shouldTapBeginAtLocationFromProvider:(id)arg2;
- (void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg1;
- (void)oneUpBarsControllerDidTapTitle:(id)arg1;
- (void)oneUpBarsControllerToggleCommentsVisibility:(id)arg1;
- (void)oneUpBarsControllerToggleDetailsVisibility:(id)arg1;
- (bool)oneUpGestureRecgonizerCoordinator:(id)arg1 shouldAllowIrisGestureAtLocationFromProvider:(id)arg2;
- (id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)arg1;
- (void)overOneUpPresentationSession:(id)arg1 didPresent:(id)arg2;
- (id)overOneUpPresentationSessionBrowserViewModel:(id)arg1;
- (id)overOneUpPresentationSessionCreateIfNeeded:(bool)arg1;
- (id)overOneUpPresentationSessionCurrentTileController:(id)arg1;
- (void)overOneUpPresentationSessionDidFinish:(id)arg1;
- (bool)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)arg1;
- (id)overOneUpPresentationSessionTilingView:(id)arg1;
- (id)overOneUpPresentationSessionViewController:(id)arg1;
- (double)playButtonTileViewController:(id)arg1 delayForButtonAnimation:(bool)arg2;
- (void)playButtonTileViewController:(id)arg1 didTapButton:(bool)arg2;
- (id)ppt_barsController;
- (id)ppt_currentAccessoryViewController;
- (id)ppt_mainScrollView;
- (id)ppt_overOneUpPresentationSession;
- (void)ppt_toggleAccessoryView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (id)previewActionController;
- (id)previewActionItems;
- (id)pu_debugCurrentAsset;
- (id)pu_debugCurrentViewModel;
- (long long)pu_preferredBarStyle;
- (bool)pu_wantsNavigationBarVisible;
- (bool)pu_wantsTabBarVisible;
- (bool)pu_wantsToolbarVisible;
- (void)purgeIfPossible;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)px_endPointForTransition:(id)arg1;
- (bool)px_isSnapBackDestination;
- (id)px_snapBackHistorySubtitle;
- (id)px_snapBackHistoryTitle;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAllowsPreviewActions:(bool)arg1;
- (void)setCommitingPreview:(bool)arg1;
- (void)setPresentedForPreview:(bool)arg1;
- (void)setUnlockDeviceHandler:(id /* block */)arg1;
- (void)setUnlockDeviceStatus:(id /* block */)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 initialVisibleOriginWithLayout:(id)arg2;
- (id)tilingView:(id)arg1 scrollInfoWithLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })tilingView:(id)arg1 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg2 withLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg2;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForReattachedTileControllers:(id)arg2 context:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (bool)tilingViewCanBypass20069585Check:(id)arg1;
- (void)tilingViewControllerTransition:(id)arg1 abandonTilingView:(id)arg2 toEndPoint:(id)arg3;
- (void)tilingViewControllerTransition:(id)arg1 adoptTilingView:(id)arg2 fromEndPoint:(id)arg3 isCancelingTransition:(bool)arg4 animationSetupCompletionHandler:(id /* block */)arg5;
- (id)tilingViewControllerTransition:(id)arg1 tilingViewToTransferToEndPoint:(id)arg2;
- (id)tilingViewControllerTransitionTilingViewHostView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)unlockDeviceHandler;
- (id /* block */)unlockDeviceStatus;
- (void)userTransformTileViewController:(id)arg1 didChangeIsUserInteracting:(bool)arg2;
- (void)userTransformTileViewController:(id)arg1 didChangeModelTileTransform:(id)arg2;
- (bool)userTransformTileViewController:(id)arg1 shouldReceiveTouchAtLocationFromProvider:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg1;

// Image: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework

+ (Class)safeCategoryBaseClass;

- (void)_accessibilityLoadAccessibilityInformation;
- (bool)_axDetailsVisible;
- (void)_setAXDetailsVisible:(bool)arg1;
- (void)_toggleDetailsVisibility;

@end
