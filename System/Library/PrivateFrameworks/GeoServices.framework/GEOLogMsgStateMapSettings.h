/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateMapSettings : PBCodable <NSCopying> {

	int _navVoiceVolume;
	int _preferredTransportMode;
	BOOL _avoidHighways;
	BOOL _avoidTolls;
	BOOL _findMyCarEnabled;
	BOOL _headingEnabled;
	BOOL _labelEnabled;
	BOOL _pauseSpokenAudioEnabled;
	BOOL _speedLimitEnabled;
	BOOL _trafficEnabled;
	SCD_Struct_GE108 _has;

}

@property (assign,nonatomic) BOOL hasPreferredTransportMode; 
@property (assign,nonatomic) int preferredTransportMode;                   //@synthesize preferredTransportMode=_preferredTransportMode - In the implementation block
@property (assign,nonatomic) BOOL hasAvoidTolls; 
@property (assign,nonatomic) BOOL avoidTolls;                              //@synthesize avoidTolls=_avoidTolls - In the implementation block
@property (assign,nonatomic) BOOL hasAvoidHighways; 
@property (assign,nonatomic) BOOL avoidHighways;                           //@synthesize avoidHighways=_avoidHighways - In the implementation block
@property (assign,nonatomic) BOOL hasHeadingEnabled; 
@property (assign,nonatomic) BOOL headingEnabled;                          //@synthesize headingEnabled=_headingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedLimitEnabled; 
@property (assign,nonatomic) BOOL speedLimitEnabled;                       //@synthesize speedLimitEnabled=_speedLimitEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNavVoiceVolume; 
@property (assign,nonatomic) int navVoiceVolume;                           //@synthesize navVoiceVolume=_navVoiceVolume - In the implementation block
@property (assign,nonatomic) BOOL hasPauseSpokenAudioEnabled; 
@property (assign,nonatomic) BOOL pauseSpokenAudioEnabled;                 //@synthesize pauseSpokenAudioEnabled=_pauseSpokenAudioEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasFindMyCarEnabled; 
@property (assign,nonatomic) BOOL findMyCarEnabled;                        //@synthesize findMyCarEnabled=_findMyCarEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficEnabled; 
@property (assign,nonatomic) BOOL trafficEnabled;                          //@synthesize trafficEnabled=_trafficEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasLabelEnabled; 
@property (assign,nonatomic) BOOL labelEnabled;                            //@synthesize labelEnabled=_labelEnabled - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAvoidTolls:(BOOL)arg1 ;
-(void)setHasAvoidTolls:(BOOL)arg1 ;
-(BOOL)hasAvoidTolls;
-(void)setAvoidHighways:(BOOL)arg1 ;
-(void)setHasAvoidHighways:(BOOL)arg1 ;
-(BOOL)hasAvoidHighways;
-(BOOL)avoidTolls;
-(BOOL)avoidHighways;
-(int)preferredTransportMode;
-(void)setPreferredTransportMode:(int)arg1 ;
-(void)setHasPreferredTransportMode:(BOOL)arg1 ;
-(BOOL)hasPreferredTransportMode;
-(id)preferredTransportModeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportMode:(id)arg1 ;
-(void)setHeadingEnabled:(BOOL)arg1 ;
-(void)setHasHeadingEnabled:(BOOL)arg1 ;
-(BOOL)hasHeadingEnabled;
-(void)setSpeedLimitEnabled:(BOOL)arg1 ;
-(void)setHasSpeedLimitEnabled:(BOOL)arg1 ;
-(BOOL)hasSpeedLimitEnabled;
-(int)navVoiceVolume;
-(void)setNavVoiceVolume:(int)arg1 ;
-(void)setHasNavVoiceVolume:(BOOL)arg1 ;
-(BOOL)hasNavVoiceVolume;
-(id)navVoiceVolumeAsString:(int)arg1 ;
-(int)StringAsNavVoiceVolume:(id)arg1 ;
-(void)setPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)setHasPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(BOOL)hasPauseSpokenAudioEnabled;
-(void)setFindMyCarEnabled:(BOOL)arg1 ;
-(void)setHasFindMyCarEnabled:(BOOL)arg1 ;
-(BOOL)hasFindMyCarEnabled;
-(void)setTrafficEnabled:(BOOL)arg1 ;
-(void)setHasTrafficEnabled:(BOOL)arg1 ;
-(BOOL)hasTrafficEnabled;
-(void)setLabelEnabled:(BOOL)arg1 ;
-(void)setHasLabelEnabled:(BOOL)arg1 ;
-(BOOL)hasLabelEnabled;
-(BOOL)headingEnabled;
-(BOOL)speedLimitEnabled;
-(BOOL)pauseSpokenAudioEnabled;
-(BOOL)findMyCarEnabled;
-(BOOL)trafficEnabled;
-(BOOL)labelEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

