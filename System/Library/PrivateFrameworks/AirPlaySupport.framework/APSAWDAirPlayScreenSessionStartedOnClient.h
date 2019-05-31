/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySupport/AirPlaySupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface APSAWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _audioCompressionType;
	int _awdlCCA;
	int _awdlRSSI;
	unsigned _bonjourMs;
	unsigned _configMs;
	unsigned _connectMs;
	int _infraCCA;
	int _infraRSSI;
	int _infraSNR;
	unsigned _prepareMs;
	NSString* _sessionUUID;
	int _status;
	unsigned _transportType;
	BOOL _didFallbackToInfraToAvoidP2POverDFS;
	SCD_Struct_AP16 _has;

}

@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                                   //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasAudioCompressionType; 
@property (assign,nonatomic) unsigned audioCompressionType;                            //@synthesize audioCompressionType=_audioCompressionType - In the implementation block
@property (assign,nonatomic) BOOL hasPrepareMs; 
@property (assign,nonatomic) unsigned prepareMs;                                       //@synthesize prepareMs=_prepareMs - In the implementation block
@property (assign,nonatomic) BOOL hasBonjourMs; 
@property (assign,nonatomic) unsigned bonjourMs;                                       //@synthesize bonjourMs=_bonjourMs - In the implementation block
@property (assign,nonatomic) BOOL hasConnectMs; 
@property (assign,nonatomic) unsigned connectMs;                                       //@synthesize connectMs=_connectMs - In the implementation block
@property (assign,nonatomic) BOOL hasConfigMs; 
@property (assign,nonatomic) unsigned configMs;                                        //@synthesize configMs=_configMs - In the implementation block
@property (assign,nonatomic) BOOL hasDidFallbackToInfraToAvoidP2POverDFS; 
@property (assign,nonatomic) BOOL didFallbackToInfraToAvoidP2POverDFS;                 //@synthesize didFallbackToInfraToAvoidP2POverDFS=_didFallbackToInfraToAvoidP2POverDFS - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlRSSI; 
@property (assign,nonatomic) int awdlRSSI;                                             //@synthesize awdlRSSI=_awdlRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasInfraRSSI; 
@property (assign,nonatomic) int infraRSSI;                                            //@synthesize infraRSSI=_infraRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasAwdlCCA; 
@property (assign,nonatomic) int awdlCCA;                                              //@synthesize awdlCCA=_awdlCCA - In the implementation block
@property (assign,nonatomic) BOOL hasInfraCCA; 
@property (assign,nonatomic) int infraCCA;                                             //@synthesize infraCCA=_infraCCA - In the implementation block
@property (assign,nonatomic) BOOL hasInfraSNR; 
@property (assign,nonatomic) int infraSNR;                                             //@synthesize infraSNR=_infraSNR - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)transportType;
-(void)setTransportType:(unsigned)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setStatus:(int)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(void)setBonjourMs:(unsigned)arg1 ;
-(void)setHasBonjourMs:(BOOL)arg1 ;
-(BOOL)hasBonjourMs;
-(void)setConnectMs:(unsigned)arg1 ;
-(void)setHasConnectMs:(BOOL)arg1 ;
-(BOOL)hasConnectMs;
-(void)setDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(void)setHasDidFallbackToInfraToAvoidP2POverDFS:(BOOL)arg1 ;
-(BOOL)hasDidFallbackToInfraToAvoidP2POverDFS;
-(void)setAwdlRSSI:(int)arg1 ;
-(void)setHasAwdlRSSI:(BOOL)arg1 ;
-(BOOL)hasAwdlRSSI;
-(void)setInfraRSSI:(int)arg1 ;
-(void)setHasInfraRSSI:(BOOL)arg1 ;
-(BOOL)hasInfraRSSI;
-(void)setAwdlCCA:(int)arg1 ;
-(void)setHasAwdlCCA:(BOOL)arg1 ;
-(BOOL)hasAwdlCCA;
-(void)setInfraCCA:(int)arg1 ;
-(void)setHasInfraCCA:(BOOL)arg1 ;
-(BOOL)hasInfraCCA;
-(void)setInfraSNR:(int)arg1 ;
-(void)setHasInfraSNR:(BOOL)arg1 ;
-(BOOL)hasInfraSNR;
-(unsigned)bonjourMs;
-(unsigned)connectMs;
-(BOOL)didFallbackToInfraToAvoidP2POverDFS;
-(int)awdlRSSI;
-(int)infraRSSI;
-(int)awdlCCA;
-(int)infraCCA;
-(int)infraSNR;
-(void)setAudioCompressionType:(unsigned)arg1 ;
-(void)setHasAudioCompressionType:(BOOL)arg1 ;
-(BOOL)hasAudioCompressionType;
-(unsigned)audioCompressionType;
-(void)setPrepareMs:(unsigned)arg1 ;
-(void)setHasPrepareMs:(BOOL)arg1 ;
-(BOOL)hasPrepareMs;
-(void)setConfigMs:(unsigned)arg1 ;
-(void)setHasConfigMs:(BOOL)arg1 ;
-(BOOL)hasConfigMs;
-(unsigned)prepareMs;
-(unsigned)configMs;
@end

