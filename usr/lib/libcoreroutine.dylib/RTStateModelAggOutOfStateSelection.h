/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject {

	NSMutableArray* _selectOOStStates;
	double _weeklyDensityCorrection;
	double _dailyDensityCorrection;

}

@property (nonatomic,retain) NSMutableArray * selectOOStStates;              //@synthesize selectOOStStates=_selectOOStStates - In the implementation block
@property (assign,nonatomic) double weeklyDensityCorrection;                 //@synthesize weeklyDensityCorrection=_weeklyDensityCorrection - In the implementation block
@property (assign,nonatomic) double dailyDensityCorrection;                  //@synthesize dailyDensityCorrection=_dailyDensityCorrection - In the implementation block
-(id)init;
-(id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3 ;
-(NSMutableArray *)selectOOStStates;
-(void)setSelectOOStStates:(NSMutableArray *)arg1 ;
-(double)weeklyDensityCorrection;
-(void)setWeeklyDensityCorrection:(double)arg1 ;
-(double)dailyDensityCorrection;
-(void)setDailyDensityCorrection:(double)arg1 ;
@end

