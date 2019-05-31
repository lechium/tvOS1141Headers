/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOPlace, NSString, GEOPlaceSearchRequest, GEOAddress;

@interface GEOPlaceResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _flyoverTourMuid;
	NSMutableArray* _additionalPlaces;
	int _cacheControl;
	NSMutableArray* _disambiguationLabels;
	NSMutableArray* _matchedTokens;
	NSMutableArray* _namedFeatures;
	GEOPlace* _place;
	NSString* _quad;
	GEOPlaceSearchRequest* _revgeoRequestTemplate;
	NSString* _suggestedQuery;
	GEOAddress* _tokenEntity;
	unsigned _travelDistance;
	unsigned _travelTime;
	NSMutableArray* _unmatchedStrings;
	SCD_Struct_GE69 _has;

}

@property (nonatomic,retain) GEOPlace * place;                                           //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalPlaces;                          //@synthesize additionalPlaces=_additionalPlaces - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestedQuery; 
@property (nonatomic,retain) NSString * suggestedQuery;                                  //@synthesize suggestedQuery=_suggestedQuery - In the implementation block
@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) unsigned travelTime;                                        //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) BOOL hasTravelDistance; 
@property (assign,nonatomic) unsigned travelDistance;                                    //@synthesize travelDistance=_travelDistance - In the implementation block
@property (nonatomic,readonly) BOOL hasTokenEntity; 
@property (nonatomic,retain) GEOAddress * tokenEntity;                                   //@synthesize tokenEntity=_tokenEntity - In the implementation block
@property (nonatomic,readonly) BOOL hasQuad; 
@property (nonatomic,retain) NSString * quad;                                            //@synthesize quad=_quad - In the implementation block
@property (nonatomic,retain) NSMutableArray * unmatchedStrings;                          //@synthesize unmatchedStrings=_unmatchedStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedFeatures;                             //@synthesize namedFeatures=_namedFeatures - In the implementation block
@property (nonatomic,readonly) BOOL hasRevgeoRequestTemplate; 
@property (nonatomic,retain) GEOPlaceSearchRequest * revgeoRequestTemplate;              //@synthesize revgeoRequestTemplate=_revgeoRequestTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedTokens;                             //@synthesize matchedTokens=_matchedTokens - In the implementation block
@property (assign,nonatomic) BOOL hasFlyoverTourMuid; 
@property (assign,nonatomic) unsigned long long flyoverTourMuid;                         //@synthesize flyoverTourMuid=_flyoverTourMuid - In the implementation block
@property (assign,nonatomic) BOOL hasCacheControl; 
@property (assign,nonatomic) int cacheControl;                                           //@synthesize cacheControl=_cacheControl - In the implementation block
@property (nonatomic,retain) NSMutableArray * disambiguationLabels;                      //@synthesize disambiguationLabels=_disambiguationLabels - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)disambiguationLabelType;
+(Class)additionalPlaceType;
+(Class)unmatchedStringType;
+(Class)namedFeatureType;
+(Class)matchedTokenType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)geoMapItem;
-(void)clearDisambiguationLabels;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)setTravelTime:(unsigned)arg1 ;
-(void)clearAdditionalPlaces;
-(void)addAdditionalPlace:(id)arg1 ;
-(unsigned long long)additionalPlacesCount;
-(id)additionalPlaceAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestedQuery;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(void)setTravelDistance:(unsigned)arg1 ;
-(void)setHasTravelDistance:(BOOL)arg1 ;
-(BOOL)hasTravelDistance;
-(BOOL)hasTokenEntity;
-(BOOL)hasQuad;
-(void)clearUnmatchedStrings;
-(void)addUnmatchedString:(id)arg1 ;
-(unsigned long long)unmatchedStringsCount;
-(id)unmatchedStringAtIndex:(unsigned long long)arg1 ;
-(void)clearNamedFeatures;
-(void)addNamedFeature:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRevgeoRequestTemplate;
-(void)clearMatchedTokens;
-(void)addMatchedToken:(id)arg1 ;
-(unsigned long long)matchedTokensCount;
-(id)matchedTokenAtIndex:(unsigned long long)arg1 ;
-(void)setFlyoverTourMuid:(unsigned long long)arg1 ;
-(void)setHasFlyoverTourMuid:(BOOL)arg1 ;
-(BOOL)hasFlyoverTourMuid;
-(int)cacheControl;
-(void)setCacheControl:(int)arg1 ;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(BOOL)hasCacheControl;
-(id)cacheControlAsString:(int)arg1 ;
-(int)StringAsCacheControl:(id)arg1 ;
-(GEOPlace *)place;
-(void)setPlace:(GEOPlace *)arg1 ;
-(NSMutableArray *)additionalPlaces;
-(void)setAdditionalPlaces:(NSMutableArray *)arg1 ;
-(NSString *)suggestedQuery;
-(void)setSuggestedQuery:(NSString *)arg1 ;
-(unsigned)travelTime;
-(unsigned)travelDistance;
-(GEOAddress *)tokenEntity;
-(void)setTokenEntity:(GEOAddress *)arg1 ;
-(void)setQuad:(NSString *)arg1 ;
-(NSMutableArray *)unmatchedStrings;
-(void)setUnmatchedStrings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(GEOPlaceSearchRequest *)revgeoRequestTemplate;
-(void)setRevgeoRequestTemplate:(GEOPlaceSearchRequest *)arg1 ;
-(NSMutableArray *)matchedTokens;
-(void)setMatchedTokens:(NSMutableArray *)arg1 ;
-(unsigned long long)flyoverTourMuid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)quad;
@end

