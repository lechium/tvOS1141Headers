/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSDictionary;

@interface FADispatchFamilyPushRequest : FAFamilyCircleRequest {

	NSDictionary* _payload;

}

@property (copy,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end
