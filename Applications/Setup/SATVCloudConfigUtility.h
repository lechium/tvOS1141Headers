//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCProfileConnection, NSDictionary, NSString;

@interface SATVCloudConfigUtility : NSObject
{
    _Bool _shouldSkipEnrollment;	// 8 = 0x8
    NSDictionary *_cloudDetails;	// 16 = 0x10
    MCProfileConnection *_profileConnection;	// 24 = 0x18
}

+ (id)sharedUtility;	// IMP=0x0000000100046a70
+ (_Bool)cloudConfigIsPresentInActivationRecord:(id)arg1;	// IMP=0x00000001000469e4
@property(retain, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
@property(nonatomic) _Bool shouldSkipEnrollment; // @synthesize shouldSkipEnrollment=_shouldSkipEnrollment;
@property(copy, nonatomic) NSDictionary *cloudDetails; // @synthesize cloudDetails=_cloudDetails;
- (void).cxx_destruct;	// IMP=0x000000010004898c
@property(readonly, nonatomic) _Bool shouldSkipRoom;
@property(readonly, nonatomic) _Bool shouldSkipHomeScreenSync;
@property(readonly, nonatomic) _Bool shouldSkipVideoSubscriberAccountApp;
@property(readonly, nonatomic) _Bool shouldSkipVideoSubscriberAccount;
@property(readonly, nonatomic) _Bool shouldSkipTermsAndConditions;
@property(readonly, nonatomic) _Bool shouldSkipAppAnalytics;
@property(readonly, nonatomic) _Bool shouldSkipDiagnostics;
@property(readonly, nonatomic) _Bool shouldSkipFlyover;
@property(readonly, nonatomic) _Bool shouldSkipLocationServices;
@property(readonly, nonatomic) _Bool shouldSkipLogin;
@property(readonly, nonatomic) _Bool shouldSkipSiri;
@property(readonly, nonatomic) _Bool shouldSkipPrivacy;
@property(readonly, nonatomic) _Bool shouldSkipTapToSetup;
@property(readonly, nonatomic) _Bool shouldSkipRegion;
@property(readonly, nonatomic) _Bool shouldSkipLanguage;
@property(readonly, nonatomic) _Bool shouldAutoAdvance;
@property(readonly, nonatomic) NSString *region;
@property(readonly, nonatomic) NSString *language;
- (void)cloudConfigDidChange:(id)arg1;	// IMP=0x0000000100047e3c
- (void)reset;	// IMP=0x0000000100047dd0
- (void)loginWithUsername:(id)arg1 password:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100047814
- (void)cloudConfigDidFinishWasApplied:(_Bool)arg1;	// IMP=0x0000000100047720
- (void)retrieveCloudConfigurationDetailsCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100047010
@property(readonly, nonatomic) NSString *organizationSupportPhone;
@property(readonly, nonatomic) NSString *organizationCountry;
@property(readonly, nonatomic) NSString *organizationZipCode;
@property(readonly, nonatomic) NSString *organizationRegion;
@property(readonly, nonatomic) NSString *organizationCity;
@property(readonly, nonatomic) NSString *organizationAddressLine2;
@property(readonly, nonatomic) NSString *organizationAddressLine1;
@property(readonly, nonatomic) NSString *organizationAddress;
@property(readonly, nonatomic) NSString *organizationDepartment;
@property(readonly, nonatomic) NSString *organizationName;
@property(readonly, nonatomic, getter=isSupervised) _Bool supervised;
- (void)dealloc;	// IMP=0x0000000100046bfc
- (id)init;	// IMP=0x0000000100046af0

@end

