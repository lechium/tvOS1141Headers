/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileSetInfo : PBCodable <NSCopying> {

	unsigned _count;
	int _style;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style;                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;              //@synthesize count=_count - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
@end
