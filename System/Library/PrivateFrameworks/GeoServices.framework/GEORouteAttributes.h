/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAutomobileOptions, GEODestinationInfo, NSString, GEOTransitOptions, GEOWalkingOptions;

@interface GEORouteAttributes : PBCodable <NSCopying> {

	SCD_Struct_GE2* _additionalTransportTypes;
	GEOTimepoint _timepoint;
	SCD_Struct_GE2* _uiContexts;
	GEOAutomobileOptions* _automobileOptions;
	int _basicPointsToBeIncluded;
	GEODestinationInfo* _destinationInfo;
	int _destinationType;
	int _mainTransportType;
	NSString* _phoneticLocaleIdentifier;
	int _trafficType;
	GEOTransitOptions* _transitOptions;
	unsigned _walkingLimitMeters;
	GEOWalkingOptions* _walkingOptions;
	BOOL _enableExperimentalMode;
	BOOL _includeContingencyRoutes;
	BOOL _includeCrossLanguagePhonetics;
	BOOL _includeHistoricTravelTime;
	BOOL _includeLaneGuidance;
	BOOL _includeManeuverIcons;
	BOOL _includePhonetics;
	BOOL _includeTrafficAlongRoute;
	BOOL _includeTrafficIncidents;
	BOOL _includeZilchPoints;
	BOOL _useMetricThreshold;
	SCD_Struct_GE126 _has;

}

@property (assign,nonatomic) BOOL hasMainTransportType; 
@property (assign,nonatomic) int mainTransportType;                                           //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (assign,nonatomic) BOOL hasIncludePhonetics; 
@property (assign,nonatomic) BOOL includePhonetics;                                           //@synthesize includePhonetics=_includePhonetics - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeManeuverIcons; 
@property (assign,nonatomic) BOOL includeManeuverIcons;                                       //@synthesize includeManeuverIcons=_includeManeuverIcons - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeZilchPoints; 
@property (assign,nonatomic) BOOL includeZilchPoints;                                         //@synthesize includeZilchPoints=_includeZilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeContingencyRoutes; 
@property (assign,nonatomic) BOOL includeContingencyRoutes;                                   //@synthesize includeContingencyRoutes=_includeContingencyRoutes - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeLaneGuidance; 
@property (assign,nonatomic) BOOL includeLaneGuidance;                                        //@synthesize includeLaneGuidance=_includeLaneGuidance - In the implementation block
@property (assign,nonatomic) BOOL hasBasicPointsToBeIncluded; 
@property (assign,nonatomic) int basicPointsToBeIncluded;                                     //@synthesize basicPointsToBeIncluded=_basicPointsToBeIncluded - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficType; 
@property (assign,nonatomic) int trafficType;                                                 //@synthesize trafficType=_trafficType - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier;                             //@synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTrafficAlongRoute; 
@property (assign,nonatomic) BOOL includeTrafficAlongRoute;                                   //@synthesize includeTrafficAlongRoute=_includeTrafficAlongRoute - In the implementation block
@property (assign,nonatomic) BOOL hasTimepoint; 
@property (assign,nonatomic) GEOTimepoint timepoint;                                          //@synthesize timepoint=_timepoint - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime;                                  //@synthesize includeHistoricTravelTime=_includeHistoricTravelTime - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeTrafficIncidents; 
@property (assign,nonatomic) BOOL includeTrafficIncidents;                                    //@synthesize includeTrafficIncidents=_includeTrafficIncidents - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingLimitMeters; 
@property (assign,nonatomic) unsigned walkingLimitMeters;                                     //@synthesize walkingLimitMeters=_walkingLimitMeters - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalTransportTypesCount; 
@property (nonatomic,readonly) int* additionalTransportTypes; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                        //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                              //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions;                              //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long uiContextsCount; 
@property (nonatomic,readonly) int* uiContexts; 
@property (assign,nonatomic) BOOL hasUseMetricThreshold; 
@property (assign,nonatomic) BOOL useMetricThreshold;                                         //@synthesize useMetricThreshold=_useMetricThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasEnableExperimentalMode; 
@property (assign,nonatomic) BOOL enableExperimentalMode;                                     //@synthesize enableExperimentalMode=_enableExperimentalMode - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationInfo; 
@property (nonatomic,retain) GEODestinationInfo * destinationInfo;                            //@synthesize destinationInfo=_destinationInfo - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType;                                             //@synthesize destinationType=_destinationType - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeCrossLanguagePhonetics; 
@property (assign,nonatomic) BOOL includeCrossLanguagePhonetics;                              //@synthesize includeCrossLanguagePhonetics=_includeCrossLanguagePhonetics - In the implementation block
+(id)defaultRouteAttributes;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDestinationType:(int)arg1 ;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(void)setIncludePhonetics:(BOOL)arg1 ;
-(void)setHasIncludePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludePhonetics;
-(BOOL)includePhonetics;
-(int)mainTransportType;
-(void)setTimepoint:(GEOTimepoint)arg1 ;
-(void)setHasTimepoint:(BOOL)arg1 ;
-(BOOL)hasTimepoint;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(unsigned)walkingLimitMeters;
-(void)setWalkingLimitMeters:(unsigned)arg1 ;
-(void)setHasWalkingLimitMeters:(BOOL)arg1 ;
-(BOOL)hasWalkingLimitMeters;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(GEOTimepoint)timepoint;
-(BOOL)includeHistoricTravelTime;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(GEOWalkingOptions *)walkingOptions;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(int)destinationType;
-(int)trafficType;
-(void)setTrafficType:(int)arg1 ;
-(void)setMainTransportType:(int)arg1 ;
-(void)setIncludeTrafficIncidents:(BOOL)arg1 ;
-(void)setIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(void)setIncludeManeuverIcons:(BOOL)arg1 ;
-(void)setIncludeZilchPoints:(BOOL)arg1 ;
-(void)setBasicPointsToBeIncluded:(int)arg1 ;
-(void)setIncludeLaneGuidance:(BOOL)arg1 ;
-(void)addUiContext:(int)arg1 ;
-(void)setIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(void)setHasIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludeCrossLanguagePhonetics;
-(BOOL)includeCrossLanguagePhonetics;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(id)destinationTypeAsString:(int)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
-(void)setHasMainTransportType:(BOOL)arg1 ;
-(BOOL)hasMainTransportType;
-(id)mainTransportTypeAsString:(int)arg1 ;
-(int)StringAsMainTransportType:(id)arg1 ;
-(BOOL)includeManeuverIcons;
-(void)setHasIncludeManeuverIcons:(BOOL)arg1 ;
-(BOOL)hasIncludeManeuverIcons;
-(BOOL)includeZilchPoints;
-(void)setHasIncludeZilchPoints:(BOOL)arg1 ;
-(BOOL)hasIncludeZilchPoints;
-(BOOL)includeContingencyRoutes;
-(void)setIncludeContingencyRoutes:(BOOL)arg1 ;
-(void)setHasIncludeContingencyRoutes:(BOOL)arg1 ;
-(BOOL)hasIncludeContingencyRoutes;
-(BOOL)includeLaneGuidance;
-(void)setHasIncludeLaneGuidance:(BOOL)arg1 ;
-(BOOL)hasIncludeLaneGuidance;
-(int)basicPointsToBeIncluded;
-(void)setHasBasicPointsToBeIncluded:(BOOL)arg1 ;
-(BOOL)hasBasicPointsToBeIncluded;
-(id)basicPointsToBeIncludedAsString:(int)arg1 ;
-(int)StringAsBasicPointsToBeIncluded:(id)arg1 ;
-(void)setHasTrafficType:(BOOL)arg1 ;
-(BOOL)hasTrafficType;
-(id)trafficTypeAsString:(int)arg1 ;
-(int)StringAsTrafficType:(id)arg1 ;
-(BOOL)includeTrafficAlongRoute;
-(void)setHasIncludeTrafficAlongRoute:(BOOL)arg1 ;
-(BOOL)hasIncludeTrafficAlongRoute;
-(BOOL)includeTrafficIncidents;
-(void)setHasIncludeTrafficIncidents:(BOOL)arg1 ;
-(BOOL)hasIncludeTrafficIncidents;
-(unsigned long long)additionalTransportTypesCount;
-(int*)additionalTransportTypes;
-(void)clearAdditionalTransportTypes;
-(void)addAdditionalTransportType:(int)arg1 ;
-(int)additionalTransportTypeAtIndex:(unsigned long long)arg1 ;
-(void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)additionalTransportTypesAsString:(int)arg1 ;
-(int)StringAsAdditionalTransportTypes:(id)arg1 ;
-(unsigned long long)uiContextsCount;
-(int*)uiContexts;
-(void)clearUiContexts;
-(int)uiContextAtIndex:(unsigned long long)arg1 ;
-(void)setUiContexts:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)uiContextsAsString:(int)arg1 ;
-(int)StringAsUiContexts:(id)arg1 ;
-(void)setUseMetricThreshold:(BOOL)arg1 ;
-(void)setHasUseMetricThreshold:(BOOL)arg1 ;
-(BOOL)hasUseMetricThreshold;
-(BOOL)enableExperimentalMode;
-(void)setEnableExperimentalMode:(BOOL)arg1 ;
-(void)setHasEnableExperimentalMode:(BOOL)arg1 ;
-(BOOL)hasEnableExperimentalMode;
-(BOOL)hasDestinationInfo;
-(BOOL)useMetricThreshold;
-(GEODestinationInfo *)destinationInfo;
-(void)setDestinationInfo:(GEODestinationInfo *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

