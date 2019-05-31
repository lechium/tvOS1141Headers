/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray;

@interface BWIrisDiscontinuity : NSObject {

	SCD_Struct_BW2 _discontinuityTime;
	SCD_Struct_BW2 _duration;
	NSArray* _timeSkews;
	NSArray* _recipe;
	SCD_Struct_BW2 _targetFrameDuration;
	BOOL _onlyRetime;

}

@property (readonly) SCD_Struct_BW2 time; 
@property (nonatomic,retain) NSArray * timeSkews;                     //@synthesize timeSkews=_timeSkews - In the implementation block
@property (readonly) SCD_Struct_BW2 targetFrameDuration; 
+(int)maximumNumberOfConsecutiveDroppedFrames;
-(long long)_offsetIndexFromDiscontinuityForTime:(SCD_Struct_BW2)arg1 ;
-(id)initWithTime:(SCD_Struct_BW2)arg1 duration:(SCD_Struct_BW2)arg2 targetFrameDuration:(SCD_Struct_BW2)arg3 onlyRetime:(BOOL)arg4 timeSkews:(id)arg5 ;
-(BOOL)containsVideoBufferTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)shouldKeepBufferWithTime:(SCD_Struct_BW2)arg1 nextAdjustedTimeInOut:(SCD_Struct_BW2*)arg2 ;
-(SCD_Struct_BW2)targetFrameDuration;
-(NSArray *)timeSkews;
-(void)setTimeSkews:(NSArray *)arg1 ;
-(SCD_Struct_BW2)time;
-(void)dealloc;
@end

