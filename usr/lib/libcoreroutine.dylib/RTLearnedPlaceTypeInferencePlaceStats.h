/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTLearnedPlace, NSArray, RTLearnedPlaceTypeInferenceStats;

@interface RTLearnedPlaceTypeInferencePlaceStats : NSObject {

	RTLearnedPlace* _place;
	NSArray* _visits;
	RTLearnedPlaceTypeInferenceStats* _stats;

}

@property (nonatomic,readonly) RTLearnedPlace * place;                                //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) NSArray * visits;                                      //@synthesize visits=_visits - In the implementation block
@property (nonatomic,readonly) RTLearnedPlaceTypeInferenceStats * stats;              //@synthesize stats=_stats - In the implementation block
+(double)extractTopMedianDwellTimeFromVisits:(id)arg1 ;
+(id)extractWeeklyStatsFromDailyStats:(id)arg1 ;
+(id)extractDailyStatsFromVisits:(id)arg1 ;
+(id)visitsWithDwellTimeBetweenDateRange:(id)arg1 start:(id)arg2 end:(id)arg3 ;
-(NSArray *)visits;
-(RTLearnedPlaceTypeInferenceStats *)stats;
-(RTLearnedPlace *)place;
-(id)description;
-(void)log;
-(id)initWithPlace:(id)arg1 visits:(id)arg2 ;
@end

