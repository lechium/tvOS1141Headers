/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage {

	unsigned long long _payloadOffset;
	unsigned long long _payloadLength;
	unsigned short _isResponse;
	unsigned short _type;
	NSData* _data;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) unsigned short isResponse;                      //@synthesize isResponse=_isResponse - In the implementation block
@property (nonatomic,readonly) unsigned short type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                          //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                          //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) BOOL expectsPeerResponse;                       //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (nonatomic,readonly) BOOL wantsAppAck;                               //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) BOOL compressed;                                  //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                              //@synthesize expiryDate=_expiryDate - In the implementation block
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(unsigned short)type;
-(NSData *)data;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)wantsAppAck;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(NSString *)messageUUID;
-(NSString *)peerResponseIdentifier;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9 ;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(unsigned char)command;
-(BOOL)expectsPeerResponse;
-(unsigned short)isResponse;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
@end
