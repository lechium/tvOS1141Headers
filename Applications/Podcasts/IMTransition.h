//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, UIView, UIViewController<IMViewControllerContaining><IMTransitionParent>;

@interface IMTransition : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    UIViewController<IMViewControllerContaining><IMTransitionParent> *_parentViewController;	// 16 = 0x10
    id <IMTransitionDelegate> _delegate;	// 24 = 0x18
    double _duration;	// 32 = 0x20
    double _delay;	// 40 = 0x28
    _Bool _animated;	// 48 = 0x30
    _Bool _useSnapshots;	// 49 = 0x31
    _Bool _shouldAllowInterfaceRotation;	// 50 = 0x32
    _Bool _reverse;	// 51 = 0x33
    _Bool _started;	// 52 = 0x34
    _Bool _animationsFinished;	// 53 = 0x35
    UIView *_view;	// 56 = 0x38
    NSMutableDictionary *_mutableUserInfo;	// 64 = 0x40
    NSMutableSet *_animations;	// 72 = 0x48
    CDUnknownBlockType _setup;	// 80 = 0x50
    CDUnknownBlockType _completion;	// 88 = 0x58
    CDUnknownBlockType _animationsBlock;	// 96 = 0x60
}

+ (id)transitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100219764
+ (id)transition;	// IMP=0x0000000100219734
+ (void)initialize;	// IMP=0x0000000100219700
@property(copy, nonatomic) CDUnknownBlockType animationsBlock; // @synthesize animationsBlock=_animationsBlock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType setup; // @synthesize setup=_setup;
@property(nonatomic) _Bool animationsFinished; // @synthesize animationsFinished=_animationsFinished;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSMutableSet *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) NSMutableDictionary *mutableUserInfo; // @synthesize mutableUserInfo=_mutableUserInfo;
@property(nonatomic) _Bool shouldAllowInterfaceRotation; // @synthesize shouldAllowInterfaceRotation=_shouldAllowInterfaceRotation;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(nonatomic) _Bool useSnapshots; // @synthesize useSnapshots=_useSnapshots;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) id <IMTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIViewController<IMViewControllerContaining><IMTransitionParent> *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010021a9fc
- (void)animationDidStart:(id)arg1;	// IMP=0x000000010021a9f0
- (void)UIViewAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;	// IMP=0x000000010021a9a0
- (void)UIViewAnimationDidStart:(id)arg1 context:(void *)arg2;	// IMP=0x000000010021a994
- (void)animationEnded:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010021a8dc
- (void)animationStarted:(id)arg1;	// IMP=0x000000010021a874
- (void)notifyTransitionDidEnd;	// IMP=0x000000010021a774
- (void)notifyTransitionDidStart;	// IMP=0x000000010021a6b8
- (void)notifyTransitionWillStart;	// IMP=0x000000010021a5fc
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;
- (id)mutableUserInfoCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000010021a570
@property(readonly, nonatomic) _Bool shouldPerformTransition;
- (SEL)defaultUIViewAnimationDidStopSelector;	// IMP=0x000000010021a4ec
- (SEL)defaultUIViewAnimationWillStartSelector;	// IMP=0x000000010021a4e0
@property(readonly, nonatomic) UIView *parentView; // @dynamic parentView;
- (void)beginAnimation;	// IMP=0x000000010021a340
- (void)cleanupViewControllers;	// IMP=0x000000010021a30c
- (void)prepareViewControllers;	// IMP=0x000000010021a2d8
- (void)performNonAnimatedTransition;	// IMP=0x000000010021a2a0
- (void)performAnimatedTransition;	// IMP=0x000000010021a130
@property(readonly, nonatomic) struct CGRect transitionRect; // @dynamic transitionRect;
- (void)transitionDidEnd;	// IMP=0x0000000100219ff0
- (void)transitionDidStart;	// IMP=0x0000000100219f98
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100219f58
- (int)roleForViewController:(id)arg1;	// IMP=0x0000000100219ec4
- (void)cleanupTransition;	// IMP=0x0000000100219ea0
- (void)performTransition;	// IMP=0x0000000100219e94
- (void)prepareTransition;	// IMP=0x0000000100219dcc
- (void)beginTransition;	// IMP=0x0000000100219c50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100219aac
- (void)dealloc;	// IMP=0x0000000100219990
- (id)init;	// IMP=0x00000001002198bc
- (id)initWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002197ac

@end

