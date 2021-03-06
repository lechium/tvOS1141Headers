/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMCore/IMCore-Structs.h>
@interface IMService : NSObject
+(id)iMessageService;
+(id)smsService;
+(id)facetimeService;
+(id)callService;
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned long long)arg1 ;
+(id)imageURLForStatus:(unsigned long long)arg1 ;
+(id)allServicesNonBlocking;
+(id)serviceWithName:(id)arg1 ;
+(id)myIdleTime;
+(id)notificationCenter;
+(unsigned long long)myStatus;
+(BOOL)isEmailAddress:(id)arg1 inDomains:(id)arg2 ;
+(unsigned long long)statusForIMPerson:(id)arg1 ;
+(unsigned long long)statusForABPerson:(id)arg1 ;
+(id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2 ;
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
+(id)allServices;
-(id)name;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedName;
-(unsigned long long)status;
-(id)localizedShortName;
-(void)login;
-(void)logout;
-(BOOL)initialSyncPerformed;
-(id)infoForScreenName:(id)arg1 ;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)arg1 ;
-(id)peopleWithScreenName:(id)arg1 ;
-(id)screenNamesForPerson:(id)arg1 ;
-(id)myScreenNames;
-(id)infoForPerson:(id)arg1 ;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
@end

