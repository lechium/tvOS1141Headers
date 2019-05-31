/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOBatchRevGeocodeRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2* _additionalPlaceTypes;
	NSString* _deviceCountryCode;
	NSString* _displayRegion;
	NSMutableArray* _locations;
	NSMutableArray* _serviceTags;

}

@property (nonatomic,retain) NSMutableArray * locations;                                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalPlaceTypesCount; 
@property (nonatomic,readonly) int* additionalPlaceTypes; 
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                    //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                //@synthesize serviceTags=_serviceTags - In the implementation block
+(Class)serviceTagType;
+(Class)locationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(void)clearServiceTags;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayRegion;
-(NSString *)displayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(unsigned long long)additionalPlaceTypesCount;
-(int*)additionalPlaceTypes;
-(void)clearAdditionalPlaceTypes;
-(void)addAdditionalPlaceType:(int)arg1 ;
-(int)additionalPlaceTypeAtIndex:(unsigned long long)arg1 ;
-(void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalPlaceTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalPlaceTypes:(id)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(NSMutableArray *)locations;
-(void)clearLocations;
-(void)addLocation:(id)arg1 ;
-(unsigned long long)locationsCount;
-(id)locationAtIndex:(unsigned long long)arg1 ;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

