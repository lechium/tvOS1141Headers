/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCAudioStreamConfig : NSObject {

	long long _codecType;
	BOOL _cnEnabled;
	unsigned long long _cnPayloadType;
	unsigned long long _dtmfPayloadType;
	unsigned long long _dtmfTimestampRate;
	unsigned long long _ptime;
	unsigned long long _maxPtime;
	long long _audioStreamMode;
	unsigned _codecRateModeMask;
	long long _preferredCodecRateMode;
	BOOL _octetAligned;
	BOOL _dtxEnabled;
	BOOL _latencySensitiveMode;
	unsigned long long _numRedundantPayloads;
	unsigned long long _txRedPayloadType;
	unsigned long long _rxRedPayloadType;

}

@property (assign,nonatomic) long long audioStreamMode;                                            //@synthesize audioStreamMode=_audioStreamMode - In the implementation block
@property (assign,nonatomic) long long codecType;                                                  //@synthesize codecType=_codecType - In the implementation block
@property (assign,getter=isCNEnabled,nonatomic) BOOL cnEnabled;                                    //@synthesize cnEnabled=_cnEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long cnPayloadType;                                     //@synthesize cnPayloadType=_cnPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long dtmfPayloadType;                                   //@synthesize dtmfPayloadType=_dtmfPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long dtmfTimestampRate;                                 //@synthesize dtmfTimestampRate=_dtmfTimestampRate - In the implementation block
@property (assign,nonatomic) unsigned long long ptime;                                             //@synthesize ptime=_ptime - In the implementation block
@property (assign,nonatomic) unsigned long long maxPtime;                                          //@synthesize maxPtime=_maxPtime - In the implementation block
@property (assign,getter=isOctectAligned,nonatomic) BOOL octetAligned;                             //@synthesize octetAligned=_octetAligned - In the implementation block
@property (assign,getter=isDTXEnabled,nonatomic) BOOL dtxEnabled;                                  //@synthesize dtxEnabled=_dtxEnabled - In the implementation block
@property (assign,nonatomic) long long preferredCodecRateMode;                                     //@synthesize preferredCodecRateMode=_preferredCodecRateMode - In the implementation block
@property (assign,nonatomic) unsigned codecRateModeMask;                                           //@synthesize codecRateModeMask=_codecRateModeMask - In the implementation block
@property (assign,getter=isLatencySensitiveMode,nonatomic) BOOL latencySensitiveMode;              //@synthesize latencySensitiveMode=_latencySensitiveMode - In the implementation block
@property (assign,nonatomic) unsigned long long numRedundantPayloads;                              //@synthesize numRedundantPayloads=_numRedundantPayloads - In the implementation block
@property (assign,nonatomic) unsigned long long txRedPayloadType;                                  //@synthesize txRedPayloadType=_txRedPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long rxRedPayloadType;                                  //@synthesize rxRedPayloadType=_rxRedPayloadType - In the implementation block
+(long long)clientStreamModeWithStreamMode:(long long)arg1 ;
+(long long)clientCodecTypeWithCodecType:(long long)arg1 ;
+(unsigned)clientCodecRateMaskForCodecRateMode:(unsigned)arg1 ;
+(long long)clientCodecRateModeForCodecRateMode:(int)arg1 ;
+(long long)streamModeWithClientStreamMode:(long long)arg1 ;
+(unsigned)codecRateMaskForClientCodecRateMode:(unsigned)arg1 ;
+(int)codecRateModeForClientCodecRateMode:(long long)arg1 ;
+(long long)codecTypeWithClientCodecType:(long long)arg1 ;
-(id)init;
-(BOOL)isValid;
-(id)dictionary;
-(unsigned long long)numRedundantPayloads;
-(BOOL)isLatencySensitiveMode;
-(unsigned long long)maxPtime;
-(void)setMaxPtime:(unsigned long long)arg1 ;
-(void)setLatencySensitiveMode:(BOOL)arg1 ;
-(void)setNumRedundantPayloads:(unsigned long long)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
-(BOOL)isDTMFValid;
-(BOOL)isCNValid;
-(BOOL)isRedValid;
-(unsigned long long)txRedPayloadType;
-(unsigned long long)rxRedPayloadType;
-(void)setDtmfPayloadType:(unsigned long long)arg1 ;
-(unsigned long long)dtmfTimestampRate;
-(void)setDtmfTimestampRate:(unsigned long long)arg1 ;
-(unsigned)codecRateModeMask;
-(void)setCodecRateModeMask:(unsigned)arg1 ;
-(long long)preferredCodecRateMode;
-(void)setPreferredCodecRateMode:(long long)arg1 ;
-(void)setTxRedPayloadType:(unsigned long long)arg1 ;
-(void)setRxRedPayloadType:(unsigned long long)arg1 ;
-(long long)codecType;
-(void)setCodecType:(long long)arg1 ;
-(void)setOctetAligned:(BOOL)arg1 ;
-(void)setDtxEnabled:(BOOL)arg1 ;
-(void)setAudioStreamMode:(long long)arg1 ;
-(void)setCnEnabled:(BOOL)arg1 ;
-(void)setCnPayloadType:(unsigned long long)arg1 ;
-(void)setPtime:(unsigned long long)arg1 ;
-(unsigned long long)dtmfPayloadType;
-(BOOL)isOctectAligned;
-(BOOL)isDTXEnabled;
-(long long)audioStreamMode;
-(BOOL)isCNEnabled;
-(unsigned long long)cnPayloadType;
-(unsigned long long)ptime;
@end

