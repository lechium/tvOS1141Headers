/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSString, NSMutableArray, GEOMapRegion;

@interface GEORPCorrectedLabel : PBCodable <NSCopying> {

	unsigned long long _uid;
	GEOLatLng* _coordinate;
	NSString* _correctedValue;
	NSMutableArray* _featureHandles;
	GEOMapRegion* _featureRegion;
	NSString* _originalValue;
	BOOL _localizedLabels;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue;                     //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;                    //@synthesize correctedValue=_correctedValue - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureRegion; 
@property (nonatomic,retain) GEOMapRegion * featureRegion;                 //@synthesize featureRegion=_featureRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * featureHandles;              //@synthesize featureHandles=_featureHandles - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) BOOL hasUid; 
@property (assign,nonatomic) unsigned long long uid;                       //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) BOOL hasLocalizedLabels; 
@property (assign,nonatomic) BOOL localizedLabels;                         //@synthesize localizedLabels=_localizedLabels - In the implementation block
+(Class)featureHandleType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(BOOL)hasFeatureRegion;
-(void)clearFeatureHandles;
-(void)addFeatureHandle:(id)arg1 ;
-(unsigned long long)featureHandlesCount;
-(id)featureHandleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCoordinate;
-(void)setUid:(unsigned long long)arg1 ;
-(void)setHasUid:(BOOL)arg1 ;
-(BOOL)hasUid;
-(void)setLocalizedLabels:(BOOL)arg1 ;
-(void)setHasLocalizedLabels:(BOOL)arg1 ;
-(BOOL)hasLocalizedLabels;
-(NSString *)originalValue;
-(void)setOriginalValue:(NSString *)arg1 ;
-(NSString *)correctedValue;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(GEOMapRegion *)featureRegion;
-(void)setFeatureRegion:(GEOMapRegion *)arg1 ;
-(NSMutableArray *)featureHandles;
-(void)setFeatureHandles:(NSMutableArray *)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)localizedLabels;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)uid;
@end

