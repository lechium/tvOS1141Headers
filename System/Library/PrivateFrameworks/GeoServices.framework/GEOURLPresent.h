/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOURLOptions;

@interface GEOURLPresent : PBCodable <NSCopying> {

	NSMutableArray* _items;
	GEOURLOptions* _options;

}

@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) GEOURLOptions * options;              //@synthesize options=_options - In the implementation block
+(Class)itemType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDirectionsOptions:(id)arg1 ;
-(void)clearItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOptions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)setOptions:(GEOURLOptions *)arg1 ;
-(GEOURLOptions *)options;
-(void)addItem:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithOptions:(id)arg1 ;
-(unsigned long long)itemsCount;
@end

