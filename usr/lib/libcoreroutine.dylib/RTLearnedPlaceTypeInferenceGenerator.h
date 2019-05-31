/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, RTLearnedVisit;

@interface RTLearnedPlaceTypeInferenceGenerator : NSObject {

	NSMutableArray* _placeStats;
	RTLearnedVisit* _firstVisit;
	RTLearnedVisit* _lastVisit;

}

@property (nonatomic,retain) NSMutableArray * placeStats;              //@synthesize placeStats=_placeStats - In the implementation block
@property (nonatomic,retain) RTLearnedVisit * firstVisit;              //@synthesize firstVisit=_firstVisit - In the implementation block
@property (nonatomic,retain) RTLearnedVisit * lastVisit;               //@synthesize lastVisit=_lastVisit - In the implementation block
-(id)init;
-(void)log;
-(void)submitVisits:(id)arg1 place:(id)arg2 ;
-(id)inferPlaceTypesFromDailyPatterns;
-(id)inferPlaceTypesFromTopMedianDwellTime;
-(id)inferPlaceTypes;
-(NSMutableArray *)placeStats;
-(void)setPlaceStats:(NSMutableArray *)arg1 ;
-(RTLearnedVisit *)firstVisit;
-(void)setFirstVisit:(RTLearnedVisit *)arg1 ;
-(RTLearnedVisit *)lastVisit;
-(void)setLastVisit:(RTLearnedVisit *)arg1 ;
@end
