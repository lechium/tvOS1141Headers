/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOClientMetrics, GEOPDDatasetABStatus, NSMutableArray, GEOETAResult, GEOETAServiceResponseSummary, GEOPlaceSearchResponse;

@interface GEOETAResponse : PBCodable <NSCopying> {

	unsigned long long _debugServerLatencyMs;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	GEOClientMetrics* _clientMetrics;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSMutableArray* _etaResultReferencePointDestinations;
	GEOETAResult* _etaResultReferencePointOrigin;
	NSMutableArray* _etaResults;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOPlaceSearchResponse* _originPlaceSearchResponse;
	int _status;
	SCD_Struct_GE21 _has;

}

@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * etaResults;                                       //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * originPlaceSearchResponse;                //@synthesize originPlaceSearchResponse=_originPlaceSearchResponse - In the implementation block
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) BOOL hasEtaResultReferencePointOrigin; 
@property (nonatomic,retain) GEOETAResult * etaResultReferencePointOrigin;                      //@synthesize etaResultReferencePointOrigin=_etaResultReferencePointOrigin - In the implementation block
@property (nonatomic,retain) NSMutableArray * etaResultReferencePointDestinations;              //@synthesize etaResultReferencePointDestinations=_etaResultReferencePointDestinations - In the implementation block
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus;                            //@synthesize datasetAbStatus=_datasetAbStatus - In the implementation block
+(Class)etaResultType;
+(Class)etaResultReferencePointDestinationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)problemDetailsCount;
-(GEOProblemDetail*)problemDetails;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)clearProblemDetails;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDatasetAbStatus;
-(void)setStatus:(int)arg1 ;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(BOOL)hasClientMetrics;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)clearEtaResults;
-(void)addEtaResult:(id)arg1 ;
-(unsigned long long)etaResultsCount;
-(id)etaResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOriginPlaceSearchResponse;
-(BOOL)hasEtaResultReferencePointOrigin;
-(void)clearEtaResultReferencePointDestinations;
-(void)addEtaResultReferencePointDestination:(id)arg1 ;
-(unsigned long long)etaResultReferencePointDestinationsCount;
-(id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)etaResults;
-(void)setEtaResults:(NSMutableArray *)arg1 ;
-(GEOPlaceSearchResponse *)originPlaceSearchResponse;
-(void)setOriginPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(GEOETAResult *)etaResultReferencePointOrigin;
-(void)setEtaResultReferencePointOrigin:(GEOETAResult *)arg1 ;
-(NSMutableArray *)etaResultReferencePointDestinations;
-(void)setEtaResultReferencePointDestinations:(NSMutableArray *)arg1 ;
-(unsigned long long)debugServerLatencyMs;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
@end

