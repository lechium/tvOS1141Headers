//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SATVStep.h"

@class NSDate, NSString, SATVNavigationController;

@interface SATVStepViewController : UIViewController <SATVStep>
{
    CDUnknownBlockType menuHandler;	// 8 = 0x8
    long long _buddyVersion;	// 16 = 0x10
    NSDate *_datePresented;	// 24 = 0x18
}

+ (id)stepPresentationRecord;	// IMP=0x000000010001e8a4
+ (id)previousPresentationRecord;	// IMP=0x000000010001e788
+ (id)stableKey;	// IMP=0x000000010001e75c
+ (_Bool)isSupported;	// IMP=0x000000010001e754
@property(retain, nonatomic) NSDate *datePresented; // @synthesize datePresented=_datePresented;
@property(nonatomic) long long buddyVersion; // @synthesize buddyVersion=_buddyVersion;
@property(copy, nonatomic) CDUnknownBlockType menuHandler; // @synthesize menuHandler;
- (void).cxx_destruct;	// IMP=0x000000010001eaec
- (void)reset;	// IMP=0x000000010001ea88
- (void)autoAdvance;	// IMP=0x000000010001ea84
@property(readonly, nonatomic) _Bool isConfigured;
- (void)_handleMenuAction;	// IMP=0x000000010001ea38
- (void)loadView;	// IMP=0x000000010001e8d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SATVNavigationController *navigationController; // @dynamic navigationController;
@property(readonly) Class superclass;

@end
