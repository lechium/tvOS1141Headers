/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM4 fGravity;
	SCD_Struct_CM4 fUserAcceleration;
	SCD_Struct_CM4 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM4 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;

}
-(void)setDeviceMotion:(SCD_Struct_CM6)arg1 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM6)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

