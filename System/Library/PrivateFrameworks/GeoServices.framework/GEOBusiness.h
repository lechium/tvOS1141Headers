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

@class PBUnknownFields, NSMutableArray, GEOLatLng, NSString;

@interface GEOBusiness : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _uID;
	NSMutableArray* _attributeKeyValues;
	NSMutableArray* _attributions;
	NSMutableArray* _categorys;
	GEOLatLng* _center;
	NSMutableArray* _localizedCategories;
	NSString* _mapsURL;
	NSString* _name;
	NSMutableArray* _openHours;
	NSString* _phoneticName;
	NSMutableArray* _photos;
	NSMutableArray* _placeDataAmendments;
	NSMutableArray* _ratings;
	NSMutableArray* _sources;
	NSMutableArray* _starRatings;
	NSString* _telephone;
	NSString* _uRL;
	BOOL _isClosed;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) unsigned long long uID;                            //@synthesize uID=_uID - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                           //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                              //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                                    //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasIsClosed; 
@property (assign,nonatomic) BOOL isClosed;                                     //@synthesize isClosed=_isClosed - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsURL; 
@property (nonatomic,retain) NSString * mapsURL;                                //@synthesize mapsURL=_mapsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * ratings;                          //@synthesize ratings=_ratings - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorys;                        //@synthesize categorys=_categorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * photos;                           //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeKeyValues;               //@synthesize attributeKeyValues=_attributeKeyValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * openHours;                        //@synthesize openHours=_openHours - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategories;              //@synthesize localizedCategories=_localizedCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                     //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * sources;                          //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableArray * starRatings;                      //@synthesize starRatings=_starRatings - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeDataAmendments;              //@synthesize placeDataAmendments=_placeDataAmendments - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)ratingType;
+(Class)photoType;
+(Class)attributeKeyValueType;
+(Class)openHoursType;
+(Class)localizedCategoriesType;
+(Class)attributionType;
+(Class)starRatingType;
+(Class)placeDataAmendmentType;
+(Class)categoryType;
+(Class)sourceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCenter;
-(BOOL)hasName;
-(void)setUID:(unsigned long long)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(BOOL)hasUID;
-(BOOL)hasPhoneticName;
-(BOOL)hasTelephone;
-(BOOL)hasURL;
-(void)setIsClosed:(BOOL)arg1 ;
-(void)setHasIsClosed:(BOOL)arg1 ;
-(BOOL)hasIsClosed;
-(BOOL)hasMapsURL;
-(void)clearRatings;
-(void)addRating:(id)arg1 ;
-(unsigned long long)ratingsCount;
-(id)ratingAtIndex:(unsigned long long)arg1 ;
-(void)clearCategorys;
-(void)addCategory:(id)arg1 ;
-(unsigned long long)categorysCount;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
-(void)clearPhotos;
-(void)addPhoto:(id)arg1 ;
-(unsigned long long)photosCount;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributeKeyValues;
-(void)addAttributeKeyValue:(id)arg1 ;
-(unsigned long long)attributeKeyValuesCount;
-(id)attributeKeyValueAtIndex:(unsigned long long)arg1 ;
-(void)clearOpenHours;
-(void)addOpenHours:(id)arg1 ;
-(unsigned long long)openHoursCount;
-(id)openHoursAtIndex:(unsigned long long)arg1 ;
-(void)clearLocalizedCategories;
-(void)addLocalizedCategories:(id)arg1 ;
-(unsigned long long)localizedCategoriesCount;
-(id)localizedCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearAttributions;
-(void)addAttribution:(id)arg1 ;
-(unsigned long long)attributionsCount;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)clearSources;
-(void)addSource:(id)arg1 ;
-(unsigned long long)sourcesCount;
-(id)sourceAtIndex:(unsigned long long)arg1 ;
-(void)clearStarRatings;
-(void)addStarRating:(id)arg1 ;
-(unsigned long long)starRatingsCount;
-(id)starRatingAtIndex:(unsigned long long)arg1 ;
-(void)clearPlaceDataAmendments;
-(void)addPlaceDataAmendment:(id)arg1 ;
-(unsigned long long)placeDataAmendmentsCount;
-(id)placeDataAmendmentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)uID;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(NSString *)telephone;
-(void)setTelephone:(NSString *)arg1 ;
-(NSString *)uRL;
-(BOOL)isClosed;
-(NSString *)mapsURL;
-(void)setMapsURL:(NSString *)arg1 ;
-(NSMutableArray *)ratings;
-(void)setRatings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)categorys;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)photos;
-(void)setPhotos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributeKeyValues;
-(void)setAttributeKeyValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)openHours;
-(void)setOpenHours:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedCategories;
-(void)setLocalizedCategories:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attributions;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sources;
-(void)setSources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)starRatings;
-(void)setStarRatings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)placeDataAmendments;
-(void)setPlaceDataAmendments:(NSMutableArray *)arg1 ;
-(id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6 ;
-(id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned)arg5 normalizedUserRatingScore:(float)arg6 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end
