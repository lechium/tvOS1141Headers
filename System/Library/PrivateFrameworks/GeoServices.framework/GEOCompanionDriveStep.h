/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOCompanionManeuverStep.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo, NSMutableArray, NSString;

@interface GEOCompanionDriveStep : PBCodable <GEOCompanionManeuverStep, NSCopying> {

	GEOJunctionElement* _junctionElements;
	unsigned long long _junctionElementsCount;
	unsigned long long _junctionElementsSpace;
	int _drivingSide;
	GEONameInfo* _exitNumber;
	int _junctionType;
	NSMutableArray* _maneuverNames;
	int _maneuverType;
	NSString* _shield;
	int _shieldType;
	NSMutableArray* _signposts;
	BOOL _toFreeway;
	SCD_Struct_GE90 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasManeuverType; 
@property (assign,nonatomic) int maneuverType; 
@property (nonatomic,retain) NSMutableArray * maneuverNames; 
@property (nonatomic,retain) NSMutableArray * signposts; 
@property (assign,nonatomic) BOOL hasJunctionType; 
@property (assign,nonatomic) int junctionType; 
@property (nonatomic,readonly) unsigned long long junctionElementsCount; 
@property (nonatomic,readonly) GEOJunctionElement* junctionElements; 
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) int maneuverType;                                        //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSMutableArray * maneuverNames;                          //@synthesize maneuverNames=_maneuverNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * signposts;                              //@synthesize signposts=_signposts - In the implementation block
@property (assign,nonatomic) BOOL hasToFreeway; 
@property (assign,nonatomic) BOOL toFreeway;                                          //@synthesize toFreeway=_toFreeway - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNumber; 
@property (nonatomic,retain) GEONameInfo * exitNumber;                                //@synthesize exitNumber=_exitNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasShield; 
@property (nonatomic,retain) NSString * shield;                                       //@synthesize shield=_shield - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) int shieldType;                                          //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) int junctionType;                                        //@synthesize junctionType=_junctionType - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                         //@synthesize drivingSide=_drivingSide - In the implementation block
+(Class)maneuverNameType;
+(Class)signpostType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)maneuverType;
-(int)transportType;
-(BOOL)hasShield;
-(NSString *)shield;
-(void)setShield:(NSString *)arg1 ;
-(int)drivingSide;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(BOOL)hasDrivingSide;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(void)setManeuverType:(int)arg1 ;
-(void)setHasManeuverType:(BOOL)arg1 ;
-(BOOL)hasManeuverType;
-(id)maneuverTypeAsString:(int)arg1 ;
-(int)StringAsManeuverType:(id)arg1 ;
-(void)clearManeuverNames;
-(void)addManeuverName:(id)arg1 ;
-(unsigned long long)maneuverNamesCount;
-(id)maneuverNameAtIndex:(unsigned long long)arg1 ;
-(int)junctionType;
-(void)setJunctionType:(int)arg1 ;
-(void)setHasJunctionType:(BOOL)arg1 ;
-(BOOL)hasJunctionType;
-(id)junctionTypeAsString:(int)arg1 ;
-(int)StringAsJunctionType:(id)arg1 ;
-(unsigned long long)junctionElementsCount;
-(GEOJunctionElement*)junctionElements;
-(void)clearJunctionElements;
-(void)addJunctionElement:(GEOJunctionElement)arg1 ;
-(GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1 ;
-(void)setJunctionElements:(GEOJunctionElement*)arg1 count:(unsigned long long)arg2 ;
-(void)clearSignposts;
-(void)addSignpost:(id)arg1 ;
-(unsigned long long)signpostsCount;
-(id)signpostAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExitNumber;
-(BOOL)toFreeway;
-(void)setToFreeway:(BOOL)arg1 ;
-(void)setHasToFreeway:(BOOL)arg1 ;
-(BOOL)hasToFreeway;
-(NSMutableArray *)maneuverNames;
-(void)setManeuverNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)signposts;
-(void)setSignposts:(NSMutableArray *)arg1 ;
-(GEONameInfo *)exitNumber;
-(void)setExitNumber:(GEONameInfo *)arg1 ;
-(BOOL)hasShieldType;
-(int)shieldType;
-(void)setShieldType:(int)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

