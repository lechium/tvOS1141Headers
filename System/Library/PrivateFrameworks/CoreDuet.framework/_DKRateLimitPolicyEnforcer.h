/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _DKRateLimitPolicyEnforcer : NSObject {

	NSDictionary* _eventStreamRateLimiters;

}
+(id)rateLimitPolicyEnforcer;
-(id)init;
-(id)filterObjectsByEnforcingRateLimit:(id)arg1 ;
-(void)creditForDeletion:(id)arg1 ;
@end

