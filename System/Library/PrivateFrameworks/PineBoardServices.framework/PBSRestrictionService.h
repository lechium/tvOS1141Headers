/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PBSRestrictionService : NSObject
+(id)sharedInstance;
-(void)authorizeRestrictionsWithResult:(/*^block*/id)arg1 ;
-(id)validateRestrictionForSetting:(unsigned long long)arg1 allowInteraction:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)validatePIN:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)restrictionsEnabledWithResult:(/*^block*/id)arg1 ;
-(void)cancelRestrictionAuthorization:(id)arg1 ;
-(id)validateRestrictionForContentType:(unsigned long long)arg1 withRating:(id)arg2 allowInteraction:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
@end
