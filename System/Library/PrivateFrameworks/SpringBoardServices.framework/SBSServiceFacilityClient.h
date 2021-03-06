/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSSystemServiceFacilityClient {

	long long _numberOfCheckOuts;

}
+(id)serviceFacilityIdentifier;
+(id)checkOutClientWithClass:(Class)arg1 ;
+(void)checkInClient:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)_incrementCheckout;
-(BOOL)_decrementCheckout;
@end

