//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SATVStepViewController.h"

#import "SATVConsentStep.h"
#import "SATVConsentViewControllerDataSource.h"
#import "SATVConsentViewControllerDelegate.h"

@class NSString, OBPrivacyLinkController;

@interface SATVAppAnalyticsController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (_Bool)isSupported;	// IMP=0x00000001000093b0
+ (id)stableKey;	// IMP=0x0000000100009384
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void).cxx_destruct;	// IMP=0x0000000100009c28
- (void)_enableAppAnalytics:(_Bool)arg1;	// IMP=0x0000000100009adc
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100009a44
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x00000001000099ac
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100009994
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010000990c
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100009884
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x00000001000097fc
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100009774
- (void)reset;	// IMP=0x00000001000096dc
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x0000000100009670
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000095dc
- (void)viewDidLoad;	// IMP=0x00000001000094e8
- (id)init;	// IMP=0x0000000100009464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

