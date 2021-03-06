/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject {

	CMNatalimeterInternal* _internal;

}

@property (nonatomic,readonly) CMNatalimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(id)maxNatalieEntries;
+(BOOL)setUserProfile:(id)arg1 error:(id*)arg2 ;
+(double)briskMinuteMetsThreshold;
+(double)activeMetsThreshold;
+(id)userProfile;
+(id)defaultUserProfile;
+(BOOL)setUserInfo:(id)arg1 error:(id*)arg2 ;
+(BOOL)resetCalibrationDataWithError:(id*)arg1 ;
+(BOOL)isNatalimeterAvailable;
+(id)computeRestingCaloriesAtRate:(unsigned long long)arg1 user:(id)arg2 duration:(double)arg3 ;
+(double)computeTimeToActiveCalories:(id)arg1 user:(id)arg2 workoutType:(long long)arg3 ;
-(BOOL)_shouldAllowMotionCalibrationPromptsForSession:(long long)arg1 ;
-(void)setSession:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)startAbsoluteNatalimetryDataUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopAbsoluteNatalimetryDataUpdates;
-(unsigned long long)getSupportedMetricsForSession:(long long)arg1 ;
-(unsigned long long)promptsNeededForSession:(long long)arg1 ;
-(CMNatalimeterInternal *)_internal;
-(id)init;
-(void)dealloc;
@end

