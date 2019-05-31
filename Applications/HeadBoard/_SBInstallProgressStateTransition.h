//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_HBIconProgressTransition.h"

@class CAMediaTimingFunction;

@interface _SBInstallProgressStateTransition : _HBIconProgressTransition
{
    double _totalElapsedTime;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    CAMediaTimingFunction *_timingFunction;	// 24 = 0x18
    long long _fromState;	// 32 = 0x20
    long long _toState;	// 40 = 0x28
    double _fraction;	// 48 = 0x30
}

+ (Class)_classForTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x000000010004517c
+ (id)newTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000100045134
- (void).cxx_destruct;	// IMP=0x00000001000454cc
- (void)_updateView:(id)arg1;	// IMP=0x0000000100045448
- (_Bool)isCompleteWithView:(id)arg1;	// IMP=0x000000010004542c
- (void)completeTransitionAndUpdateView:(id)arg1;	// IMP=0x0000000100045410
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;	// IMP=0x0000000100045364
- (id)_initWithFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000100045278

@end

