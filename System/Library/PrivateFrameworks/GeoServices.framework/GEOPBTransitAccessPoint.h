/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSMutableArray, GEOLatLng;

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	unsigned _accessPointIndex;
	NSString* _entranceNameDisplayString;
	NSMutableArray* _entranceZoomNames;
	NSString* _exitNameDisplayString;
	NSMutableArray* _exitZoomNames;
	GEOLatLng* _location;
	unsigned _stationIndex;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex;                         //@synthesize accessPointIndex=_accessPointIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasStationIndex; 
@property (assign,nonatomic) unsigned stationIndex;                             //@synthesize stationIndex=_stationIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * entranceZoomNames;                //@synthesize entranceZoomNames=_entranceZoomNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * exitZoomNames;                    //@synthesize exitZoomNames=_exitZoomNames - In the implementation block
@property (nonatomic,readonly) BOOL hasEntranceNameDisplayString; 
@property (nonatomic,retain) NSString * entranceNameDisplayString;              //@synthesize entranceNameDisplayString=_entranceNameDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasExitNameDisplayString; 
@property (nonatomic,retain) NSString * exitNameDisplayString;                  //@synthesize exitNameDisplayString=_exitNameDisplayString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)entranceZoomNameType;
+(Class)exitZoomNameType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLocation;
-(unsigned long long)muid;
-(unsigned)accessPointIndex;
-(BOOL)hasAccessPointIndex;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setHasAccessPointIndex:(BOOL)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(void)setStationIndex:(unsigned)arg1 ;
-(void)setHasStationIndex:(BOOL)arg1 ;
-(BOOL)hasStationIndex;
-(void)clearEntranceZoomNames;
-(void)addEntranceZoomName:(id)arg1 ;
-(unsigned long long)entranceZoomNamesCount;
-(id)entranceZoomNameAtIndex:(unsigned long long)arg1 ;
-(void)clearExitZoomNames;
-(void)addExitZoomName:(id)arg1 ;
-(unsigned long long)exitZoomNamesCount;
-(id)exitZoomNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEntranceNameDisplayString;
-(BOOL)hasExitNameDisplayString;
-(unsigned)stationIndex;
-(NSMutableArray *)entranceZoomNames;
-(void)setEntranceZoomNames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exitZoomNames;
-(void)setExitZoomNames:(NSMutableArray *)arg1 ;
-(NSString *)entranceNameDisplayString;
-(void)setEntranceNameDisplayString:(NSString *)arg1 ;
-(NSString *)exitNameDisplayString;
-(void)setExitNameDisplayString:(NSString *)arg1 ;
-(id)bestEntranceNameWithLocale:(out id*)arg1 ;
-(id)bestEntranceName;
-(id)bestExitName;
-(id)bestExitNameWithLocale:(out id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
@end

