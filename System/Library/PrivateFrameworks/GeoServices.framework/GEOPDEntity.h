/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDEntity : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _altFaxs;
	NSMutableArray* _altTelephones;
	NSMutableArray* _altUrls;
	int _displayStyle;
	NSString* _fax;
	NSMutableArray* _localizedCategorys;
	NSMutableArray* _names;
	int _placeDisplayType;
	int _searchSection;
	NSMutableArray* _spokenNames;
	NSString* _telephone;
	int _type;
	NSString* _url;
	BOOL _altTelephoneAdsOptOut;
	BOOL _isDisputed;
	BOOL _isPermanentlyClosed;
	BOOL _isStandaloneBrand;
	BOOL _telephoneAdsOptOut;
	SCD_Struct_LO19 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasTelephone; 
@property (nonatomic,retain) NSString * telephone;                             //@synthesize telephone=_telephone - In the implementation block
@property (nonatomic,retain) NSMutableArray * altTelephones;                   //@synthesize altTelephones=_altTelephones - In the implementation block
@property (nonatomic,readonly) BOOL hasFax; 
@property (nonatomic,retain) NSString * fax;                                   //@synthesize fax=_fax - In the implementation block
@property (nonatomic,retain) NSMutableArray * altFaxs;                         //@synthesize altFaxs=_altFaxs - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSMutableArray * altUrls;                         //@synthesize altUrls=_altUrls - In the implementation block
@property (assign,nonatomic) BOOL hasIsPermanentlyClosed; 
@property (assign,nonatomic) BOOL isPermanentlyClosed;                         //@synthesize isPermanentlyClosed=_isPermanentlyClosed - In the implementation block
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed;                                  //@synthesize isDisputed=_isDisputed - In the implementation block
@property (nonatomic,retain) NSMutableArray * names;                           //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * spokenNames;                     //@synthesize spokenNames=_spokenNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedCategorys;              //@synthesize localizedCategorys=_localizedCategorys - In the implementation block
@property (assign,nonatomic) BOOL hasTelephoneAdsOptOut; 
@property (assign,nonatomic) BOOL telephoneAdsOptOut;                          //@synthesize telephoneAdsOptOut=_telephoneAdsOptOut - In the implementation block
@property (assign,nonatomic) BOOL hasAltTelephoneAdsOptOut; 
@property (assign,nonatomic) BOOL altTelephoneAdsOptOut;                       //@synthesize altTelephoneAdsOptOut=_altTelephoneAdsOptOut - In the implementation block
@property (assign,nonatomic) BOOL hasIsStandaloneBrand; 
@property (assign,nonatomic) BOOL isStandaloneBrand;                           //@synthesize isStandaloneBrand=_isStandaloneBrand - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayStyle; 
@property (assign,nonatomic) int displayStyle;                                 //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) BOOL hasSearchSection; 
@property (assign,nonatomic) int searchSection;                                //@synthesize searchSection=_searchSection - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceDisplayType; 
@property (assign,nonatomic) int placeDisplayType;                             //@synthesize placeDisplayType=_placeDisplayType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)entityForPlaceData:(id)arg1 ;
+(Class)nameType;
+(Class)altTelephoneType;
+(Class)altFaxType;
+(Class)altUrlType;
+(Class)spokenNameType;
+(Class)localizedCategoryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasTelephone;
-(NSString *)telephone;
-(void)setTelephone:(NSString *)arg1 ;
-(BOOL)isDisputed;
-(void)setIsDisputed:(BOOL)arg1 ;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(BOOL)hasIsDisputed;
-(BOOL)hasUrl;
-(NSMutableArray *)localizedCategorys;
-(unsigned long long)namesCount;
-(id)bestLocalizedName;
-(unsigned long long)spokenNamesCount;
-(id)spokenNameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)altTelephones;
-(BOOL)telephoneAdsOptOut;
-(NSMutableArray *)spokenNames;
-(BOOL)hasIsStandaloneBrand;
-(BOOL)isStandaloneBrand;
-(int)placeDisplayType;
-(NSMutableArray *)names;
-(BOOL)hasIsPermanentlyClosed;
-(BOOL)isPermanentlyClosed;
-(int)displayStyle;
-(void)setDisplayStyle:(int)arg1 ;
-(void)setHasDisplayStyle:(BOOL)arg1 ;
-(BOOL)hasDisplayStyle;
-(id)displayStyleAsString:(int)arg1 ;
-(int)StringAsDisplayStyle:(id)arg1 ;
-(int)searchSection;
-(void)clearAltTelephones;
-(void)addAltTelephone:(id)arg1 ;
-(unsigned long long)altTelephonesCount;
-(id)altTelephoneAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasFax;
-(void)clearAltFaxs;
-(void)addAltFax:(id)arg1 ;
-(unsigned long long)altFaxsCount;
-(id)altFaxAtIndex:(unsigned long long)arg1 ;
-(void)clearAltUrls;
-(void)addAltUrl:(id)arg1 ;
-(unsigned long long)altUrlsCount;
-(id)altUrlAtIndex:(unsigned long long)arg1 ;
-(void)setIsPermanentlyClosed:(BOOL)arg1 ;
-(void)setHasIsPermanentlyClosed:(BOOL)arg1 ;
-(void)clearNames;
-(void)addName:(id)arg1 ;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(void)clearSpokenNames;
-(void)addSpokenName:(id)arg1 ;
-(void)clearLocalizedCategorys;
-(void)addLocalizedCategory:(id)arg1 ;
-(unsigned long long)localizedCategorysCount;
-(id)localizedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)setTelephoneAdsOptOut:(BOOL)arg1 ;
-(void)setHasTelephoneAdsOptOut:(BOOL)arg1 ;
-(BOOL)hasTelephoneAdsOptOut;
-(void)setAltTelephoneAdsOptOut:(BOOL)arg1 ;
-(void)setHasAltTelephoneAdsOptOut:(BOOL)arg1 ;
-(BOOL)hasAltTelephoneAdsOptOut;
-(void)setIsStandaloneBrand:(BOOL)arg1 ;
-(void)setHasIsStandaloneBrand:(BOOL)arg1 ;
-(void)setSearchSection:(int)arg1 ;
-(void)setHasSearchSection:(BOOL)arg1 ;
-(BOOL)hasSearchSection;
-(id)searchSectionAsString:(int)arg1 ;
-(int)StringAsSearchSection:(id)arg1 ;
-(void)setPlaceDisplayType:(int)arg1 ;
-(void)setHasPlaceDisplayType:(BOOL)arg1 ;
-(BOOL)hasPlaceDisplayType;
-(id)placeDisplayTypeAsString:(int)arg1 ;
-(int)StringAsPlaceDisplayType:(id)arg1 ;
-(void)setAltTelephones:(NSMutableArray *)arg1 ;
-(NSString *)fax;
-(void)setFax:(NSString *)arg1 ;
-(NSMutableArray *)altFaxs;
-(void)setAltFaxs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)altUrls;
-(void)setAltUrls:(NSMutableArray *)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)setSpokenNames:(NSMutableArray *)arg1 ;
-(void)setLocalizedCategorys:(NSMutableArray *)arg1 ;
-(BOOL)altTelephoneAdsOptOut;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)url;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end

