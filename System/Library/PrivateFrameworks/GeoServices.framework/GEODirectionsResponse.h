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

@class GEOClientMetrics, NSString, GEOPDDatasetABStatus, GEOTransitDecoderData, NSData, GEORouteDisplayHints, GEOETAServiceResponseSummary, GEOAlert, NSMutableArray, GEOStyleAttributes, GEOPBTransitRoutingIncidentMessage;

@interface GEODirectionsResponse : PBCodable <NSCopying> {

	SCD_Struct_GE2* _supportedTransportTypes;
	GEOTimepoint _timepointUsed;
	unsigned long long _debugLatencyMs;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	GEOClientMetrics* _clientMetrics;
	NSString* _dataVersion;
	GEOPDDatasetABStatus* _datasetAbStatus;
	GEOTransitDecoderData* _decoderData;
	NSData* _directionsResponseID;
	GEORouteDisplayHints* _displayHints;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOAlert* _failureAlert;
	NSMutableArray* _incidentsOffRoutes;
	NSMutableArray* _incidentsOnRoutes;
	int _instructionSignFillColor;
	int _liveRouteSavingsSeconds;
	int _localDistanceUnits;
	NSData* _nonRecommendedRoutesCache;
	NSMutableArray* _placeSearchResponses;
	NSMutableArray* _routes;
	unsigned _selectedRouteIndex;
	NSMutableArray* _serviceGaps;
	NSString* _serviceVersion;
	NSData* _sessionState;
	int _status;
	GEOStyleAttributes* _styleAttributes;
	NSMutableArray* _suggestedRoutes;
	NSMutableArray* _trafficCameras;
	NSString* _transitDataVersion;
	GEOPBTransitRoutingIncidentMessage* _transitIncidentMessage;
	BOOL _isNavigable;
	BOOL _routeDeviatesFromOriginal;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) int status;                                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableArray * routes;                                                  //@synthesize routes=_routes - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeSearchResponses;                                    //@synthesize placeSearchResponses=_placeSearchResponses - In the implementation block
@property (assign,nonatomic) BOOL hasLocalDistanceUnits; 
@property (assign,nonatomic) int localDistanceUnits;                                                   //@synthesize localDistanceUnits=_localDistanceUnits - In the implementation block
@property (assign,nonatomic) BOOL hasRouteDeviatesFromOriginal; 
@property (assign,nonatomic) BOOL routeDeviatesFromOriginal;                                           //@synthesize routeDeviatesFromOriginal=_routeDeviatesFromOriginal - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                            //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (assign,nonatomic) BOOL hasIsNavigable; 
@property (assign,nonatomic) BOOL isNavigable;                                                         //@synthesize isNavigable=_isNavigable - In the implementation block
@property (assign,nonatomic) BOOL hasInstructionSignFillColor; 
@property (assign,nonatomic) int instructionSignFillColor;                                             //@synthesize instructionSignFillColor=_instructionSignFillColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOnRoutes;                                       //@synthesize incidentsOnRoutes=_incidentsOnRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOffRoutes;                                      //@synthesize incidentsOffRoutes=_incidentsOffRoutes - In the implementation block
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) unsigned long long supportedTransportTypesCount; 
@property (nonatomic,readonly) int* supportedTransportTypes; 
@property (nonatomic,retain) NSMutableArray * serviceGaps;                                             //@synthesize serviceGaps=_serviceGaps - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedRouteIndex; 
@property (assign,nonatomic) unsigned selectedRouteIndex;                                              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentMessage; 
@property (nonatomic,retain) GEOPBTransitRoutingIncidentMessage * transitIncidentMessage;              //@synthesize transitIncidentMessage=_transitIncidentMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayHints; 
@property (nonatomic,retain) GEORouteDisplayHints * displayHints;                                      //@synthesize displayHints=_displayHints - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                                     //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                                    //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) BOOL hasFailureAlert; 
@property (nonatomic,retain) GEOAlert * failureAlert;                                                  //@synthesize failureAlert=_failureAlert - In the implementation block
@property (assign,nonatomic) BOOL hasLiveRouteSavingsSeconds; 
@property (assign,nonatomic) int liveRouteSavingsSeconds;                                              //@synthesize liveRouteSavingsSeconds=_liveRouteSavingsSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus;                                   //@synthesize datasetAbStatus=_datasetAbStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * trafficCameras;                                          //@synthesize trafficCameras=_trafficCameras - In the implementation block
@property (nonatomic,readonly) BOOL hasNonRecommendedRoutesCache; 
@property (nonatomic,retain) NSData * nonRecommendedRoutesCache;                                       //@synthesize nonRecommendedRoutesCache=_nonRecommendedRoutesCache - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceVersion; 
@property (nonatomic,retain) NSString * serviceVersion;                                                //@synthesize serviceVersion=_serviceVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasDataVersion; 
@property (nonatomic,retain) NSString * dataVersion;                                                   //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * suggestedRoutes;                                         //@synthesize suggestedRoutes=_suggestedRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasTimepointUsed; 
@property (assign,nonatomic) GEOTimepoint timepointUsed;                                               //@synthesize timepointUsed=_timepointUsed - In the implementation block
@property (nonatomic,readonly) BOOL hasDecoderData; 
@property (nonatomic,retain) GEOTransitDecoderData * decoderData;                                      //@synthesize decoderData=_decoderData - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitDataVersion; 
@property (nonatomic,retain) NSString * transitDataVersion;                                            //@synthesize transitDataVersion=_transitDataVersion - In the implementation block
+(Class)routeType;
+(Class)placeSearchResponseType;
+(Class)incidentsOnRoutesType;
+(Class)incidentsOffRoutesType;
+(Class)serviceGapType;
+(Class)trafficCameraType;
+(Class)suggestedRouteType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOClientMetrics *)clientMetrics;
-(BOOL)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(GEOTransitDecoderData *)decoderData;
-(GEOPBTransitRoutingIncidentMessage *)transitIncidentMessage;
-(GEOAlert *)failureAlert;
-(unsigned long long)problemDetailsCount;
-(GEOProblemDetail*)problemDetails;
-(BOOL)hasStyleAttributes;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasSessionState;
-(BOOL)hasNonRecommendedRoutesCache;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(NSData *)nonRecommendedRoutesCache;
-(void)setNonRecommendedRoutesCache:(NSData *)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)clearRoutes;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)routesCount;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)clearPlaceSearchResponses;
-(void)addPlaceSearchResponse:(id)arg1 ;
-(unsigned long long)placeSearchResponsesCount;
-(id)placeSearchResponseAtIndex:(unsigned long long)arg1 ;
-(int)localDistanceUnits;
-(void)setLocalDistanceUnits:(int)arg1 ;
-(void)setHasLocalDistanceUnits:(BOOL)arg1 ;
-(BOOL)hasLocalDistanceUnits;
-(id)localDistanceUnitsAsString:(int)arg1 ;
-(int)StringAsLocalDistanceUnits:(id)arg1 ;
-(BOOL)routeDeviatesFromOriginal;
-(void)setRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(void)setHasRouteDeviatesFromOriginal:(BOOL)arg1 ;
-(BOOL)hasRouteDeviatesFromOriginal;
-(BOOL)isNavigable;
-(void)setIsNavigable:(BOOL)arg1 ;
-(void)setHasIsNavigable:(BOOL)arg1 ;
-(BOOL)hasIsNavigable;
-(int)instructionSignFillColor;
-(void)setInstructionSignFillColor:(int)arg1 ;
-(void)setHasInstructionSignFillColor:(BOOL)arg1 ;
-(BOOL)hasInstructionSignFillColor;
-(id)instructionSignFillColorAsString:(int)arg1 ;
-(int)StringAsInstructionSignFillColor:(id)arg1 ;
-(void)clearIncidentsOnRoutes;
-(void)addIncidentsOnRoutes:(id)arg1 ;
-(unsigned long long)incidentsOnRoutesCount;
-(id)incidentsOnRoutesAtIndex:(unsigned long long)arg1 ;
-(void)clearIncidentsOffRoutes;
-(void)addIncidentsOffRoutes:(id)arg1 ;
-(unsigned long long)incidentsOffRoutesCount;
-(id)incidentsOffRoutesAtIndex:(unsigned long long)arg1 ;
-(void)clearProblemDetails;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)supportedTransportTypesCount;
-(int*)supportedTransportTypes;
-(void)clearSupportedTransportTypes;
-(void)addSupportedTransportType:(int)arg1 ;
-(int)supportedTransportTypeAtIndex:(unsigned long long)arg1 ;
-(void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedTransportTypesAsString:(int)arg1 ;
-(int)StringAsSupportedTransportTypes:(id)arg1 ;
-(void)clearServiceGaps;
-(void)addServiceGap:(id)arg1 ;
-(unsigned long long)serviceGapsCount;
-(id)serviceGapAtIndex:(unsigned long long)arg1 ;
-(void)setSelectedRouteIndex:(unsigned)arg1 ;
-(void)setHasSelectedRouteIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedRouteIndex;
-(BOOL)hasTransitIncidentMessage;
-(BOOL)hasDisplayHints;
-(BOOL)hasFailureAlert;
-(void)setLiveRouteSavingsSeconds:(int)arg1 ;
-(void)setHasLiveRouteSavingsSeconds:(BOOL)arg1 ;
-(BOOL)hasLiveRouteSavingsSeconds;
-(BOOL)hasDatasetAbStatus;
-(void)clearTrafficCameras;
-(void)addTrafficCamera:(id)arg1 ;
-(unsigned long long)trafficCamerasCount;
-(id)trafficCameraAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasServiceVersion;
-(BOOL)hasDataVersion;
-(void)clearSuggestedRoutes;
-(void)addSuggestedRoute:(id)arg1 ;
-(unsigned long long)suggestedRoutesCount;
-(id)suggestedRouteAtIndex:(unsigned long long)arg1 ;
-(void)setTimepointUsed:(GEOTimepoint)arg1 ;
-(void)setHasTimepointUsed:(BOOL)arg1 ;
-(BOOL)hasTimepointUsed;
-(BOOL)hasDecoderData;
-(BOOL)hasTransitDataVersion;
-(void)setStatus:(int)arg1 ;
-(NSMutableArray *)routes;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)placeSearchResponses;
-(void)setPlaceSearchResponses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidentsOnRoutes;
-(void)setIncidentsOnRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidentsOffRoutes;
-(void)setIncidentsOffRoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceGaps;
-(void)setServiceGaps:(NSMutableArray *)arg1 ;
-(unsigned)selectedRouteIndex;
-(void)setTransitIncidentMessage:(GEOPBTransitRoutingIncidentMessage *)arg1 ;
-(GEORouteDisplayHints *)displayHints;
-(void)setDisplayHints:(GEORouteDisplayHints *)arg1 ;
-(void)setFailureAlert:(GEOAlert *)arg1 ;
-(int)liveRouteSavingsSeconds;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSMutableArray *)trafficCameras;
-(void)setTrafficCameras:(NSMutableArray *)arg1 ;
-(NSString *)serviceVersion;
-(void)setServiceVersion:(NSString *)arg1 ;
-(NSString *)dataVersion;
-(void)setDataVersion:(NSString *)arg1 ;
-(NSMutableArray *)suggestedRoutes;
-(void)setSuggestedRoutes:(NSMutableArray *)arg1 ;
-(GEOTimepoint)timepointUsed;
-(void)setDecoderData:(GEOTransitDecoderData *)arg1 ;
-(NSString *)transitDataVersion;
-(void)setTransitDataVersion:(NSString *)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(unsigned long long)debugLatencyMs;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugLatencyMs;
-(BOOL)hasEtaServiceSummary;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(BOOL)hasClientMetrics;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_destinationMapItem;
-(void)clearLocations;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
@end
