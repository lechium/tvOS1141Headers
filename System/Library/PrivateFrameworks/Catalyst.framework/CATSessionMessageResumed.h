/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary, NSArray;

@interface CATSessionMessageResumed : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _serverUserInfo;
	NSArray* _pendingRemoteTaskUUIDs;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                          //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * serverUserInfo;                 //@synthesize serverUserInfo=_serverUserInfo - In the implementation block
@property (nonatomic,copy) NSArray * pendingRemoteTaskUUIDs;              //@synthesize pendingRemoteTaskUUIDs=_pendingRemoteTaskUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(id)initWithSessionUUID:(id)arg1 ;
-(NSArray *)pendingRemoteTaskUUIDs;
-(NSDictionary *)serverUserInfo;
-(void)setServerUserInfo:(NSDictionary *)arg1 ;
-(void)setPendingRemoteTaskUUIDs:(NSArray *)arg1 ;
@end
