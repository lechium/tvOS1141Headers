/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMVO2MaxInputs : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long fRecordId;
	NSDate* fStartDate;
	double fMets;
	long long fMetSource;
	double fHeartRate;
	double fHeartRateConfidence;
	double fGrade;
	long long fGradeType;
	double fCadence;
	double fPace;
	BOOL fHasGPS;
	BOOL fHasStrideCal;
	long long fWorkoutType;

}

@property (nonatomic,readonly) unsigned long long recordId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double mets; 
@property (nonatomic,readonly) long long metSource; 
@property (nonatomic,readonly) double heartRate; 
@property (nonatomic,readonly) double heartRateConfidence; 
@property (nonatomic,readonly) double grade; 
@property (nonatomic,readonly) long long gradeType; 
@property (nonatomic,readonly) double cadence; 
@property (nonatomic,readonly) double pace; 
@property (nonatomic,readonly) BOOL hasGPS; 
@property (nonatomic,readonly) BOOL hasStrideCal; 
@property (nonatomic,readonly) long long workoutType; 
+(VO2MaxInput)VO2MaxInputFromCMVO2MaxInputs:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(double)mets;
-(id)initWithSample:(VO2MaxInput)arg1 ;
-(double)heartRate;
-(double)heartRateConfidence;
-(long long)gradeType;
-(BOOL)hasStrideCal;
-(long long)metSource;
-(double)pace;
-(id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(BOOL)arg11 hasStrideCal:(BOOL)arg12 workoutType:(long long)arg13 ;
-(NSDate *)startDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cadence;
-(double)grade;
-(long long)workoutType;
-(BOOL)hasGPS;
-(unsigned long long)recordId;
@end

