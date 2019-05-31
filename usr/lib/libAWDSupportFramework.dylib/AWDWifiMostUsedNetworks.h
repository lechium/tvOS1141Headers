/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface AWDWifiMostUsedNetworks : PBCodable <NSCopying> {

	double _timeUsed;
	unsigned _apOUI;
	NSData* _apOui;
	NSString* _bundleID;
	int _networkScore;
	unsigned _networkScoreBitMap;
	unsigned _securityType;
	unsigned _switchToCount;
	unsigned _switchedAwayFromCount;
	unsigned _timeUsedMinutes;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasApOUI; 
@property (assign,nonatomic) unsigned apOUI;                              //@synthesize apOUI=_apOUI - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                       //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasTimeUsed; 
@property (assign,nonatomic) double timeUsed;                             //@synthesize timeUsed=_timeUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasApOui; 
@property (nonatomic,retain) NSData * apOui;                              //@synthesize apOui=_apOui - In the implementation block
@property (assign,nonatomic) BOOL hasTimeUsedMinutes; 
@property (assign,nonatomic) unsigned timeUsedMinutes;                    //@synthesize timeUsedMinutes=_timeUsedMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkScoreBitMap; 
@property (assign,nonatomic) unsigned networkScoreBitMap;                 //@synthesize networkScoreBitMap=_networkScoreBitMap - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchedAwayFromCount; 
@property (assign,nonatomic) unsigned switchedAwayFromCount;              //@synthesize switchedAwayFromCount=_switchedAwayFromCount - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchToCount; 
@property (assign,nonatomic) unsigned switchToCount;                      //@synthesize switchToCount=_switchToCount - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkScore; 
@property (assign,nonatomic) int networkScore;                            //@synthesize networkScore=_networkScore - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasBundleID;
-(void)setSwitchedAwayFromCount:(unsigned)arg1 ;
-(void)setHasSwitchedAwayFromCount:(BOOL)arg1 ;
-(BOOL)hasSwitchedAwayFromCount;
-(void)setSwitchToCount:(unsigned)arg1 ;
-(void)setHasSwitchToCount:(BOOL)arg1 ;
-(BOOL)hasSwitchToCount;
-(void)setNetworkScore:(int)arg1 ;
-(void)setHasNetworkScore:(BOOL)arg1 ;
-(BOOL)hasNetworkScore;
-(unsigned)switchedAwayFromCount;
-(unsigned)switchToCount;
-(int)networkScore;
-(void)setApOUI:(unsigned)arg1 ;
-(BOOL)hasApOUI;
-(unsigned)apOUI;
-(void)setApOui:(NSData *)arg1 ;
-(void)setHasApOUI:(BOOL)arg1 ;
-(void)setTimeUsed:(double)arg1 ;
-(void)setHasTimeUsed:(BOOL)arg1 ;
-(BOOL)hasTimeUsed;
-(BOOL)hasApOui;
-(void)setTimeUsedMinutes:(unsigned)arg1 ;
-(void)setHasTimeUsedMinutes:(BOOL)arg1 ;
-(BOOL)hasTimeUsedMinutes;
-(void)setNetworkScoreBitMap:(unsigned)arg1 ;
-(void)setHasNetworkScoreBitMap:(BOOL)arg1 ;
-(BOOL)hasNetworkScoreBitMap;
-(double)timeUsed;
-(NSData *)apOui;
-(unsigned)timeUsedMinutes;
-(unsigned)networkScoreBitMap;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(BOOL)hasSecurityType;
-(unsigned)securityType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
@end

