/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapsServerMetadata;

@interface GEOMapsNearbyWidget : PBCodable <NSCopying> {

	GEOMapsServerMetadata* _serverMetadata;
	int _tappedItemIndex;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasServerMetadata; 
@property (nonatomic,retain) GEOMapsServerMetadata * serverMetadata;              //@synthesize serverMetadata=_serverMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasTappedItemIndex; 
@property (assign,nonatomic) int tappedItemIndex;                                 //@synthesize tappedItemIndex=_tappedItemIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasServerMetadata;
-(GEOMapsServerMetadata *)serverMetadata;
-(void)setServerMetadata:(GEOMapsServerMetadata *)arg1 ;
-(int)tappedItemIndex;
-(void)setTappedItemIndex:(int)arg1 ;
-(void)setHasTappedItemIndex:(BOOL)arg1 ;
-(BOOL)hasTappedItemIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

