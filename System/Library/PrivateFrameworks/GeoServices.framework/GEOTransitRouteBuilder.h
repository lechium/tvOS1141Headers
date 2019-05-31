/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, NSMutableData, GEOMapRegion, GEOTransitSuggestedRoute, GEOTransitDecoderData;

@interface GEOTransitRouteBuilder : NSObject {

	NSMutableArray* _stepInfos;
	BOOL _usesZilch;
	unsigned long long _tripCount;
	NSMutableArray* _steps;
	NSMutableArray* _legs;
	NSMutableData* _pointsData;
	NSMutableArray* _pointSections;
	GEOMapRegion* _boundingMapRegion;
	GEOTransitSuggestedRoute* _suggestedRoute;
	GEOTransitDecoderData* _decoderData;

}
-(void)buildRoute:(id)arg1 ;
-(id)initWithSuggestedRoute:(id)arg1 data:(id)arg2 ;
-(void)_buildPointSectionsForRoute:(id)arg1 ;
-(void)_buildRouteFromSteps:(id)arg1 ;
-(void)_buildRouteFromSections:(id)arg1 ;
-(BOOL)_index:(unsigned long long)arg1 matchesArray:(unsigned*)arg2 ofLength:(unsigned long long)arg3 ;
-(void)_buildExpandedWalkingStepInfos:(id)arg1 ;
-(void)_buildArrivalStepInfo:(id)arg1 ;
-(void)_buildTransitStepInfo:(id)arg1 ;
-(NSRange)_appendPointData:(id)arg1 withContinuity:(BOOL)arg2 ;
-(id)_stepForStepInfo:(unsigned long long)arg1 route:(id)arg2 ;
-(id)_legForSteps:(NSRange)arg1 route:(id)arg2 ;
-(unsigned long long)_stepCountForLegWithStartingStepIndex:(unsigned long long)arg1 ;
-(NSRange)_validPointRangeForStepInfoIndex:(unsigned long long)arg1 ;
-(id)_walkingStepForStepInfoIndex:(unsigned long long)arg1 route:(id)arg2 validPointRange:(NSRange)arg3 ;
-(double)_buildPointSectionsForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5 ;
-(id)_sectionForRoute:(id)arg1 pointRange:(NSRange)arg2 stepIndex:(unsigned long long)arg3 bounds:(SCD_Struct_GE43)arg4 currentTransitLineColor:(id)arg5 startDistance:(double)arg6 ;
-(BOOL)_shouldBreakPointSectionAtStep:(id)arg1 previousStep:(id)arg2 ;
-(void)dealloc;
-(void)_reset;
@end
