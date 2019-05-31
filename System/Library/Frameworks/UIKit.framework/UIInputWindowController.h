/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIApplicationRotationFollowingControllerNoTouches.h>
#import <UIKit/UISplitKeyboardSource.h>
#import <UIKit/UIInputViewAnimationHost.h>
#import <UIKit/_UIRemoteKeyboardViewSource.h>
#import <UIKit/_UITextEffectsSceneObserver.h>
#import <UIKit/_UIRemoteKeyboardDistributedViewSource.h>
#import <UIKit/UIInputViewSetPlacementDelegate.h>
#import <UIKit/UIInputViewSetPlacementOwner.h>

@protocol _UIRemoteKeyboardControllerDelegate, UIInputViewSetPlacementApplicator;
@class UIView, UIViewController, UIInputViewSetPlacement, UIInputViewSet, NSMutableArray, UISplitKeyboardSupport, UIScrollToDismissSupport, NSArray, NSLayoutConstraint, NSMutableDictionary, UIInputViewSetNotificationInfo, NSString, NSDate, UIInputViewController, UISystemKeyboardDockController, UIKBInputBackdropView, UIInputViewPlacementTransition;

@interface UIInputWindowController : UIApplicationRotationFollowingControllerNoTouches <UISplitKeyboardSource, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource, _UITextEffectsSceneObserver, _UIRemoteKeyboardDistributedViewSource, UIInputViewSetPlacementDelegate, UIInputViewSetPlacementOwner> {

	NSMutableArray* _animationStyleStack;
	int _suppressedCallbacks;
	int _suppressedNotifications;
	BOOL _isChangingPlacement;
	BOOL _isChangingInputViews;
	BOOL _requiresConstraintUpdate;
	BOOL _isSnapshotting;
	int _hiddenCount;
	BOOL _inhibitingHiding;
	unsigned long long _rotationState;
	BOOL _disablePlacementChanges;
	BOOL _suppressUpdateVisibilityConstraints;
	/*^block*/id _pendingTransitionActivity;
	UISplitKeyboardSupport* _cachedSplitKeyboardController;
	UIScrollToDismissSupport* _cachedScrollDismissController;
	NSArray* _rootViewConstraints;
	NSLayoutConstraint* _emptyHeightConstraint;
	NSMutableDictionary* _inputViewEdgeConstraints;
	NSMutableDictionary* _accessoryViewEdgeConstraints;
	NSMutableDictionary* _assistantViewEdgeConstraints;
	NSMutableDictionary* _inputBackdropViewEdgeConstraints;
	NSMutableDictionary* _inputBackdropBackgroundViewEdgeConstraints;
	NSMutableDictionary* _assistantBackdropViewEdgeConstraints;
	NSMutableDictionary* _accessoryBackdropViewEdgeConstraints;
	NSMutableDictionary* _inputDockViewEdgeConstraints;
	double _backdropHeightDelta;
	UIView* _preRotationSnapshot;
	CGSize _preRotationInputViewSize;
	CGSize _preRotationInputAssistantViewSize;
	CGSize _preRotationInputAccessoryViewSize;
	CGAffineTransform _preRotationInputViewTransform;
	CGAffineTransform _preRotationInputAssistantViewTransform;
	CGAffineTransform _preRotationInputAccessoryViewTransform;
	UIInputViewSetNotificationInfo* _rotationInfo;
	SEL _interactiveTransitionCleanupSelector;
	CGRect _preLayoutHostViewFrame;
	BOOL _didOverridePreLayoutHostViewFrame;
	BOOL _didPostLayoutNotification;
	UIInputViewSetNotificationInfo* _keyboardHeightChangeNotificationInfo;
	BOOL _wasOnScreen;
	NSString* _lastKeyboardID;
	NSDate* _keyboardShowTimestamp;
	BOOL _shouldNotifyRemoteKeyboards;
	BOOL _dontDismissKeyboardOnScrolling;
	BOOL _dontDismissReachability;
	UIView* _hostView;
	UIInputViewSet* _inputViewSet;
	UIInputViewSetPlacement* _placement;
	UIInputViewController* _inputViewController;
	UIInputViewController* _inputAssistantViewController;
	UIInputViewController* _inputAccessoryViewController;
	UIView* _inputBackdropBackgroundView;
	UISystemKeyboardDockController* _dockViewController;
	UIKBInputBackdropView* _inputBackdropView;
	UIKBInputBackdropView* _inputAssistantBackdropView;
	UIKBInputBackdropView* _inputAccessoryBackdropView;
	UIInputViewSetPlacement* _postRotationPlacement;
	UIInputViewSet* _postRotationInputViewSet;
	UIInputViewSetNotificationInfo* _postRotationInputViewNotificationInfo;
	UIInputViewSetNotificationInfo* _templateNotificationInfo;
	UIInputViewPlacementTransition* _currentTransition;
	id<_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
	id<UIInputViewSetPlacementApplicator> _applicator;
	NSLayoutConstraint* _inputViewHeightConstraint;
	NSLayoutConstraint* _assistantViewHeightConstraint;
	NSLayoutConstraint* _accessoryViewHeightConstraint;

}

@property (nonatomic,readonly) UIView * _inputView; 
@property (nonatomic,readonly) UIView * _inputAssistantView; 
@property (nonatomic,readonly) UIView * _inputAccessoryView; 
@property (nonatomic,retain) UIInputViewController * _inputViewController;                                                           //@synthesize inputViewController=_inputViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAssistantViewController;                                                  //@synthesize inputAssistantViewController=_inputAssistantViewController - In the implementation block
@property (nonatomic,retain) UIInputViewController * _inputAccessoryViewController;                                                  //@synthesize inputAccessoryViewController=_inputAccessoryViewController - In the implementation block
@property (nonatomic,retain) UISystemKeyboardDockController * _dockViewController;                                                   //@synthesize dockViewController=_dockViewController - In the implementation block
@property (nonatomic,readonly) UIView * _inputBackdropBackgroundView;                                                                //@synthesize inputBackdropBackgroundView=_inputBackdropBackgroundView - In the implementation block
@property (setter=setInputBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputBackdropView;                                //@synthesize inputBackdropView=_inputBackdropView - In the implementation block
@property (setter=setInputAssistantBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAssistantBackdropView;              //@synthesize inputAssistantBackdropView=_inputAssistantBackdropView - In the implementation block
@property (setter=setInputAccessoryBackdropView:,nonatomic,retain) UIKBInputBackdropView * _inputAccessoryBackdropView;              //@synthesize inputAccessoryBackdropView=_inputAccessoryBackdropView - In the implementation block
@property (nonatomic,retain) id<UIInputViewSetPlacementApplicator> applicator;                                                       //@synthesize applicator=_applicator - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * inputViewHeightConstraint;                                                         //@synthesize inputViewHeightConstraint=_inputViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * assistantViewHeightConstraint;                                                     //@synthesize assistantViewHeightConstraint=_assistantViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * accessoryViewHeightConstraint;                                                     //@synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * postRotationPlacement;                                                        //@synthesize postRotationPlacement=_postRotationPlacement - In the implementation block
@property (nonatomic,retain) UIInputViewSet * postRotationInputViewSet;                                                              //@synthesize postRotationInputViewSet=_postRotationInputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * postRotationInputViewNotificationInfo;                                 //@synthesize postRotationInputViewNotificationInfo=_postRotationInputViewNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewSetNotificationInfo * templateNotificationInfo;                                              //@synthesize templateNotificationInfo=_templateNotificationInfo - In the implementation block
@property (nonatomic,retain) UIInputViewPlacementTransition * currentTransition;                                                     //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,readonly) long long keyboardOrientation; 
@property (nonatomic,readonly) BOOL isTransitioning; 
@property (nonatomic,readonly) BOOL isTransitionStarted; 
@property (assign,nonatomic) BOOL dontDismissKeyboardOnScrolling;                                                                    //@synthesize dontDismissKeyboardOnScrolling=_dontDismissKeyboardOnScrolling - In the implementation block
@property (assign,nonatomic) BOOL dontDismissReachability;                                                                           //@synthesize dontDismissReachability=_dontDismissReachability - In the implementation block
@property (nonatomic,retain) UIInputViewSet * inputViewSet;                                                                          //@synthesize inputViewSet=_inputViewSet - In the implementation block
@property (nonatomic,retain) UIInputViewSetPlacement * placement;                                                                    //@synthesize placement=_placement - In the implementation block
@property (nonatomic,readonly) UIView * hostView;                                                                                    //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,readonly) UIKBInputBackdropView * inputViewBackdrop; 
@property (nonatomic,retain,readonly) UIInputViewSetPlacement * placementIgnoringRotation; 
@property (assign,nonatomic) BOOL shouldNotifyRemoteKeyboards;                                                                       //@synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate;                                             //@synthesize controllerDelegate=_controllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL isOnScreenRotating; 
@property (readonly) BOOL keyboardController; 
@property (retain,readonly) UIView * containerView; 
@property (assign) BOOL hideInputViewBackdrops; 
@property (readonly) long long inputViewBackdropStyle; 
@property (nonatomic,retain,readonly) UIView * view; 
@property (nonatomic,readonly) BOOL isChangingPlacement; 
@property (nonatomic,readonly) CGPoint positionConstraintConstant; 
+(BOOL)_doesOverrideLegacyFullScreenLayout;
+(id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(UIView *)containerView;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGRect)_defaultInitialViewFrame;
-(BOOL)isRotating;
-(CGPoint)_centerForOrientation:(long long)arg1 ;
-(CGRect)_boundsForOrientation:(long long)arg1 ;
-(void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(BOOL)isTransitioning;
-(UIEdgeInsets)_viewSafeAreaInsetsFromScene;
-(void)pushAnimationStyle:(id)arg1 ;
-(void)popAnimationStyle;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI87*)arg1 ;
-(void)updateViewConstraints;
-(id)transitioningView;
-(void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2 ;
-(id)viewForTransitionScreenSnapshot;
-(CGRect)transitioningFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(UIInputViewSet *)inputViewSet;
-(BOOL)isChangingPlacement;
-(UIInputViewSetPlacement *)placement;
-(BOOL)isUndocked;
-(void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4 ;
-(UIView *)hostView;
-(void)setInterfaceAutorotationDisabled:(BOOL)arg1 ;
-(CGPoint)positionConstraintConstant;
-(void)completeTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)startTransition:(id)arg1 withInfo:(id)arg2 ;
-(void)updateTransition:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)isTranslating;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(BOOL)isSplitting;
-(void)finishScrollViewTransition;
-(id)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1 ;
-(void)setHideInputViewBackdrops:(BOOL)arg1 ;
-(BOOL)isOnScreen;
-(void)updateKeyboardDockViewVisibility;
-(void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2 ;
-(void)keyboardHeightChangeDone;
-(UIView *)_inputView;
-(CGRect)visibleFrame;
-(UIView *)_inputAccessoryView;
-(void)hostAppSceneBoundsChanged;
-(void)willSnapshot;
-(void)didSnapshot;
-(void)setShouldNotifyRemoteKeyboards:(BOOL)arg1 ;
-(long long)keyboardOrientation;
-(id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(BOOL)arg2 ;
-(id)screenSnapshotOfView:(id)arg1 ;
-(void)didSuspend:(id)arg1 ;
-(void)setCurrentTransition:(UIInputViewPlacementTransition *)arg1 ;
-(UIInputViewPlacementTransition *)currentTransition;
-(id)nextAnimationStyle;
-(void)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2 ;
-(void)syncToExistingAnimations;
-(BOOL)isTransitionStarted;
-(void)setPlacementChangeDisabled:(BOOL)arg1 withPlacement:(id)arg2 ;
-(BOOL)inputViewSetContainsView:(id)arg1 ;
-(CGRect)visibleInputViewFrame;
-(void)performOperations:(/*^block*/id)arg1 withAnimationStyle:(id)arg2 ;
-(void)setPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)setRotationAwarePlacement:(id)arg1 ;
-(void)setInputViewSet:(UIInputViewSet *)arg1 ;
-(void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2 ;
-(void)animateAccessoryViewVisibility:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2 ;
-(UIView *)_inputAssistantView;
-(UIInputViewController *)_inputViewController;
-(UIKBInputBackdropView *)_inputBackdropView;
-(UIKBInputBackdropView *)_inputAccessoryBackdropView;
-(void)willResume:(id)arg1 ;
-(void)transferPlacementStateToInputWindowController:(id)arg1 ;
-(BOOL)inhibitRotationAnimation;
-(void)setDontDismissReachability:(BOOL)arg1 ;
-(BOOL)isOnScreenRotating;
-(UIInputViewSetPlacement *)placementIgnoringRotation;
-(void)checkPlaceholdersForRemoteKeyboards;
-(void)updateForKeyplaneChangeWithContext:(id)arg1 ;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id<_UIRemoteKeyboardControllerDelegate>)arg1 ;
-(BOOL)dontDismissReachability;
-(void)ignoreLayoutNotifications:(/*^block*/id)arg1 ;
-(void)updateViewSizingConstraints;
-(void)registerPowerLogEvent:(BOOL)arg1 ;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
-(void)performWithSafeTransitionFrames:(/*^block*/id)arg1 ;
-(void)_forcePreLayoutHostViewFrame;
-(void)configureSplitKeyboardController:(BOOL)arg1 ;
-(void)configureScrollDismissController:(BOOL)arg1 ;
-(void)configureDockViewController:(BOOL)arg1 ;
-(BOOL)shouldNotifyRemoteKeyboards;
-(void)updateInputAssistantView:(id)arg1 ;
-(void)setInputViewSet:(id)arg1 forKeyboardAssistantBar:(id)arg2 ;
-(void)performWithoutAppearanceCallbacks:(/*^block*/id)arg1 ;
-(void)setTemplateNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(id)inputSetContainerView;
-(id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3 ;
-(id)_updateOrCreateConstraintInDict:(id)arg1 key:(id)arg2 fromView:(id)arg3 toView:(id)arg4 tracker:(id)arg5 creator:(/*^block*/id)arg6 ;
-(UIEdgeInsets)_inputViewPadding;
-(BOOL)isViewLandscape;
-(UIInputViewController *)_inputAccessoryViewController;
-(void)updateViewSizingConstraints:(id)arg1 ;
-(void)disableViewSizingConstraints:(unsigned long long)arg1 forNewView:(id)arg2 ;
-(BOOL)_subviewUsesClassicLayout:(id)arg1 ;
-(UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1 includeSceneBounds:(BOOL)arg2 ;
-(UIInputViewController *)_inputAssistantViewController;
-(void)updateConstraintInsets;
-(UIView *)_inputBackdropBackgroundView;
-(void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3 tracker:(id)arg4 ;
-(id)_inputDockView;
-(UIKBInputBackdropView *)_inputAssistantBackdropView;
-(void)updateVisibilityConstraintsForPlacement:(id)arg1 ;
-(void)setApplicator:(id<UIInputViewSetPlacementApplicator>)arg1 ;
-(UIInputViewSetNotificationInfo *)templateNotificationInfo;
-(int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(BOOL)arg3 ;
-(void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(BOOL)arg3 ;
-(void)transferActiveNotificationInfoToInfo:(id)arg1 ;
-(void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2 ;
-(void)checkPlaceholdersForRemoteKeyboardsAndForceConstraintsUpdate:(BOOL)arg1 layoutSubviews:(BOOL)arg2 ;
-(void)clearInputViewEdgeConstraints;
-(void)updateInputAssistantViewForInputViewSet:(id)arg1 ;
-(void)resetBackdropHeight;
-(void)_updateBackdropViews;
-(void)clearInteractiveTransitionStateIfNecessary;
-(BOOL)mergeTransitionIfNecessaryWithTransition:(id)arg1 ;
-(void)addPendingActivity:(/*^block*/id)arg1 ;
-(void)flushPendingActivities;
-(id)initialNotificationInfo;
-(void)updateAppearStatesForPlacement:(id)arg1 start:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updatePlacementWithPlacement:(id)arg1 ;
-(void)_collectTransitionTimeStatistics:(unsigned long long)arg1 withStart:(id)arg2 ;
-(void)performWithoutCallbacksOrNotifications:(/*^block*/id)arg1 ;
-(void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2 ;
-(void)setPostRotationPlacement:(UIInputViewSetPlacement *)arg1 ;
-(void)performOperations:(/*^block*/id)arg1 withTemplateNotificationInfo:(id)arg2 ;
-(UIInputViewSetPlacement *)postRotationPlacement;
-(BOOL)_useLiveRotation;
-(UIInputViewSet *)postRotationInputViewSet;
-(UIInputViewSetNotificationInfo *)postRotationInputViewNotificationInfo;
-(void)setPostRotationInputViewSet:(UIInputViewSet *)arg1 ;
-(void)setPostRotationInputViewNotificationInfo:(UIInputViewSetNotificationInfo *)arg1 ;
-(UIKBInputBackdropView *)inputViewBackdrop;
-(void)resetVerticalConstraint;
-(void)generateNotificationsForStart:(BOOL)arg1 ;
-(BOOL)dontDismissKeyboardOnScrolling;
-(void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)postTransitionEndNotification;
-(UISystemKeyboardDockController *)_dockViewController;
-(BOOL)_shouldShowInputDockView;
-(void)set_inputViewController:(UIInputViewController *)arg1 ;
-(void)set_inputAssistantViewController:(UIInputViewController *)arg1 ;
-(void)set_inputAccessoryViewController:(UIInputViewController *)arg1 ;
-(void)invalidateInputAssistantView;
-(void)setInputAssistantBackdropView:(id)arg1 ;
-(void)initializeTranslateGestureRecognizerIfNecessary;
-(void)invalidateInputView;
-(void)setInputBackdropView:(id)arg1 ;
-(void)invalidateInputAccessoryView;
-(void)setInputAccessoryBackdropView:(id)arg1 ;
-(id)currentPresentationPlacement;
-(unsigned long long)changeToInputViewSet:(id)arg1 ;
-(void)setPlacement:(id)arg1 starting:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_visibleFrame;
-(CGRect)_visibleInputViewFrame;
-(BOOL)keyboardController;
-(BOOL)hideInputViewBackdrops;
-(long long)inputViewBackdropStyle;
-(void)placementNeedsUpdate:(id)arg1 ;
-(void)setPlacement:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 ;
-(void)set_dockViewController:(UISystemKeyboardDockController *)arg1 ;
-(NSLayoutConstraint *)inputViewHeightConstraint;
-(void)setInputViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)assistantViewHeightConstraint;
-(void)setAssistantViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)accessoryViewHeightConstraint;
-(void)setAccessoryViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDontDismissKeyboardOnScrolling:(BOOL)arg1 ;
@end
