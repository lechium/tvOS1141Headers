/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, GEOStyleAttributes;

@interface GEOPBTransitBrand : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	unsigned _brandIndex;
	NSString* _nameDisplayString;
	GEOStyleAttributes* _styleAttributes;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasBrandIndex; 
@property (assign,nonatomic) unsigned brandIndex;                               //@synthesize brandIndex=_brandIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                           //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;              //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasNameDisplayString; 
@property (nonatomic,retain) NSString * nameDisplayString;                      //@synthesize nameDisplayString=_nameDisplayString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(BOOL)hasStyleAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(BOOL)hasNameDisplayString;
-(NSString *)nameDisplayString;
-(void)setNameDisplayString:(NSString *)arg1 ;
-(void)setBrandIndex:(unsigned)arg1 ;
-(void)setHasBrandIndex:(BOOL)arg1 ;
-(BOOL)hasBrandIndex;
-(unsigned)brandIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

