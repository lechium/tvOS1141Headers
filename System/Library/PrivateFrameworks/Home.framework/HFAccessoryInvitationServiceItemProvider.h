/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFServiceItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider {

	HMUser* _user;

}

@property (nonatomic,readonly) HMUser * user;              //@synthesize user=_user - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(/*^block*/id)filter;
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(id)initWithHome:(id)arg1 user:(id)arg2 ;
-(HMUser *)user;
@end

