/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDABClientDatasetMetadata, GEOAdditionalEnabledMarkets, GEOAutomobileOptions, GEOClientCapabilities, GEOCommonOptions, NSMutableArray, GEOLocation, GEOWaypoint, GEOWaypointTyped, NSData, NSString, GEOTFTrafficSnapshot, GEOTransitOptions, GEOWalkingOptions;

@interface GEOETARequest : PBRequest <NSCopying> {

	GEOSessionID _sessionID;
	GEOTimepoint _timepoint;
	double _sessionRelativeTimestamp;
	GEOPDABClientDatasetMetadata* _abClientMetadata;
	GEOAdditionalEnabledMarkets* _additionalEnabledMarkets;
	GEOAutomobileOptions* _automobileOptions;
	GEOClientCapabilities* _clientCapabilities;
	GEOCommonOptions* _commonOptions;
	NSMutableArray* _destinationWaypointTypeds;
	NSMutableArray* _destinations;
	NSMutableArray* _deviceHistoricalLocations;
	GEOLocation* _lastKnownRoadLocation;
	GEOWaypoint* _origin;
	GEOWaypointTyped* _originWaypointTyped;
	NSData* _originalRouteID;
	NSData* _originalRouteZilchPoints;
	NSString* _phoneticLocaleIdentifier;
	NSString* _requestingAppId;
	NSMutableArray* _serviceTags;
	NSData* _sessionState;
	GEOTFTrafficSnapshot* _trafficSnapshot;
	GEOTransitOptions* _transitOptions;
	int _transportType;
	unsigned _walkingLimitMeters;
	GEOWalkingOptions* _walkingOptions;
	BOOL _allowPartialResults;
	BOOL _includeDistance;
	BOOL _includeHistoricTravelTime;
	BOOL _includeRouteTrafficDetail;
	BOOL _includeShortTrafficSummary;
	BOOL _isFromAPI;
	BOOL _needServerLatency;
	BOOL _useLiveTrafficAsFallback;
	SCD_Struct_LO96 _has;

}

@property (nonatomic,readonly) BOOL hasTrafficSnapshot; 
@property (nonatomic,retain) GEOTFTrafficSnapshot * trafficSnapshot; 
@property (assign,nonatomic) BOOL hasUseLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL useLiveTrafficAsFallback; 
@property (assign,nonatomic) BOOL hasNeedServerLatency; 
@property (assign,nonatomic) BOOL needServerLatency; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                                   //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) GEOTimepoint timepoint;                                              //@synthesize timepoint=_timepoint - In the implementation block
@property (nonatomic,readonly) BOOL hasOrigin; 
@property (nonatomic,retain) GEOWaypoint * origin;                                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinations;                                       //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                                      //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasAllowPartialResults; 
@property (assign,nonatomic) BOOL allowPartialResults;                                            //@synthesize allowPartialResults=_allowPartialResults - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeDistance; 
@property (assign,nonatomic) BOOL includeDistance;                                                //@synthesize includeDistance=_includeDistance - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                                              //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                                     //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters;                                         //@synthesize walkingLimitMeters=_walkingLimitMeters - In the implementation block
@property (nonatomic,readonly) BOOL hasAdditionalEnabledMarkets; 
@property (nonatomic,retain) GEOAdditionalEnabledMarkets * additionalEnabledMarkets;              //@synthesize additionalEnabledMarkets=_additionalEnabledMarkets - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginWaypointTyped; 
@property (nonatomic,retain) GEOWaypointTyped * originWaypointTyped;                              //@synthesize originWaypointTyped=_originWaypointTyped - In the implementation block
@property (nonatomic,retain) NSMutableArray * destinationWaypointTypeds;                          //@synthesize destinationWaypointTypeds=_destinationWaypointTypeds - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                            //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                  //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                                  //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAPI; 
@property (assign,nonatomic) BOOL isFromAPI;                                                      //@synthesize isFromAPI=_isFromAPI - In the implementation block
@property (nonatomic,readonly) BOOL hasCommonOptions; 
@property (nonatomic,retain) GEOCommonOptions * commonOptions;                                    //@synthesize commonOptions=_commonOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteID; 
@property (nonatomic,retain) NSData * originalRouteID;                                            //@synthesize originalRouteID=_originalRouteID - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginalRouteZilchPoints; 
@property (nonatomic,retain) NSData * originalRouteZilchPoints;                                   //@synthesize originalRouteZilchPoints=_originalRouteZilchPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * deviceHistoricalLocations;                          //@synthesize deviceHistoricalLocations=_deviceHistoricalLocations - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities;                          //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,readonly) BOOL hasLastKnownRoadLocation; 
@property (nonatomic,retain) GEOLocation * lastKnownRoadLocation;                                 //@synthesize lastKnownRoadLocation=_lastKnownRoadLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * abClientMetadata;                     //@synthesize abClientMetadata=_abClientMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail;                                      //@synthesize includeRouteTrafficDetail=_includeRouteTrafficDetail - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeShortTrafficSummary; 
@property (assign,nonatomic) BOOL includeShortTrafficSummary;                                     //@synthesize includeShortTrafficSummary=_includeShortTrafficSummary - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                                 //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestingAppId; 
@property (nonatomic,retain) NSString * requestingAppId;                                          //@synthesize requestingAppId=_requestingAppId - In the implementation block
@property (nonatomic,retain) NSMutableArray * serviceTags;                                        //@synthesize serviceTags=_serviceTags - In the implementation block
+(Class)deviceHistoricalLocationType;
+(Class)serviceTagType;
+(Class)destinationType;
+(Class)destinationWaypointTypedType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(NSMutableArray *)deviceHistoricalLocations;
-(unsigned long long)deviceHistoricalLocationsCount;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasOriginalRouteID;
-(BOOL)hasOriginalRouteZilchPoints;
-(BOOL)hasClientCapabilities;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(void)setHasSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasSessionRelativeTimestamp;
-(BOOL)hasAdditionalEnabledMarkets;
-(BOOL)hasSessionState;
-(void)setIsFromAPI:(BOOL)arg1 ;
-(void)setHasIsFromAPI:(BOOL)arg1 ;
-(BOOL)hasIsFromAPI;
-(BOOL)hasCommonOptions;
-(BOOL)hasLastKnownRoadLocation;
-(BOOL)hasAbClientMetadata;
-(void)clearDeviceHistoricalLocations;
-(void)addDeviceHistoricalLocation:(id)arg1 ;
-(id)deviceHistoricalLocationAtIndex:(unsigned long long)arg1 ;
-(void)clearServiceTags;
-(void)addServiceTag:(id)arg1 ;
-(unsigned long long)serviceTagsCount;
-(id)serviceTagAtIndex:(unsigned long long)arg1 ;
-(NSData *)originalRouteID;
-(void)setOriginalRouteID:(NSData *)arg1 ;
-(NSData *)originalRouteZilchPoints;
-(void)setOriginalRouteZilchPoints:(NSData *)arg1 ;
-(GEOClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(double)sessionRelativeTimestamp;
-(GEOAdditionalEnabledMarkets *)additionalEnabledMarkets;
-(void)setAdditionalEnabledMarkets:(GEOAdditionalEnabledMarkets *)arg1 ;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(BOOL)isFromAPI;
-(GEOCommonOptions *)commonOptions;
-(void)setCommonOptions:(GEOCommonOptions *)arg1 ;
-(GEOLocation *)lastKnownRoadLocation;
-(void)setLastKnownRoadLocation:(GEOLocation *)arg1 ;
-(GEOPDABClientDatasetMetadata *)abClientMetadata;
-(void)setAbClientMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(void)setDeviceHistoricalLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)serviceTags;
-(void)setServiceTags:(NSMutableArray *)arg1 ;
-(void)setTrafficSnapshot:(GEOTFTrafficSnapshot *)arg1 ;
-(BOOL)hasTrafficSnapshot;
-(GEOTFTrafficSnapshot *)trafficSnapshot;
-(BOOL)useLiveTrafficAsFallback;
-(void)setUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(void)setHasUseLiveTrafficAsFallback:(BOOL)arg1 ;
-(BOOL)hasUseLiveTrafficAsFallback;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(void)setRequestingAppId:(NSString *)arg1 ;
-(BOOL)hasOrigin;
-(void)setTimepoint:(GEOTimepoint)arg1 ;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(BOOL)hasTimepoint;
-(void)clearDestinations;
-(void)addDestination:(id)arg1 ;
-(unsigned long long)destinationsCount;
-(id)destinationAtIndex:(unsigned long long)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setAllowPartialResults:(BOOL)arg1 ;
-(void)setHasAllowPartialResults:(BOOL)arg1 ;
-(BOOL)hasAllowPartialResults;
-(void)setIncludeDistance:(BOOL)arg1 ;
-(void)setHasIncludeDistance:(BOOL)arg1 ;
-(BOOL)hasIncludeDistance;
-(unsigned)walkingLimitMeters;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(BOOL)hasWalkingLimitMeters;
-(BOOL)hasOriginWaypointTyped;
-(void)clearDestinationWaypointTypeds;
-(void)addDestinationWaypointTyped:(id)arg1 ;
-(unsigned long long)destinationWaypointTypedsCount;
-(id)destinationWaypointTypedAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)includeRouteTrafficDetail;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(BOOL)hasIncludeRouteTrafficDetail;
-(void)setIncludeShortTrafficSummary:(BOOL)arg1 ;
-(void)setHasIncludeShortTrafficSummary:(BOOL)arg1 ;
-(BOOL)hasIncludeShortTrafficSummary;
-(BOOL)hasRequestingAppId;
-(GEOTimepoint)timepoint;
-(void)setDestinations:(NSMutableArray *)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(BOOL)allowPartialResults;
-(BOOL)includeDistance;
-(GEOWaypointTyped *)originWaypointTyped;
-(void)setOriginWaypointTyped:(GEOWaypointTyped *)arg1 ;
-(NSMutableArray *)destinationWaypointTypeds;
-(void)setDestinationWaypointTypeds:(NSMutableArray *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(BOOL)includeShortTrafficSummary;
-(NSString *)requestingAppId;
-(BOOL)needServerLatency;
-(void)setNeedServerLatency:(BOOL)arg1 ;
-(void)setHasNeedServerLatency:(BOOL)arg1 ;
-(BOOL)hasNeedServerLatency;
-(id)initWithQuickETARequest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOWaypoint *)origin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrigin:(GEOWaypoint *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)destinations;
@end

