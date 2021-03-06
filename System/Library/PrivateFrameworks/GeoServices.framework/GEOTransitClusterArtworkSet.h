/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitClusterArtworkSet : PBCodable <NSCopying> {

	SCD_Struct_GE20* _artworkIndexs;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)artworkIndexsCount;
-(unsigned*)artworkIndexs;
-(void)clearArtworkIndexs;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

