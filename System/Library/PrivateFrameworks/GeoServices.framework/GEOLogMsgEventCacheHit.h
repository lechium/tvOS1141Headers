/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventCacheHit : PBCodable <NSCopying> {

	unsigned _cacheHitCount;
	unsigned _cacheMissCount;
	int _cacheType;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasCacheType; 
@property (assign,nonatomic) int cacheType;                        //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL hasCacheHitCount; 
@property (assign,nonatomic) unsigned cacheHitCount;               //@synthesize cacheHitCount=_cacheHitCount - In the implementation block
@property (assign,nonatomic) BOOL hasCacheMissCount; 
@property (assign,nonatomic) unsigned cacheMissCount;              //@synthesize cacheMissCount=_cacheMissCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)cacheType;
-(void)setCacheType:(int)arg1 ;
-(void)setHasCacheType:(BOOL)arg1 ;
-(BOOL)hasCacheType;
-(id)cacheTypeAsString:(int)arg1 ;
-(int)StringAsCacheType:(id)arg1 ;
-(void)setCacheHitCount:(unsigned)arg1 ;
-(void)setHasCacheHitCount:(BOOL)arg1 ;
-(BOOL)hasCacheHitCount;
-(void)setCacheMissCount:(unsigned)arg1 ;
-(void)setHasCacheMissCount:(BOOL)arg1 ;
-(BOOL)hasCacheMissCount;
-(unsigned)cacheHitCount;
-(unsigned)cacheMissCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

