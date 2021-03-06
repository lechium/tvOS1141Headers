/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMHomeInvitationData : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _invitationState;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long invitationState;               //@synthesize invitationState=_invitationState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeInvitationStateDescription:(long long)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)identifier;
-(id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)invitationState;
-(void)setInvitationState:(long long)arg1 ;
@end

