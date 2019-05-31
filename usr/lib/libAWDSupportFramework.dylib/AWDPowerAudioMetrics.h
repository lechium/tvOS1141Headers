/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW20* _audioVolumeLevelDurationSpeakers;
	SCD_Struct_AW20* _audioVolumeLevelDurations;
	unsigned long long _timestamp;
	unsigned _audioHeadsetDuration;
	unsigned _audioHeadsetPowerMicroWatt;
	unsigned _audioSpeakerDuration;
	unsigned _audioSpeakerPowerMicroWatt;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSpeakerPowerMicroWatt; 
@property (assign,nonatomic) unsigned audioSpeakerPowerMicroWatt;                                     //@synthesize audioSpeakerPowerMicroWatt=_audioSpeakerPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasAudioHeadsetPowerMicroWatt; 
@property (assign,nonatomic) unsigned audioHeadsetPowerMicroWatt;                                     //@synthesize audioHeadsetPowerMicroWatt=_audioHeadsetPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasAudioSpeakerDuration; 
@property (assign,nonatomic) unsigned audioSpeakerDuration;                                           //@synthesize audioSpeakerDuration=_audioSpeakerDuration - In the implementation block
@property (assign,nonatomic) BOOL hasAudioHeadsetDuration; 
@property (assign,nonatomic) unsigned audioHeadsetDuration;                                           //@synthesize audioHeadsetDuration=_audioHeadsetDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long audioVolumeLevelDurationsCount; 
@property (nonatomic,readonly) unsigned* audioVolumeLevelDurations; 
@property (nonatomic,readonly) unsigned long long audioVolumeLevelDurationSpeakersCount; 
@property (nonatomic,readonly) unsigned* audioVolumeLevelDurationSpeakers; 
-(unsigned long long)audioVolumeLevelDurationsCount;
-(void)clearAudioVolumeLevelDurations;
-(unsigned)audioVolumeLevelDurationAtIndex:(unsigned long long)arg1 ;
-(void)addAudioVolumeLevelDuration:(unsigned)arg1 ;
-(unsigned long long)audioVolumeLevelDurationSpeakersCount;
-(void)clearAudioVolumeLevelDurationSpeakers;
-(unsigned)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)arg1 ;
-(void)addAudioVolumeLevelDurationSpeaker:(unsigned)arg1 ;
-(void)setAudioSpeakerPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasAudioSpeakerPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasAudioSpeakerPowerMicroWatt;
-(void)setAudioHeadsetPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasAudioHeadsetPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasAudioHeadsetPowerMicroWatt;
-(void)setAudioSpeakerDuration:(unsigned)arg1 ;
-(void)setHasAudioSpeakerDuration:(BOOL)arg1 ;
-(BOOL)hasAudioSpeakerDuration;
-(void)setAudioHeadsetDuration:(unsigned)arg1 ;
-(void)setHasAudioHeadsetDuration:(BOOL)arg1 ;
-(BOOL)hasAudioHeadsetDuration;
-(unsigned*)audioVolumeLevelDurations;
-(void)setAudioVolumeLevelDurations:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)audioVolumeLevelDurationSpeakers;
-(void)setAudioVolumeLevelDurationSpeakers:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)audioSpeakerPowerMicroWatt;
-(unsigned)audioHeadsetPowerMicroWatt;
-(unsigned)audioSpeakerDuration;
-(unsigned)audioHeadsetDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

