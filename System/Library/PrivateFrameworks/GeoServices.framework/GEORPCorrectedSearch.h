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

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying> {

	unsigned _correctedSearchResultIndex;
	unsigned _originalSearchResultIndex;
	GEOPDPlaceRequest* _placeRequest;
	GEOPDPlaceResponse* _placeResponse;
	GEOPlaceSearchRequest* _placeSearchRequest;
	GEOPlaceSearchResponse* _placeSearchResponse;
	NSString* _preferredSearchDisplayLocation;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasPlaceSearchRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * placeSearchRequest;                //@synthesize placeSearchRequest=_placeSearchRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * placeSearchResponse;              //@synthesize placeSearchResponse=_placeSearchResponse - In the implementation block
@property (assign,nonatomic) BOOL hasOriginalSearchResultIndex; 
@property (assign,nonatomic) unsigned originalSearchResultIndex;                        //@synthesize originalSearchResultIndex=_originalSearchResultIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCorrectedSearchResultIndex; 
@property (assign,nonatomic) unsigned correctedSearchResultIndex;                       //@synthesize correctedSearchResultIndex=_correctedSearchResultIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasPreferredSearchDisplayLocation; 
@property (nonatomic,retain) NSString * preferredSearchDisplayLocation;                 //@synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * placeRequest;                          //@synthesize placeRequest=_placeRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceResponse; 
@property (nonatomic,retain) GEOPDPlaceResponse * placeResponse;                        //@synthesize placeResponse=_placeResponse - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPlaceSearchRequest;
-(GEOPlaceSearchRequest *)placeSearchRequest;
-(void)setPlaceSearchRequest:(GEOPlaceSearchRequest *)arg1 ;
-(BOOL)hasPlaceSearchResponse;
-(GEOPlaceSearchResponse *)placeSearchResponse;
-(void)setPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(BOOL)hasPlaceRequest;
-(BOOL)hasPlaceResponse;
-(GEOPDPlaceRequest *)placeRequest;
-(void)setPlaceRequest:(GEOPDPlaceRequest *)arg1 ;
-(GEOPDPlaceResponse *)placeResponse;
-(void)setPlaceResponse:(GEOPDPlaceResponse *)arg1 ;
-(void)setOriginalSearchResultIndex:(unsigned)arg1 ;
-(void)setHasOriginalSearchResultIndex:(BOOL)arg1 ;
-(BOOL)hasOriginalSearchResultIndex;
-(void)setCorrectedSearchResultIndex:(unsigned)arg1 ;
-(void)setHasCorrectedSearchResultIndex:(BOOL)arg1 ;
-(BOOL)hasCorrectedSearchResultIndex;
-(BOOL)hasPreferredSearchDisplayLocation;
-(unsigned)originalSearchResultIndex;
-(unsigned)correctedSearchResultIndex;
-(NSString *)preferredSearchDisplayLocation;
-(void)setPreferredSearchDisplayLocation:(NSString *)arg1 ;
-(BOOL)containsReportableData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

