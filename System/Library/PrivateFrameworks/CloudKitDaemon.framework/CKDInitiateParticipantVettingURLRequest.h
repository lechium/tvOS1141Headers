/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSData, NSString;

@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest {

	/*^block*/id _vettingInitiationRequestCompletionBlock;
	CKRecordID* _shareRecordID;
	NSData* _encryptedKey;
	NSString* _participantID;
	NSString* _baseToken;

}

@property (nonatomic,copy) CKRecordID * shareRecordID;                              //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,copy) NSData * encryptedKey;                                   //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,copy) NSString * participantID;                                //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,copy) NSString * baseToken;                                    //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,copy) id vettingInitiationRequestCompletionBlock;              //@synthesize vettingInitiationRequestCompletionBlock=_vettingInitiationRequestCompletionBlock - In the implementation block
-(NSString *)participantID;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(NSString *)baseToken;
-(CKRecordID *)shareRecordID;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)vettingInitiationRequestCompletionBlock;
-(id)initWithShareRecordID:(id)arg1 encryptedKey:(id)arg2 participantID:(id)arg3 baseToken:(id)arg4 ;
-(void)setVettingInitiationRequestCompletionBlock:(id)arg1 ;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(void)setParticipantID:(NSString *)arg1 ;
-(int)operationType;
@end

