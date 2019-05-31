/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, ENGroupID, IDSDestinationPushToken, NSData;

@interface IDSCloudKitTransportLogMessage : NSObject {

	NSDictionary* _payload;
	NSString* _secondaryID;
	NSString* _deviceID;
	NSString* _encryptionType;

}

@property (nonatomic,retain) NSDictionary * payload;                               //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSString * secondaryID;                               //@synthesize secondaryID=_secondaryID - In the implementation block
@property (nonatomic,retain) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * encryptionType;                            //@synthesize encryptionType=_encryptionType - In the implementation block
@property (nonatomic,readonly) ENGroupID * groupID; 
@property (nonatomic,readonly) NSString * recipientAlias; 
@property (nonatomic,readonly) NSString * senderAlias; 
@property (nonatomic,readonly) IDSDestinationPushToken * destination; 
@property (nonatomic,readonly) NSData * encryptedPayload; 
@property (nonatomic,readonly) NSString * cypherIdentifier; 
-(NSString *)encryptionType;
-(void)setEncryptionType:(NSString *)arg1 ;
-(NSDictionary *)payload;
-(IDSDestinationPushToken *)destination;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setSecondaryID:(NSString *)arg1 ;
-(NSString *)recipientAlias;
-(NSString *)senderAlias;
-(NSString *)cypherIdentifier;
-(NSString *)secondaryID;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSData *)encryptedPayload;
-(ENGroupID *)groupID;
@end
