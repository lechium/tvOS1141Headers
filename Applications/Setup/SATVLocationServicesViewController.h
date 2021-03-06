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

@interface SATVLocationServicesViewController : SATVStepViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource, SATVConsentStep>
{
    CDUnknownBlockType consentHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

+ (id)stableKey;	// IMP=0x000000010001b294
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType consentHandler; // @synthesize consentHandler;
- (void).cxx_destruct;	// IMP=0x000000010001babc
- (void)_enableLocationServices:(_Bool)arg1;	// IMP=0x000000010001b944
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010001b8ac
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010001b814
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x000000010001b7fc
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001b774
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001b6ec
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001b664
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001b5dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001b548
- (void)reset;	// IMP=0x000000010001b4a4
@property(readonly, nonatomic) _Bool isConfigured;
- (void)autoAdvance;	// IMP=0x000000010001b438
- (void)viewDidLoad;	// IMP=0x000000010001b344
- (id)init;	// IMP=0x000000010001b2c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType menuHandler;
@property(readonly) Class superclass;

@end

