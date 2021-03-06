/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCTextStreamConfig : NSObject {

	long long _codecType;
	unsigned long long _numRedundantPayloads;
	unsigned long long _txRedPayloadType;
	unsigned long long _rxRedPayloadType;

}

@property (assign,nonatomic) long long codecType;                                  //@synthesize codecType=_codecType - In the implementation block
@property (assign,nonatomic) unsigned long long numRedundantPayloads;              //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) unsigned long long txRedPayloadType;                  //@synthesize txRedPayloadType=_txRedPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long rxRedPayloadType;                  //@synthesize rxRedPayloadType=_rxRedPayloadType - In the implementation block
+(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
+(long long)codecTypeWithClientCodecType:(long long)arg1 ;
-(BOOL)isValid;
-(id)dictionary;
-(unsigned long long)numRedundantPayloads;
-(void)setNumRedundantPayloads:(unsigned long long)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
-(BOOL)isRedValid;
-(unsigned long long)txRedPayloadType;
-(unsigned long long)rxRedPayloadType;
-(void)setTxRedPayloadType:(unsigned long long)arg1 ;
-(void)setRxRedPayloadType:(unsigned long long)arg1 ;
-(long long)codecType;
-(void)setCodecType:(long long)arg1 ;
@end

