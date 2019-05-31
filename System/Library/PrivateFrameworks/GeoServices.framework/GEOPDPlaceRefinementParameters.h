/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOStructuredAddress, NSData, NSMutableArray, GEOLatLng, NSString;

@interface GEOPDPlaceRefinementParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _muid;
	int _addressGeocodeAccuracyHint;
	GEOStructuredAddress* _addressHint;
	NSData* _addressObjectHint;
	NSMutableArray* _formattedAddressLineHints;
	GEOLatLng* _locationHint;
	NSString* _placeNameHint;
	int _placeTypeHint;
	int _resultProviderId;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                                    //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                                 //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationHint; 
@property (nonatomic,retain) GEOLatLng * locationHint;                                //@synthesize locationHint=_locationHint - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressHint; 
@property (nonatomic,retain) GEOStructuredAddress * addressHint;                      //@synthesize addressHint=_addressHint - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceNameHint; 
@property (nonatomic,retain) NSString * placeNameHint;                                //@synthesize placeNameHint=_placeNameHint - In the implementation block
@property (nonatomic,retain) NSMutableArray * formattedAddressLineHints;              //@synthesize formattedAddressLineHints=_formattedAddressLineHints - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceTypeHint; 
@property (assign,nonatomic) int placeTypeHint;                                       //@synthesize placeTypeHint=_placeTypeHint - In the implementation block
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracyHint; 
@property (assign,nonatomic) int addressGeocodeAccuracyHint;                          //@synthesize addressGeocodeAccuracyHint=_addressGeocodeAccuracyHint - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObjectHint; 
@property (nonatomic,retain) NSData * addressObjectHint;                              //@synthesize addressObjectHint=_addressObjectHint - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)formattedAddressLineHintType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)resultProviderId;
-(NSString *)placeNameHint;
-(BOOL)hasLocationHint;
-(BOOL)hasAddressHint;
-(BOOL)hasPlaceNameHint;
-(void)clearFormattedAddressLineHints;
-(void)addFormattedAddressLineHint:(id)arg1 ;
-(unsigned long long)formattedAddressLineHintsCount;
-(id)formattedAddressLineHintAtIndex:(unsigned long long)arg1 ;
-(int)placeTypeHint;
-(void)setPlaceTypeHint:(int)arg1 ;
-(void)setHasPlaceTypeHint:(BOOL)arg1 ;
-(BOOL)hasPlaceTypeHint;
-(id)placeTypeHintAsString:(int)arg1 ;
-(int)StringAsPlaceTypeHint:(id)arg1 ;
-(int)addressGeocodeAccuracyHint;
-(void)setAddressGeocodeAccuracyHint:(int)arg1 ;
-(void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1 ;
-(BOOL)hasAddressGeocodeAccuracyHint;
-(id)addressGeocodeAccuracyHintAsString:(int)arg1 ;
-(int)StringAsAddressGeocodeAccuracyHint:(id)arg1 ;
-(GEOLatLng *)locationHint;
-(void)setLocationHint:(GEOLatLng *)arg1 ;
-(GEOStructuredAddress *)addressHint;
-(void)setAddressHint:(GEOStructuredAddress *)arg1 ;
-(void)setPlaceNameHint:(NSString *)arg1 ;
-(NSMutableArray *)formattedAddressLineHints;
-(void)setFormattedAddressLineHints:(NSMutableArray *)arg1 ;
-(void)setAddressObjectHint:(NSData *)arg1 ;
-(BOOL)_routeHypothesisPlaceRefinementParametersIsEqual:(id)arg1 ;
-(BOOL)_hasRequiredFields;
-(unsigned long long)_routeHypothesisPlaceRefinementParametersHash;
-(BOOL)hasAddressObjectHint;
-(NSData *)addressObjectHint;
-(id)initWithMuid:(unsigned long long)arg1 locationHint:(SCD_Struct_GE29)arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE29)arg2 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE29)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

