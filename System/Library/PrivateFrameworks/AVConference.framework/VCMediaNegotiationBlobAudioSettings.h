/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying> {

	unsigned _audioUnitModel;
	unsigned _payloadFlags;
	unsigned _rtpSSRC;
	unsigned _secondaryFlags;
	unsigned _supportFlags;
	BOOL _useSBR;
	SCD_Struct_VC29 _has;

}

@property (nonatomic,readonly) BOOL allowAudioRecording; 
@property (assign,nonatomic) unsigned rtpSSRC;                        //@synthesize rtpSSRC=_rtpSSRC - In the implementation block
@property (assign,nonatomic) BOOL hasAudioUnitModel; 
@property (assign,nonatomic) unsigned audioUnitModel;                 //@synthesize audioUnitModel=_audioUnitModel - In the implementation block
@property (assign,nonatomic) unsigned supportFlags;                   //@synthesize supportFlags=_supportFlags - In the implementation block
@property (assign,nonatomic) unsigned payloadFlags;                   //@synthesize payloadFlags=_payloadFlags - In the implementation block
@property (assign,nonatomic) unsigned secondaryFlags;                 //@synthesize secondaryFlags=_secondaryFlags - In the implementation block
@property (assign,nonatomic) BOOL useSBR;                             //@synthesize useSBR=_useSBR - In the implementation block
+(int)negotiationPayloadFromPayload:(int)arg1 ;
+(int)payloadFromNegotiationPayload:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)allowAudioRecording;
-(void)setPayloadFlags:(unsigned)arg1 ;
-(unsigned)payloadFlags;
-(void)setAudioUnitModel:(unsigned)arg1 ;
-(void)setHasAudioUnitModel:(BOOL)arg1 ;
-(BOOL)hasAudioUnitModel;
-(unsigned)rtpSSRC;
-(void)setRtpSSRC:(unsigned)arg1 ;
-(unsigned)audioUnitModel;
-(unsigned)supportFlags;
-(void)setSupportFlags:(unsigned)arg1 ;
-(unsigned)secondaryFlags;
-(void)setSecondaryFlags:(unsigned)arg1 ;
-(BOOL)useSBR;
-(void)setUseSBR:(BOOL)arg1 ;
-(void)setAudioRuleCollection:(id)arg1 ;
-(id)initWithSSRC:(unsigned)arg1 audioRuleCollection:(id)arg2 allowAudioRecording:(BOOL)arg3 audioUnitNumber:(unsigned)arg4 ;
-(id)newAudioRuleCollection;
-(void)printWithLogFile:(void*)arg1 ;
@end
