/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatToken.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, GEOPBTransitArtwork, GEOPrice, NSMutableArray;

@interface GEOFormatArgument : PBCodable <GEOServerFormatToken, NSCopying> {

	SCD_Struct_GE20* _valInt3s;
	GEOPBTransitArtwork* _artwork;
	int _format;
	GEOPrice* _price;
	NSMutableArray* _timestampDatas;
	NSString* _token;
	unsigned _valInt1;
	unsigned _valInt2;
	NSString* _valString;
	SCD_Struct_GE22 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * token; 
@property (nonatomic,readonly) unsigned value1; 
@property (nonatomic,readonly) unsigned value2; 
@property (nonatomic,readonly) NSArray * value3s; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) id<GEOServerFormatTokenPriceValue> priceValue; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artworkValue; 
@property (nonatomic,readonly) NSArray * timeStampValues; 
@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token;                                             //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasValInt1; 
@property (assign,nonatomic) unsigned valInt1;                                             //@synthesize valInt1=_valInt1 - In the implementation block
@property (assign,nonatomic) BOOL hasValInt2; 
@property (assign,nonatomic) unsigned valInt2;                                             //@synthesize valInt2=_valInt2 - In the implementation block
@property (nonatomic,readonly) unsigned long long valInt3sCount; 
@property (nonatomic,readonly) unsigned* valInt3s; 
@property (nonatomic,readonly) BOOL hasValString; 
@property (nonatomic,retain) NSString * valString;                                         //@synthesize valString=_valString - In the implementation block
@property (nonatomic,readonly) BOOL hasPrice; 
@property (nonatomic,retain) GEOPrice * price;                                             //@synthesize price=_price - In the implementation block
@property (nonatomic,readonly) BOOL hasArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * artwork;                                //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSMutableArray * timestampDatas;                              //@synthesize timestampDatas=_timestampDatas - In the implementation block
@property (assign,nonatomic) BOOL hasFormat; 
@property (assign,nonatomic) int format;                                                   //@synthesize format=_format - In the implementation block
+(Class)timestampDataType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPrice;
-(GEOPrice *)price;
-(void)setPrice:(GEOPrice *)arg1 ;
-(BOOL)hasArtwork;
-(GEOPBTransitArtwork *)artwork;
-(void)setArtwork:(GEOPBTransitArtwork *)arg1 ;
-(void)setFormat:(int)arg1 ;
-(void)setValInt1:(unsigned)arg1 ;
-(unsigned)value1;
-(unsigned)value2;
-(NSArray *)value3s;
-(id<GEOServerFormatTokenPriceValue>)priceValue;
-(id<GEOTransitArtworkDataSource>)artworkValue;
-(NSArray *)timeStampValues;
-(unsigned)valInt1;
-(unsigned)valInt3AtIndex:(unsigned long long)arg1 ;
-(NSString *)valString;
-(NSMutableArray *)timestampDatas;
-(unsigned)valInt2;
-(unsigned long long)valInt3sCount;
-(BOOL)hasToken;
-(void)setHasValInt1:(BOOL)arg1 ;
-(BOOL)hasValInt1;
-(void)setValInt2:(unsigned)arg1 ;
-(void)setHasValInt2:(BOOL)arg1 ;
-(BOOL)hasValInt2;
-(unsigned*)valInt3s;
-(void)clearValInt3s;
-(void)addValInt3:(unsigned)arg1 ;
-(void)setValInt3s:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasValString;
-(void)clearTimestampDatas;
-(void)addTimestampData:(id)arg1 ;
-(unsigned long long)timestampDatasCount;
-(id)timestampDataAtIndex:(unsigned long long)arg1 ;
-(void)setHasFormat:(BOOL)arg1 ;
-(BOOL)hasFormat;
-(id)formatAsString:(int)arg1 ;
-(int)StringAsFormat:(id)arg1 ;
-(void)setValString:(NSString *)arg1 ;
-(void)setTimestampDatas:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)format;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

