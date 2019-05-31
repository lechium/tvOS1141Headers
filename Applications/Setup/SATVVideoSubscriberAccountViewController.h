//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVActionStep.h"
#import "SATVBundleHosting.h"

@class NSString, UIViewController<SATVActionStep><SATVBundle>;

@interface SATVVideoSubscriberAccountViewController : SATVStepViewController <SATVBundleHosting, SATVActionStep>
{
    UIViewController<SATVActionStep><SATVBundle> *_bundleViewController;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x000000010003a914
+ (Class)principalClass;	// IMP=0x000000010003a864
+ (id)_principalClassInfoPlistKey;	// IMP=0x000000010003a838
+ (id)_principalBundle;	// IMP=0x000000010003a75c
+ (id)stableKey;	// IMP=0x000000010003a74c
@property(retain, nonatomic) UIViewController<SATVActionStep><SATVBundle> *bundleViewController; // @synthesize bundleViewController=_bundleViewController;
- (void).cxx_destruct;	// IMP=0x000000010003af1c
- (void)viewDidLoad;	// IMP=0x000000010003add4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010003ad3c
- (void)hideAccompanyingAnimation;	// IMP=0x000000010003acd8
- (void)beginAccompanyingAnimation;	// IMP=0x000000010003ac74
@property(readonly, nonatomic) _Bool isConfigured;
- (void)reset;	// IMP=0x000000010003abe8
- (void)autoAdvance;	// IMP=0x000000010003aba8
@property(copy, nonatomic) CDUnknownBlockType completionHandler;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010003a938

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

