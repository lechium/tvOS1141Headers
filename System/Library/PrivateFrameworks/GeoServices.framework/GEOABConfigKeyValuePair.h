/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOABConfigValue;

@interface GEOABConfigKeyValuePair : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _abConfigKey;
	GEOABConfigValue* _abConfigValue;
	int _abConfigValueType;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasAbConfigKey; 
@property (nonatomic,retain) NSString * abConfigKey;                         //@synthesize abConfigKey=_abConfigKey - In the implementation block
@property (assign,nonatomic) BOOL hasAbConfigValueType; 
@property (assign,nonatomic) int abConfigValueType;                          //@synthesize abConfigValueType=_abConfigValueType - In the implementation block
@property (nonatomic,readonly) BOOL hasAbConfigValue; 
@property (nonatomic,retain) GEOABConfigValue * abConfigValue;               //@synthesize abConfigValue=_abConfigValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)abConfigKey;
-(int)abConfigValueType;
-(GEOABConfigValue *)abConfigValue;
-(BOOL)hasAbConfigValue;
-(BOOL)hasAbConfigKey;
-(void)setAbConfigValueType:(int)arg1 ;
-(void)setHasAbConfigValueType:(BOOL)arg1 ;
-(BOOL)hasAbConfigValueType;
-(id)abConfigValueTypeAsString:(int)arg1 ;
-(int)StringAsAbConfigValueType:(id)arg1 ;
-(void)setAbConfigKey:(NSString *)arg1 ;
-(void)setAbConfigValue:(GEOABConfigValue *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
