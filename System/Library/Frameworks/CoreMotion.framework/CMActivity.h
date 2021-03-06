/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem {

	CLMotionActivity fActivity;

}

@property (nonatomic,readonly) int confidence; 
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (nonatomic,readonly) BOOL maybeExitingVehicle; 
@property (nonatomic,readonly) BOOL hasExitedVehicle; 
+(BOOL)supportsSecureCoding;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)isMoving;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isRunning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)confidence;
-(CLMotionActivity)activity;
-(BOOL)maybeExitingVehicle;
-(BOOL)hasExitedVehicle;
@end

