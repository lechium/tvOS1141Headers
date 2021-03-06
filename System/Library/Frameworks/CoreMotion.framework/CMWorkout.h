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

@class NSUUID;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* fSessionId;
	long long fType;

}

@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) long long type; 
+(id)workoutName:(long long)arg1 ;
+(int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1 ;
+(long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1 ;
+(long long)natalieDataSessionFromWorkoutType:(long long)arg1 ;
+(long long)workoutTypeFromNatalieDataSession:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)isAvailable;
-(id)initWithSessionId:(id)arg1 type:(long long)arg2 ;
-(NSUUID *)sessionId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

