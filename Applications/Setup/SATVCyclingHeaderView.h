//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SATVCyclingView.h"
#import "SATVPulsingAnimationDelegate.h"

@class NSArray, NSObject<OS_dispatch_source>, NSString, SATVHeaderView, SATVPulsingHeaderView;

@interface SATVCyclingHeaderView : UIView <SATVPulsingAnimationDelegate, SATVCyclingView>
{
    NSObject<OS_dispatch_source> *_autoAdvanceTimer;	// 8 = 0x8
    double _autoAdvanceInterval;	// 16 = 0x10
    _Bool _manualMode;	// 24 = 0x18
    NSArray *_titleStrings;	// 32 = 0x20
    NSArray *_subtitleStrings;	// 40 = 0x28
    NSArray *_languageCodes;	// 48 = 0x30
    SATVPulsingHeaderView *_firstPulsingHeaderView;	// 56 = 0x38
    SATVPulsingHeaderView *_secondPulsingHeaderView;	// 64 = 0x40
    SATVHeaderView *_manualHeaderView;	// 72 = 0x48
    unsigned long long _currentStringIndex;	// 80 = 0x50
}

@property(nonatomic) _Bool manualMode; // @synthesize manualMode=_manualMode;
@property(nonatomic) unsigned long long currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
@property(retain, nonatomic) SATVHeaderView *manualHeaderView; // @synthesize manualHeaderView=_manualHeaderView;
@property(retain, nonatomic) SATVPulsingHeaderView *secondPulsingHeaderView; // @synthesize secondPulsingHeaderView=_secondPulsingHeaderView;
@property(retain, nonatomic) SATVPulsingHeaderView *firstPulsingHeaderView; // @synthesize firstPulsingHeaderView=_firstPulsingHeaderView;
@property(retain, nonatomic) NSArray *languageCodes; // @synthesize languageCodes=_languageCodes;
@property(retain, nonatomic) NSArray *subtitleStrings; // @synthesize subtitleStrings=_subtitleStrings;
@property(retain, nonatomic) NSArray *titleStrings; // @synthesize titleStrings=_titleStrings;
- (void).cxx_destruct;	// IMP=0x0000000100020300
- (void)didFinishAnimationPulsingAnimation:(id)arg1;	// IMP=0x000000010001fec4
- (void)setManualTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x000000010001fce8
- (unsigned long long)_nextUniqueStringIndex;	// IMP=0x000000010001fad0
- (_Bool)_supportsCycling;	// IMP=0x000000010001fa80
- (void)_stopAutoAdvanceTimer;	// IMP=0x000000010001fa3c
- (void)_startAutoAdvanceTimer;	// IMP=0x000000010001f8a8
- (void)_cycleAtBeginTime:(double)arg1;	// IMP=0x000000010001f710
- (void)cycleAtBeginTime:(double)arg1;	// IMP=0x000000010001f6cc
- (void)cycleWithInterval:(double)arg1;	// IMP=0x000000010001f6b4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010001f64c
- (void)layoutSubviews;	// IMP=0x000000010001f5a4
- (void)dealloc;	// IMP=0x000000010001f4ec
- (id)initWithTitleStrings:(id)arg1 subtitleStrings:(id)arg2 languageCodes:(id)arg3;	// IMP=0x000000010001eef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

