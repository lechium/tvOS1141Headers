/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATMessage.h>

@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage {

	NSUUID* _taskUUID;
	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSUUID * taskUUID;                    //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSUUID *)taskUUID;
-(id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)setTaskUUID:(NSUUID *)arg1 ;
@end

