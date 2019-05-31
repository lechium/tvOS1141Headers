/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSISEngineDelegate.h>
#import <UIKit/_UIFocusEventRecognizerDelegate.h>
#import <UIKit/_UIFocusMovementActionForwarding.h>
#import <UIKit/_UIContextBindable.h>

@protocol UIFocusItem;
@class CAContext, _UIContextBinder, NSString, _UICanvas, UIView, UIResponder, NSUndoManager, CALayer, NSMutableArray, UIViewController, NSMutableSet, _UISystemGestureGateGestureRecognizer, UITraitCollection, UIAccessibilityHUDView, _UIViewControllerNullAnimationTransitionCoordinator, NSArray, _UIWindowAnimationController, _UIFocusEventRecognizer, UIScreen;

@interface UIWindow : UIView <NSISEngineDelegate, _UIFocusEventRecognizerDelegate, _UIFocusMovementActionForwarding, _UIContextBindable> {

	NSString* _debugName;
	long long _sceneOrientation;
	BOOL _notedOverlayInsetChange;
	id _delegate;
	double _windowLevel;
	double _windowSublevel;
	CAContext* _layerContext;
	_UICanvas* _canvas;
	_UIContextBinder* _contextBinder;
	UIView* _lastMouseDownView;
	UIView* _lastMouseEnteredView;
	UIResponder* _firstResponder;
	id _fingerInfo;
	id _touchData;
	long long _viewOrientation;
	UIView* _exclusiveTouchView;
	NSUndoManager* _undoManager;
	CALayer* _transformLayer;
	CALayer* _rootLayer;
	NSMutableArray* _rotationViewControllers;
	UIViewController* _rootViewController;
	NSMutableSet* _subtreeMonitoringViews;
	NSMutableSet* _tintViews;
	id _currentTintView;
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
		unsigned legacyOrientationChecks : 1;
		unsigned windowResizedToFullScreen : 1;
		unsigned statusBarFollowsOrientation : 1;
		unsigned secure : 1;
		unsigned isMainSceneSized : 1;
		unsigned didSetRestorationIdentifier : 1;
		unsigned resigningFirstResponderFromHost : 1;
	}  _windowFlags;
	id _windowController;
	_UISystemGestureGateGestureRecognizer* _systemGestureGateForGestures;
	_UISystemGestureGateGestureRecognizer* _systemGestureGateForTouches;
	UITraitCollection* _traitCollection;
	UITraitCollection* _destinationTraitCollection;
	CFDictionaryRef _touchMap;
	long long _containedGestureRecognizerMaximumState;
	double _lastTouchTimestamp;
	unsigned _systemGesturesArePossible : 1;
	long long _verticalSizeClassStateRestorationOverride;
	long long _horizontalSizeClassStateRestorationOverride;
	UIAccessibilityHUDView* _accessibilityHUD;
	BOOL _shouldDisableTransformLayerScalingForSnapshotting;
	BOOL __shouldHitTestEntireScreen;
	BOOL __usesLegacySupportedOrientationChecks;
	BOOL ___hostViewUnderlapsStatusBar;
	BOOL __containedGestureRecognizersShouldRespectGestureServerInstructions;
	_UIViewControllerNullAnimationTransitionCoordinator* _traitCollectionChangeTransitionCoordinator;
	NSArray* _windowInternalConstraints;
	NSArray* _rootViewConstraints;
	/*^block*/id _deferredLaunchBlock;
	long long __deferredLaunchOrientation;
	id<UIFocusItem> _rememberedFocusedItem;
	long long _toWindowOrientation;
	long long _fromWindowOrientation;
	_UIWindowAnimationController* __animationController;
	/*^block*/id __shouldPreventRotationHook;
	_UIFocusEventRecognizer* _focusEventRecognizer;

}

@property (getter=_focusResponder,nonatomic,__weak,readonly) UIResponder * focusResponder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setRootViewConstraints:,nonatomic,copy) NSArray * _rootViewConstraints;                                                                                                          //@synthesize rootViewConstraints=_rootViewConstraints - In the implementation block
@property (assign,setter=_setDeferredLaunchOrientation:,nonatomic) long long _deferredLaunchOrientation;                                                                                            //@synthesize _deferredLaunchOrientation=__deferredLaunchOrientation - In the implementation block
@property (assign,setter=_setShouldHitTestEntireScreen:,nonatomic) BOOL _shouldHitTestEntireScreen;                                                                                                 //@synthesize _shouldHitTestEntireScreen=__shouldHitTestEntireScreen - In the implementation block
@property (assign,setter=_setRememberedFocusedItem:,getter=_rememberedFocusedItem,nonatomic,__weak) id<UIFocusItem> rememberedFocusedItem;                                                          //@synthesize rememberedFocusedItem=_rememberedFocusedItem - In the implementation block
@property (assign,setter=_setShouldDisableTransformLayerScalingForSnapshotting:,nonatomic) BOOL _shouldDisableTransformLayerScalingForSnapshotting;                                                 //@synthesize shouldDisableTransformLayerScalingForSnapshotting=_shouldDisableTransformLayerScalingForSnapshotting - In the implementation block
@property (setter=_setWindowInternalConstraints:,nonatomic,copy) NSArray * _windowInternalConstraints;                                                                                              //@synthesize windowInternalConstraints=_windowInternalConstraints - In the implementation block
@property (nonatomic,readonly) BOOL _usesLegacySupportedOrientationChecks;                                                                                                                          //@synthesize _usesLegacySupportedOrientationChecks=__usesLegacySupportedOrientationChecks - In the implementation block
@property (setter=_setDeferredLaunchBlock:,nonatomic,copy) id _deferredLaunchBlock;                                                                                                                 //@synthesize deferredLaunchBlock=_deferredLaunchBlock - In the implementation block
@property (assign,setter=_setLegacyOrientationChecks:,nonatomic) BOOL _legacyOrientationChecks; 
@property (assign,setter=_setToWindowOrientation:,getter=_toWindowOrientation,nonatomic) long long toWindowOrientation;                                                                             //@synthesize toWindowOrientation=_toWindowOrientation - In the implementation block
@property (assign,setter=_setFromWindowOrientation:,getter=_fromWindowOrientation,nonatomic) long long fromWindowOrientation;                                                                       //@synthesize fromWindowOrientation=_fromWindowOrientation - In the implementation block
@property (setter=_setAnimationController:,getter=_animationController,nonatomic,retain) _UIWindowAnimationController * _animationController;                                                       //@synthesize _animationController=__animationController - In the implementation block
@property (setter=_setTraitCollectionChangeTransitionCoordinator:,nonatomic,retain) _UIViewControllerNullAnimationTransitionCoordinator * _traitCollectionChangeTransitionCoordinator;              //@synthesize traitCollectionChangeTransitionCoordinator=_traitCollectionChangeTransitionCoordinator - In the implementation block
@property (nonatomic,readonly) SCD_Struct_UI21 __sizeClassPair; 
@property (setter=_setShouldPreventRotationHook:,nonatomic,copy) id _shouldPreventRotationHook;                                                                                                     //@synthesize _shouldPreventRotationHook=__shouldPreventRotationHook - In the implementation block
@property (assign,setter=__setHostViewUnderlapsStatusBar:,nonatomic) BOOL __hostViewUnderlapsStatusBar;                                                                                             //@synthesize __hostViewUnderlapsStatusBar=___hostViewUnderlapsStatusBar - In the implementation block
@property (getter=_supportsFocus,nonatomic,readonly) BOOL supportsFocus; 
@property (getter=_focusEventRecognizer,nonatomic,readonly) _UIFocusEventRecognizer * focusEventRecognizer;                                                                                         //@synthesize focusEventRecognizer=_focusEventRecognizer - In the implementation block
@property (assign,setter=_setContainedGestureRecognizersShouldRespectGestureServerInstructions:,nonatomic) BOOL _containedGestureRecognizersShouldRespectGestureServerInstructions;                 //@synthesize _containedGestureRecognizersShouldRespectGestureServerInstructions=__containedGestureRecognizersShouldRespectGestureServerInstructions - In the implementation block
@property (nonatomic,retain) UIScreen * screen; 
@property (assign,nonatomic) double windowLevel; 
@property (getter=isKeyWindow,nonatomic,readonly) BOOL keyWindow; 
@property (nonatomic,retain) UIViewController * rootViewController;                                                                                                                                 //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) SCD_Struct_UI22 _bindingDescription; 
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext;                                                                                                             //@synthesize layerContext=_layerContext - In the implementation block
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder;                                                                                                    //@synthesize contextBinder=_contextBinder - In the implementation block
+(void)initialize;
+(BOOL)_isSystemWindow;
+(id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 ;
+(id)keyWindow;
+(void)_executeDeferredLaunchBlocks;
+(id)allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 forScreen:(id)arg3 ;
+(id)_findWindowForControllingOverallAppearance;
+(id)_whitePointAdaptivityStyleControllingWindow;
+(id)_synchronizedDrawingFence;
+(void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 forAutolayoutRootViewsOnly:(BOOL)arg3 ;
+(void)_synchronizeDrawing;
+(void)_noteStatusBarHeightChanged:(double)arg1 oldHeight:(double)arg2 ;
+(id)_topVisibleWindowPassingTest:(/*^block*/id)arg1 ;
+(id)_externalKeyWindow;
+(unsigned)_synchronizeDrawingAcrossProcesses;
+(BOOL)_clearPreCommitHandlerRegistration;
+(BOOL)_transformLayerRotationsAreEnabled;
+(void)adjustForAccessibilityIfNeeded:(id)arg1 ;
+(BOOL)_isSecure;
+(CGRect)constrainFrameToScreen:(CGRect)arg1 ;
+(void)_synchronizeDrawingWithPreCommitHandler:(/*^block*/id)arg1 ;
+(void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(/*^block*/id)arg2 ;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 withPreCommitHandler:(/*^block*/id)arg2 ;
+(unsigned long long)_keyWindowStackSize;
+(void)__popKeyWindow:(id)arg1 findNewKeyWindowIfStackEmpty:(BOOL)arg2 ;
+(void)_popKeyWindow:(id)arg1 ;
+(void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned*)arg2 count:(unsigned long long)arg3 frame:(CGRect)arg4 usePurpleGfx:(BOOL)arg5 outTransform:(CGAffineTransform*)arg6 ;
+(void*)createIOSurfaceOnScreen:(id)arg1 withContextIds:(const unsigned*)arg2 count:(unsigned long long)arg3 frame:(CGRect)arg4 baseTransform:(CGAffineTransform)arg5 ;
+(void*)createIOSurfaceFromScreen:(id)arg1 ;
+(void*)createIOSurfaceWithContextId:(unsigned)arg1 frame:(CGRect)arg2 ;
+(id)_hitTestToPoint:(CGPoint)arg1 forEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 screen:(id)arg4 ;
+(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 withBlock:(/*^block*/id)arg3 ;
+(void)_enumerateWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2 allowMutation:(BOOL)arg3 withBlock:(/*^block*/id)arg4 ;
+(Class)layerClass;
+(void)_setAllWindowsKeepContextInBackground:(BOOL)arg1 ;
+(BOOL)_allWindowsKeepContextInBackground;
+(void)_setTransformLayerRotationsAreEnabled:(BOOL)arg1 ;
+(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 ;
+(void)_synchronizeDrawingWithFence:(id)arg1 ;
+(void)_clearKeyWindowStack;
+(void)_setKeyWindowStackEnabled:(BOOL)arg1 ;
+(void)_pushKeyWindow:(id)arg1 ;
+(void)_popKeyWindow;
+(void)_removeWindowFromStack:(id)arg1 ;
+(void)_unregisterChargedView:(id)arg1 ;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)arg1 count:(unsigned long long)arg2 frame:(CGRect)arg3 ;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)arg1 count:(unsigned long long)arg2 frame:(CGRect)arg3 outTransform:(CGAffineTransform*)arg4 ;
+(void*)createIOSurfaceWithContextIds:(const unsigned*)arg1 count:(unsigned long long)arg2 frame:(CGRect)arg3 usePurpleGfx:(BOOL)arg4 outTransform:(CGAffineTransform*)arg5 ;
+(void*)createScreenIOSurface;
+(void*)createIOSurfaceFromDisplayConfiguration:(id)arg1 ;
+(id)_globalHitTestForLocation:(CGPoint)arg1 inWindowServerHitTestWindow:(id)arg2 withEvent:(id)arg3 ;
+(id)_findWithDisplayPoint:(CGPoint)arg1 ;
+(id)_windowWithContextId:(unsigned)arg1 ;
-(void)pl_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIScreen *)screen;
-(void)setCenter:(CGPoint)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)delegate;
-(id)_window;
-(id)_screen;
-(id)traitCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(_UIWindowAnimationController *)_animationController;
-(long long)interfaceOrientation;
-(BOOL)_clearMouseView;
-(void)makeKeyAndVisible;
-(BOOL)isKeyWindow;
-(UIViewController *)rootViewController;
-(void)_updateTransformLayer;
-(BOOL)_isTextEffectsWindow;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(id)_initWithOrientation:(long long)arg1 ;
-(void)setResizesToFullScreen:(BOOL)arg1 ;
-(void)_resizeWindowToFullScreenIfNecessary;
-(id)nextResponder;
-(id)firstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setWindowLevel:(double)arg1 ;
-(CGRect)_sceneReferenceBounds;
-(id)_canvas;
-(BOOL)_windowControlsStatusBarOrientation;
-(id)_currentTintView;
-(BOOL)_includeInDefaultImageSnapshot;
-(id)_associatingSceneLayer;
-(void)_willSnapshot;
-(void)_didSnapshot;
-(_UIViewControllerNullAnimationTransitionCoordinator *)_traitCollectionChangeTransitionCoordinator;
-(void)sendEvent:(id)arg1 ;
-(BOOL)_needsShakesWhenInactive;
-(id)undoManager;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(id)_focusResponder;
-(id)_deepestUnambiguousResponder;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_containedInAbsoluteResponderChain;
-(unsigned)_contextId;
-(BOOL)becomeFirstResponder;
-(void)_beginModalSession;
-(void)_endModalSession;
-(void)_setSecure:(BOOL)arg1 ;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_shouldZoom;
-(id)restorationIdentifier;
-(BOOL)_canAffectStatusBarAppearance;
-(void)_clearSizeClassesForStateRestoration;
-(void)_setStateRestorationVerticalSizeClass:(long long)arg1 horizontalSizeClass:(long long)arg2 ;
-(void)_setFirstResponder:(id)arg1 ;
-(id)_focusMovementSystemForFocusEventRecognizer:(id)arg1 ;
-(BOOL)_focusEventRecognizer:(id)arg1 didRecognizeFocusMovementRequest:(id)arg2 ;
-(BOOL)_shouldRecognizeEventsInFocusEventRecognizer:(id)arg1 ;
-(void)_focusEventRecognizer:(id)arg1 didRecognizeFastScrollingRequest:(id)arg2 ;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(id)preferredFocusedView;
-(BOOL)_isHostedInAnotherProcess;
-(BOOL)_isTextEffectsWindowHosting;
-(void)_setWindowControlsStatusBarOrientation:(BOOL)arg1 ;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(BOOL)_shouldControlAutorotation;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setRotatableClient:(id)arg1 toOrientation:(long long)arg2 updateStatusBar:(BOOL)arg3 duration:(double)arg4 force:(BOOL)arg5 isRotating:(BOOL)arg6 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 checkForDismissal:(BOOL)arg2 isRotationDisabled:(BOOL*)arg3 ;
-(BOOL)isInterfaceAutorotationDisabled;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
-(void)_commonInit;
-(id)contentView;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isInternalWindow;
-(id)_canvasFromScene:(id)arg1 ;
-(void)_commonInitDebugName:(id)arg1 canvas:(id)arg2 ;
-(BOOL)_isSecure;
-(void)_sceneBoundsDidChange;
-(void)_createSystemGestureGateGestureRecognizerIfNeeded;
-(void)_setDeferredLaunchOrientation:(long long)arg1 ;
-(void)_installFocusEventRecognizer;
-(BOOL)_wantsSceneAssociation;
-(BOOL)_alwaysGetsContexts;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 attached:(BOOL)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 scene:(id)arg3 attached:(BOOL)arg4 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 canvas:(id)arg3 ;
-(int)bitsPerComponent;
-(void)_updateLayerOrderingAndSetLayerHidden:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)_removeAllViewControllersFromWindowHierarchy;
-(void)_setWindowInternalConstraints:(id)arg1 ;
-(void)_setMouseDownView:(id)arg1 withEvent:(GSEventRef)arg2 ;
-(void)_setMouseEnteredView:(id)arg1 ;
-(void)_endKeyWindowDeferral;
-(void)_makeKeyWindowIgnoringOldKeyWindow:(BOOL)arg1 ;
-(void)_setTraitCollectionChangeTransitionCoordinator:(id)arg1 ;
-(BOOL)_shouldDisableTransformLayerScalingForSnapshotting;
-(long long)_orientationForViewTransform;
-(BOOL)_windowOwnsInterfaceOrientation;
-(long long)_orientationForRootTransform;
-(CGAffineTransform)_viewTransformForInterfaceOrientation:(long long)arg1 ;
-(CGRect)_sceneBounds;
-(void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2 ;
-(int)windowOutput;
-(BOOL)_ignoresHitTest;
-(BOOL)_disableGroupOpacity;
-(BOOL)_shouldCreateContextAsSecure;
-(BOOL)_shouldUseRemoteContext;
-(BOOL)keepContextInBackground;
-(BOOL)_isHostingPortalViews;
-(BOOL)_shouldScaleByPixelDoubling;
-(void)_configureContextOptions:(id)arg1 ;
-(double)windowLevel;
-(void)_setScene:(id)arg1 ;
-(NSArray *)_rootViewConstraints;
-(void)_setRootViewConstraints:(id)arg1 ;
-(void)_updateRootViewConstraintsForInterfaceOrientationAndStatusBarHeight;
-(id)_rootViewConstraintsUpdateIfNecessaryForView:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(BOOL)_resizeWindowFrameToSceneBoundsIfNecessary;
-(BOOL)_isKeyWindowForDeferral;
-(void)makeKeyWindow;
-(void)_resignKeyWindowStatus;
-(void)_beginKeyWindowDeferral;
-(void)addRootViewControllerViewIfPossible;
-(id)_deferredLaunchBlock;
-(void)_updateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 force:(BOOL)arg3 ;
-(void)_updateWindowTraits;
-(void)_setHidden:(BOOL)arg1 forced:(BOOL)arg2 ;
-(BOOL)_areOverlayInsetsValid:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_overlayInsets;
-(UIEdgeInsets)safeAreaInsets;
-(double)_touchSloppinessFactor;
-(double)_chargeMultiplicationFactor;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(BOOL)_isScrollingEnabledForView:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(void)_fadeCalloutBarIfNeededForTouchInView:(id)arg1 ;
-(BOOL)_touchesInsideShouldHideCalloutBarForViewHierarchy:(id)arg1 ;
-(id)_firstResponder;
-(void)_sendTouchesForEvent:(id)arg1 ;
-(void)_sendButtonsForEvent:(id)arg1 ;
-(id)_scene;
-(CGPoint)_convertPointToSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_convertPointFromSceneReferenceSpace:(CGPoint)arg1 ;
-(id)_rootForKeyResponderCycle;
-(void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(long long)arg3 ;
-(void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(id)_rotationViewControllers;
-(id)_clientsForRotation;
-(BOOL)_legacyShouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)_shouldPreventRotationHook;
-(BOOL)isRotating;
-(long long)_deferredLaunchOrientation;
-(void)_setDeferredLaunchBlock:(/*^block*/id)arg1 ;
-(long long)_toWindowOrientation;
-(void)beginDisablingInterfaceAutorotation;
-(void)_willChangeToSize:(CGSize)arg1 orientation:(long long)arg2 screen:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(BOOL)_guardSizeTransitionFromAnimations;
-(void)endDisablingInterfaceAutorotation;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(void)_setShouldHitTestEntireScreen:(BOOL)arg1 ;
-(void)_updateInterfaceOrientationFromDeviceOrientationIfRotationEnabled:(BOOL)arg1 ;
-(void)_updateInterfaceOrientationFromActiveInterfaceOrientationIfRotationEnabled:(BOOL)arg1 ;
-(void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 force:(BOOL)arg3 ;
-(BOOL)_isStatusBarWindow;
-(void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)arg1 ;
-(void)_updateToNotificationProvidedInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_handleDeviceOrientationChange:(id)arg1 ;
-(void)endDisablingInterfaceAutorotationAnimated:(BOOL)arg1 ;
-(void)setAutorotates:(BOOL)arg1 forceUpdateInterfaceOrientation:(BOOL)arg2 ;
-(void)_handleSBActiveInterfaceOrientationChange:(id)arg1 ;
-(void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 force:(BOOL)arg4 ;
-(void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 animation:(int)arg3 ;
-(void)_notifyRotatableViewOrientation:(long long)arg1 duration:(double)arg2 ;
-(CGRect)_convertRectToSceneReferenceSpace:(CGRect)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(void)_rotateToBounds:(CGRect)arg1 withAnimator:(id)arg2 transitionContext:(id)arg3 ;
-(void)_rotateWindowToOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 skipCallbacks:(BOOL)arg4 ;
-(id)__clientsForRotationCallbacks;
-(void)_finishedFirstHalfRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_updateStatusBarToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_finishedFullRotation:(id)arg1 finished:(id)arg2 context:(id)arg3 skipNotification:(BOOL)arg4 ;
-(BOOL)_shouldPrepareScreenForWindow;
-(void)_removeFocusEventRecognizer;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg1 ;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(id)_traitCollectionForSize:(CGSize)arg1 screen:(id)arg2 ;
-(id)_traitCollectionForSize:(CGSize)arg1 screenCollection:(id)arg2 ;
-(void)_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_propagateTraitCollectionChangedForStateRestoration;
-(void)_updateIsSceneSizedFlag;
-(void)_autolayout_windowDidChangeBoundsFrom:(CGRect)arg1 ;
-(void)_autolayout_windowDidChangeCenterFrom:(CGPoint)arg1 ;
-(double)_adjustedWindowLevelFromLevel:(double)arg1 ;
-(void)setLevel:(double)arg1 ;
-(void)resignKeyWindow;
-(void)_setRememberedFocusedItem:(id)arg1 ;
-(void)becomeKeyWindow;
-(id)_responderWindow;
-(long long)_overriddenInterfaceOrientation;
-(id)_deferralPropertiesWithContextID:(unsigned)arg1 ;
-(void)_orderFrontWithoutMakingKey;
-(BOOL)_canPromoteFromKeyWindowStack;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(void*)createIOSurfaceWithFrame:(CGRect)arg1 ;
-(BOOL)_isConstrainedByScreenJail;
-(BOOL)_shouldResizeWithScene;
-(void)_adjustSizeClassesAndResizeWindowToFrame:(CGRect)arg1 ;
-(id)_hitTestLocation:(CGPoint)arg1 inScene:(id)arg2 withWindowServerHitTestWindow:(id)arg3 event:(id)arg4 ;
-(BOOL)_usesWindowServerHitTesting;
-(CFDictionaryRef)_touchMap;
-(void)_setShouldDisableTransformLayerScalingForSnapshotting:(BOOL)arg1 ;
-(BOOL)_appearsInLoupe;
-(BOOL)_canAffectDisplayAdaptation;
-(void)_updateAppTintView;
-(void)_updateCurrentTintView;
-(BOOL)resizesToFullScreen;
-(id)_focusEventRecognizer;
-(BOOL)_shouldHitTestEntireScreen;
-(BOOL)_wantsFocusEngine;
-(BOOL)_supportsFocus;
-(void)_forwardFocusMovementAction:(id)arg1 ;
-(void)updateFocusIfNeeded;
-(void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_rememberedFocusedItem;
-(id)preferredFocusEnvironments;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(void)setRestorationIdentifier:(id)arg1 ;
-(void)_unregisterChargedView:(id)arg1 ;
-(id)_contextOptionsWithInitialOptions:(id)arg1 ;
-(SCD_Struct_UI22)_bindingDescription;
-(id)_bindingLayer;
-(double)_bindableLevel;
-(BOOL)_isVisible;
-(CAContext *)_boundContext;
-(void)_setBoundContext:(id)arg1 ;
-(_UIContextBinder *)_contextBinder;
-(void)_setContextBinder:(id)arg1 ;
-(id)_debugName;
-(void)_commonInitAttachedWindow:(BOOL)arg1 debugName:(id)arg2 scene:(id)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 ;
-(id)_initWithFrame:(CGRect)arg1 debugName:(id)arg2 displayConfiguration:(id)arg3 ;
-(id)initWithContentRect:(CGRect)arg1 ;
-(void)setContentView:(id)arg1 ;
-(id)representation;
-(void)_updateTransformLayerForClassicPresentation;
-(void)_updateTransformLayerSizeForClassicPresentation;
-(void)_transformLayerShouldMaskToBounds:(BOOL)arg1 ;
-(long long)_orientationForClassicPresentation;
-(BOOL)_transformLayerIncludesScreenRotation;
-(void)_setCanvas:(id)arg1 ;
-(BOOL)_hasContext;
-(BOOL)_legacyOrientationChecks;
-(void)_setLegacyOrientationChecks:(BOOL)arg1 ;
-(void)makeKeyAndOrderFront:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(void)orderOut:(id)arg1 ;
-(void)makeKey:(id)arg1 ;
-(void)_noteOverlayInsetsDidChange;
-(UIEdgeInsets)_safeAreaInsetsInSuperview:(id)arg1 ;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(id)_targetForStolenStatusBarTouchesAtPoint:(CGPoint)arg1 withEvent:(id)arg2 excludingWindow:(id)arg3 ;
-(void)_scrollToTopViewsUnderScreenPointIfNecessary:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(CGPoint)_convertOffset:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGPoint)_convertOffset:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(CGPoint)_convertOffsetToSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_convertOffsetFromSceneReferenceSpace:(CGPoint)arg1 ;
-(double)_convertVisualAltitude:(double)arg1 fromWindow:(id)arg2 ;
-(double)_convertVisualAltitude:(double)arg1 toWindow:(id)arg2 ;
-(void)_setExclusiveTouchView:(id)arg1 ;
-(id)_exclusiveTouchView;
-(CGPoint)convertWindowToDevice:(CGPoint)arg1 ;
-(CGPoint)convertDeviceToWindow:(CGPoint)arg1 ;
-(double)level;
-(void)setBecomeKeyOnOrderFront:(BOOL)arg1 ;
-(void)_slideFooterFromOrientation:(long long)arg1 toOrientation:(long long)arg2 startSnapshot:(id)arg3 endSnapshot:(id)arg4 duration:(double)arg5 ;
-(void)_addRotationViewController:(id)arg1 ;
-(void)_removeRotationViewController:(id)arg1 ;
-(void)_clearPendingKeyboardChanges;
-(unsigned long long)_supportedInterfaceOrientationsForRootViewController;
-(BOOL)_isAnyWindowRotating;
-(void)_updateToInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateInterfaceOrientationFromDeviceOrientation;
-(void)setAutorotates:(BOOL)arg1 ;
-(void)_setRotatableViewOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_setRotatableViewOrientation:(long long)arg1 updateStatusBar:(BOOL)arg2 duration:(double)arg3 ;
-(void)_forceTwoPartRotationAnimation:(BOOL)arg1 ;
-(BOOL)autorotates;
-(BOOL)isUsingOnePartRotationAnimation;
-(long long)_windowInterfaceOrientation;
-(void)_setWindowInterfaceOrientation:(long long)arg1 ;
-(id)_appearanceContainer;
-(BOOL)_systemGestureRecognitionIsPossible;
-(void)_setSystemGestureRecognitionIsPossible:(BOOL)arg1 andTouchesAreCancelled:(BOOL)arg2 ;
-(BOOL)_shouldDelayTouchForSystemGestures:(id)arg1 ;
-(unsigned long long)_edgesForSystemGesturesTouchDelay;
-(unsigned long long)_edgeForTouch:(id)arg1 ;
-(void)setScreen:(UIScreen *)arg1 ;
-(BOOL)_cachedTraitCollectionIsValid;
-(id)_traitCollectionWhenRotated;
-(SCD_Struct_UI21)__sizeClassPair;
-(void)_screenWillTransitionToTraitCollection:(id)arg1 ;
-(void)_makeExternalKeyWindow;
-(void)_registerChargedView:(id)arg1 ;
-(id)_registeredScrollToTopViews;
-(void)_registerScrollToTopView:(id)arg1 ;
-(void)_unregisterScrollToTopView:(id)arg1 ;
-(void)_setIsResigningFirstResponderFromHost:(BOOL)arg1 ;
-(void)_setIsSettingFirstResponder:(BOOL)arg1 ;
-(BOOL)_isSettingFirstResponder;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)_supportsBecomeFirstResponderWhenPossible;
-(void*)createIOSurface;
-(long long)_sceneOrientation;
-(CGRect)_convertRectFromSceneReferenceSpace:(CGRect)arg1 ;
-(CGPoint)_convertDoublePointToSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_convertDoublePointFromSceneReferenceSpace:(CGPoint)arg1 ;
-(CGPoint)_clampPointToScreenJail:(CGPoint)arg1 ;
-(id)_targetWindowForPathIndex:(long long)arg1 atPoint:(CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 onScreen:(id)arg5 ;
-(BOOL)_isInAWindow;
-(BOOL)_isMainSceneSized;
-(CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)arg1 ;
-(id)_touchData;
-(void)setKeepContextInBackground:(BOOL)arg1 ;
-(void)_registerViewForSubtreeMonitoring:(id)arg1 ;
-(void)_unregisterViewForSubtreeMonitoring:(id)arg1 ;
-(id)_subtreeMonitorsForView:(id)arg1 ;
-(void)_writeLayerTreeToPath:(id)arg1 ;
-(void)_tintViewDidChangeAppearance:(id)arg1 ;
-(void)_updateCurrentTintViewForPotentialTintView:(id)arg1 ;
-(void)_addTintView:(id)arg1 ;
-(void)_removeTintView:(id)arg1 ;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(void)_setTouchMap:(CFDictionaryRef)arg1 ;
-(id)_normalInheritedTintColor;
-(void)_showAccessibilityHUDItem:(id)arg1 ;
-(void)_dismissAccessibilityHUD;
-(id)_focusedView;
-(id)_parentFocusEnvironment;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_overridingPreferredFocusEnvironment;
-(NSArray *)_windowInternalConstraints;
-(BOOL)_usesLegacySupportedOrientationChecks;
-(void)_setToWindowOrientation:(long long)arg1 ;
-(long long)_fromWindowOrientation;
-(void)_setFromWindowOrientation:(long long)arg1 ;
-(void)_setAnimationController:(id)arg1 ;
-(void)_setShouldPreventRotationHook:(/*^block*/id)arg1 ;
-(BOOL)__hostViewUnderlapsStatusBar;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg1 ;
-(BOOL)_containedGestureRecognizersShouldRespectGestureServerInstructions;
-(void)_setContainedGestureRecognizersShouldRespectGestureServerInstructions:(BOOL)arg1 ;
-(void)_updateInterfaceOrientationFromActiveInterfaceOrientation:(BOOL)arg1 ;
-(void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1 ;
-(void)_updateInterfaceOrientationFromActiveInterfaceOrientation;
-(id)_aboveWindowScrollView;
-(id)_layoutEngineCreateIfNecessary;
-(void)_switchToLayoutEngine:(id)arg1 ;
-(BOOL)_canBecomeLayoutEngineDelegate;
-(void)_constraints_subviewWillChangeSuperview:(id)arg1 ;
-(id)_layoutEngineIfAvailable;
-(BOOL)_shouldTextEffectsWindowBeHostedForView:(id)arg1 ;
-(BOOL)inhibitSetupOrientation;
-(BOOL)inhibitManualTransform;
-(double)_classicOffset;
-(void)_matchDeviceOrientation;
-(void)keyboardDidHide;
-(BOOL)inhibitTextEffectsRotation;
-(void)setupForOrientation:(long long)arg1 ;
-(void)matchDeviceOrientation:(id)arg1 ;
-(id)_keyboardSceneSettings;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(id)_hostingWindow;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)hasAmbiguousLayout;
-(id)_hostingHandle;
-(void)_invalidateWindowInternalConstraints;
-(void)_initializeLayoutEngine;
-(id)_uiib_candidateRedundantConstraints;
-(void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)arg1 ;
-(id)_descendantWithAmbiguousLayout;
-(BOOL)_hasAmbiguousLayout;
-(void)exerciseAmbiguityInLayout;
-(id)_uiib_layoutEngineCreatingIfNecessary;
-(id)_redundantConstraints;
-(void)_updateSystemConstraints;
-(unsigned long long)_expectedWindowInternalConstraintsCount;
-(void)_windowInternalConstraints_sizeDidChange;
-(void)_windowInternalConstraints_centerDidChange;
-(void)_uiib_invalidateWindowInternalConstraints;
-(void)_setIsLoweringAnchoringConstraints:(BOOL)arg1 ;
-(id)_centerExpressionInContainer:(id)arg1 vertical:(BOOL)arg2 contentInsetScale:(double)arg3 ;
-(BOOL)_isLoweringAnchoringConstraints;
@end

