/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface RTStateDepictionOnePredEl : NSObject {

	int _numOfClustEntries;
	double _aggregateTime_s;
	double _latestVisitTime_s;
	double _earliestVisitTime_s;
	NSMutableArray* _visitHist;
	double _density;

}

@property (assign,nonatomic) int numOfClustEntries;                   //@synthesize numOfClustEntries=_numOfClustEntries - In the implementation block
@property (assign,nonatomic) double aggregateTime_s;                  //@synthesize aggregateTime_s=_aggregateTime_s - In the implementation block
@property (assign,nonatomic) double latestVisitTime_s;                //@synthesize latestVisitTime_s=_latestVisitTime_s - In the implementation block
@property (assign,nonatomic) double earliestVisitTime_s;              //@synthesize earliestVisitTime_s=_earliestVisitTime_s - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitHist;              //@synthesize visitHist=_visitHist - In the implementation block
@property (assign,nonatomic) double density;                          //@synthesize density=_density - In the implementation block
-(id)init;
-(double)density;
-(void)setDensity:(double)arg1 ;
-(int)numOfClustEntries;
-(void)setNumOfClustEntries:(int)arg1 ;
-(double)aggregateTime_s;
-(void)setAggregateTime_s:(double)arg1 ;
-(double)latestVisitTime_s;
-(void)setLatestVisitTime_s:(double)arg1 ;
-(double)earliestVisitTime_s;
-(void)setEarliestVisitTime_s:(double)arg1 ;
-(NSMutableArray *)visitHist;
-(void)setVisitHist:(NSMutableArray *)arg1 ;
@end

