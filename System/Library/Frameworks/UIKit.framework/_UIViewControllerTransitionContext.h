/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerContextTransitioningEx.h>

@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;
@class NSArray, UIView, _UIViewControllerTransitionCoordinator, NSString;

@interface _UIViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioningEx> {

	double _previousPercentComplete;
	NSArray* _disabledViews;
	struct {
		unsigned interactorImplementsCompletionSpeed : 1;
		unsigned interactorImplementsCompletionCurve : 1;
		unsigned transitionWasCancelled : 1;
		unsigned transitionIsCompleting : 1;
		unsigned transitionIsInterruptible : 1;
	}  _transitionContextFlags;
	id<UIViewControllerAnimatedTransitioning> __animator;
	UIView* _containerView;
	BOOL __allowUserInteraction;
	BOOL _rotating;
	BOOL _animated;
	BOOL _initiallyInteractive;
	BOOL _currentlyInteractive;
	BOOL __isPresentation;
	NSArray* __containerViews;
	double __percentOffset;
	id<UIViewControllerInteractiveTransitioning> __interactor;
	double __duration;
	/*^block*/id __willCompleteHandler;
	/*^block*/id __completionHandler;
	/*^block*/id __didCompleteHandler;
	double __completionVelocity;
	long long __completionCurve;
	_UIViewControllerTransitionCoordinator* __auxContext;
	long long __state;
	/*^block*/id __interactiveUpdateHandler;
	/*^block*/id __postInteractiveCompletionHandler;
	long long _presentationStyle;

}

@property (assign,setter=_setInitiallyInteractive:,getter=_initiallyInteractive,nonatomic) BOOL initiallyInteractive;               //@synthesize initiallyInteractive=_initiallyInteractive - In the implementation block
@property (assign,setter=_setCurrentlyInteractive:,getter=isCurrentlyInteractive,nonatomic) BOOL currentlyInteractive;              //@synthesize currentlyInteractive=_currentlyInteractive - In the implementation block
@property (assign,setter=_setInterruptible:,getter=isInterruptible,nonatomic) BOOL interruptible; 
@property (assign,setter=_setCompletionVelocity:,nonatomic) double _completionVelocity;                                             //@synthesize _completionVelocity=__completionVelocity - In the implementation block
@property (assign,setter=_setCompletionCurve:,nonatomic) long long _completionCurve;                                                //@synthesize _completionCurve=__completionCurve - In the implementation block
@property (assign,setter=_setTransitionIsCompleting:,nonatomic) BOOL _transitionIsCompleting; 
@property (setter=_setAuxContext:,nonatomic,retain) _UIViewControllerTransitionCoordinator * _auxContext;                           //@synthesize _auxContext=__auxContext - In the implementation block
@property (assign,setter=_setState:,nonatomic) long long _state;                                                                    //@synthesize _state=__state - In the implementation block
@property (setter=_setInteractiveUpdateHandler:,nonatomic,copy) id _interactiveUpdateHandler;                                       //@synthesize _interactiveUpdateHandler=__interactiveUpdateHandler - In the implementation block
@property (setter=_setPostInteractiveCompletionHandler:,nonatomic,copy) id _postInteractiveCompletionHandler;                       //@synthesize _postInteractiveCompletionHandler=__postInteractiveCompletionHandler - In the implementation block
@property (assign,setter=_setPresentationStyle:,nonatomic) long long presentationStyle;                                             //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,setter=_setIsPresentation:,nonatomic) BOOL _isPresentation;                                                       //@synthesize _isPresentation=__isPresentation - In the implementation block
@property (setter=_setContainerViews:,nonatomic,retain) NSArray * _containerViews;                                                  //@synthesize _containerViews=__containerViews - In the implementation block
@property (assign,setter=_setPercentOffset:,nonatomic) double _percentOffset;                                                       //@synthesize _percentOffset=__percentOffset - In the implementation block
@property (assign,setter=_setAnimator:,nonatomic,__weak) id<UIViewControllerAnimatedTransitioning> _animator; 
@property (assign,setter=_setInteractor:,nonatomic,__weak) id<UIViewControllerInteractiveTransitioning> _interactor;                //@synthesize _interactor=__interactor - In the implementation block
@property (assign,setter=_setAllowUserInteraction:,getter=_allowUserInteraction,nonatomic) BOOL _allowUserInteraction;              //@synthesize _allowUserInteraction=__allowUserInteraction - In the implementation block
@property (assign,setter=_setRotating:,getter=_isRotating,nonatomic) BOOL rotating;                                                 //@synthesize rotating=_rotating - In the implementation block
@property (getter=_affineTransform,nonatomic,readonly) CGAffineTransform affineTransform; 
@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                                                                     //@synthesize animated=_animated - In the implementation block
@property (assign,setter=_setDuration:,nonatomic) double _duration;                                                                 //@synthesize _duration=__duration - In the implementation block
@property (setter=_setWillCompleteHandler:,nonatomic,copy) id _willCompleteHandler;                                                 //@synthesize _willCompleteHandler=__willCompleteHandler - In the implementation block
@property (setter=_setCompletionHandler:,nonatomic,copy) id _completionHandler;                                                     //@synthesize _completionHandler=__completionHandler - In the implementation block
@property (setter=_setDidCompleteHandler:,nonatomic,copy) id _didCompleteHandler;                                                   //@synthesize _didCompleteHandler=__didCompleteHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * containerView; 
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) BOOL transitionWasCancelled; 
@property (nonatomic,readonly) CGAffineTransform targetTransform; 
+(id)_associatedTransitionContextForObject:(id)arg1 ;
-(id)init;
-(id)viewForKey:(id)arg1 ;
-(void)dealloc;
-(UIView *)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(CGRect)initialFrameForViewController:(id)arg1 ;
-(CGRect)finalFrameForViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(long long)_completionCurve;
-(BOOL)_allowUserInteraction;
-(BOOL)transitionWasCancelled;
-(void)completeTransition:(BOOL)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)_stopInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)_setCurrentlyInteractive:(BOOL)arg1 ;
-(void)_setInitiallyInteractive:(BOOL)arg1 ;
-(double)_duration;
-(id)_completionHandler;
-(long long)presentationStyle;
-(id)_transitionCoordinator;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setDidCompleteHandler:(/*^block*/id)arg1 ;
-(void)_setIsAnimated:(BOOL)arg1 ;
-(void)_setContainerView:(id)arg1 ;
-(void)_setCompletionCurve:(long long)arg1 ;
-(void)_setAnimator:(id)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)_animator;
-(void)_setDuration:(double)arg1 ;
-(void)_setRotating:(BOOL)arg1 ;
-(BOOL)isInterruptible;
-(void)_enableInteractionForDisabledViews;
-(void)_setInteractor:(id)arg1 ;
-(void)_setPresentationStyle:(long long)arg1 ;
-(id)_postInteractiveCompletionHandler;
-(void)_setPostInteractiveCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsInFlight:(BOOL)arg1 ;
-(void)_setInteractiveUpdateHandler:(/*^block*/id)arg1 ;
-(void)_setTransitionIsCompleting:(BOOL)arg1 ;
-(_UIViewControllerTransitionCoordinator *)_auxContext;
-(void)__runAlongsideAnimations;
-(void)_setInterruptible:(BOOL)arg1 ;
-(long long)_state;
-(id<UIViewControllerInteractiveTransitioning>)_interactor;
-(BOOL)_isPresentation;
-(void)_setAllowUserInteraction:(BOOL)arg1 ;
-(void)_disableInteractionForViews:(id)arg1 ;
-(double)_completionVelocity;
-(long long)_alongsideAnimationsCount;
-(id)_willCompleteHandler;
-(void)_setWillCompleteHandler:(/*^block*/id)arg1 ;
-(BOOL)isAnimated;
-(BOOL)initiallyInteractive;
-(void)_setState:(long long)arg1 ;
-(double)_previousPercentComplete;
-(void)_setIsPresentation:(BOOL)arg1 ;
-(BOOL)_isRotating;
-(CGAffineTransform)targetTransform;
-(void)_runAlongsideCompletions;
-(BOOL)_transitionIsInFlight;
-(CGAffineTransform)_affineTransform;
-(BOOL)isCurrentlyInteractive;
-(BOOL)_initiallyInteractive;
-(id)_interactiveUpdateHandler;
-(void)_interactivityDidChange:(BOOL)arg1 ;
-(double)_percentOffset;
-(void)pauseInteractiveTransition;
-(NSArray *)_containerViews;
-(void)_setContainerViews:(id)arg1 ;
-(void)_setPercentOffset:(double)arg1 ;
-(void)_setPreviousPercentComplete:(double)arg1 ;
-(void)_updateInteractiveTransitionWithoutTrackingPercentComplete:(double)arg1 ;
-(void)setTransitionWasCancelled:(BOOL)arg1 ;
-(BOOL)_transitionIsCompleting;
-(id)_didCompleteHandler;
-(void)_setCompletionVelocity:(double)arg1 ;
-(void)_setAuxContext:(id)arg1 ;
@end

