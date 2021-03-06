/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSOptional;

@interface VSAccountAuthentication : NSObject {

	NSString* _username;
	VSOptional* _authenticationToken;

}

@property (nonatomic,copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) VSOptional * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
-(id)init;
-(id)description;
-(NSString *)username;
-(void)setAuthenticationToken:(VSOptional *)arg1 ;
-(VSOptional *)authenticationToken;
-(void)setUsername:(NSString *)arg1 ;
@end

