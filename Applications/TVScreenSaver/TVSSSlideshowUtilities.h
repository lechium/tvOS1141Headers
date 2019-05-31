//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVSSSlideshowUtilities : NSObject
{
    long long _mode;	// 8 = 0x8
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)_getRandomizedMarimbaTheme;	// IMP=0x0000000100008024
- (void)_setTransitionTiming:(double)arg1 marimbaView:(id)arg2;	// IMP=0x0000000100007cfc
- (id)alertControllerDisplayingTimePerSlideOptionsForCell:(id)arg1;	// IMP=0x000000010000704c
- (_Bool)themeHasAdditionalOptions:(id)arg1;	// IMP=0x0000000100006fd4
- (double)timePerSlide;	// IMP=0x0000000100006f10
- (void)cleanUpMarimbaResources:(id)arg1;	// IMP=0x0000000100006e74
- (void)updateMarimbaView:(id)arg1 transitionTiming:(double)arg2;	// IMP=0x0000000100006b8c
- (void)updateTransitionTimingForMarimbaView:(id)arg1;	// IMP=0x0000000100006b7c
- (void)updateMarimbaView:(id)arg1 currentTheme:(id)arg2 currentTransition:(id)arg3;	// IMP=0x0000000100006244
- (id)updateMarimbaDocument:(id)arg1 photoAssets:(id)arg2;	// IMP=0x0000000100005c24
- (id)init;	// IMP=0x0000000100005bd8
- (id)initWithMarimbaMode:(long long)arg1;	// IMP=0x0000000100005b88

@end

