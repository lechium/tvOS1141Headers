//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSArray, NSString, _TVSettingsImageLoaderQueue;

@interface TVSettingsParadeView : UIView <CAAnimationDelegate>
{
    _Bool _pausedForResignActive;	// 8 = 0x8
    _Bool _paused;	// 9 = 0x9
    _Bool _shuffled;	// 10 = 0xa
    _Bool _inOrder;	// 11 = 0xb
    NSArray *_imageProxies;	// 16 = 0x10
    _TVSettingsImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_shuffledImageProxies;	// 32 = 0x20
    NSArray *_positionKeyframes;	// 40 = 0x28
    NSArray *_depthKeyframes;	// 48 = 0x30
    NSArray *_transformKeyframes;	// 56 = 0x38
    struct CGRect _animationBounds;	// 64 = 0x40
    struct CGRect _maximumImageBounds;	// 96 = 0x60
}

@property(retain, nonatomic) NSArray *transformKeyframes; // @synthesize transformKeyframes=_transformKeyframes;
@property(retain, nonatomic) NSArray *depthKeyframes; // @synthesize depthKeyframes=_depthKeyframes;
@property(retain, nonatomic) NSArray *positionKeyframes; // @synthesize positionKeyframes=_positionKeyframes;
@property(nonatomic) struct CGRect maximumImageBounds; // @synthesize maximumImageBounds=_maximumImageBounds;
@property(nonatomic) struct CGRect animationBounds; // @synthesize animationBounds=_animationBounds;
@property(copy, nonatomic) NSArray *shuffledImageProxies; // @synthesize shuffledImageProxies=_shuffledImageProxies;
@property(retain, nonatomic) _TVSettingsImageLoaderQueue *loaderQueue; // @synthesize loaderQueue=_loaderQueue;
@property(nonatomic, getter=isInOrder) _Bool inOrder; // @synthesize inOrder=_inOrder;
@property(nonatomic, getter=isShuffled) _Bool shuffled; // @synthesize shuffled=_shuffled;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;	// IMP=0x000000010001db48
- (id)_sublayerWithAnimation:(id)arg1;	// IMP=0x000000010001d870
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x000000010001d6dc
- (void)_stopAnimations;	// IMP=0x000000010001d584
- (void)_updateAnimationForLayer:(id)arg1 timeOffset:(double)arg2;	// IMP=0x000000010001ceb4
- (void)_updateAnimations;	// IMP=0x000000010001cd20
- (void)_updateKeyframes;	// IMP=0x000000010001ca0c
- (id)_createLayerForImage:(struct CGImage *)arg1;	// IMP=0x000000010001c980
- (id)_imageProxiesToLoad;	// IMP=0x000000010001c950
- (long long)_maximumImageCount;	// IMP=0x000000010001c948
- (_Bool)isPreviewPaused;	// IMP=0x000000010001c878
- (void)setPreviewPaused:(_Bool)arg1;	// IMP=0x000000010001c86c
- (void)_applicationDidFinishSuspensionNotification:(id)arg1;	// IMP=0x000000010001c370
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000010001c31c
- (void)didMoveToSuperview;	// IMP=0x000000010001c2c8
- (void)layoutSubviews;	// IMP=0x000000010001c220
- (void)dealloc;	// IMP=0x000000010001c104
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010001bea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

