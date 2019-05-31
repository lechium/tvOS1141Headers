/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPlatform : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentPlatform;
+(BOOL)version:(SCD_Struct_RT7)arg1 equalToVersion:(SCD_Struct_RT7)arg2 ;
+(BOOL)version:(SCD_Struct_RT7)arg1 noGreaterThanVersion:(SCD_Struct_RT7)arg2 ;
+(BOOL)operatingSystemNoGreaterThanVersion:(SCD_Struct_RT7)arg1 ;
+(BOOL)operatingSystemAtLeastVersion:(SCD_Struct_RT7)arg1 ;
+(BOOL)version:(SCD_Struct_RT7)arg1 atLeastVersion:(SCD_Struct_RT7)arg2 ;
+(SCD_Struct_RT7)operatingSystemVersionFromString:(id)arg1 ;
-(id)deviceClass;
-(BOOL)internalInstall;
-(id)systemVersion;
-(id)buildVersion;
-(id)productType;
-(id)serialNumber;
-(BOOL)paired;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)lowEndHardware;
-(BOOL)supportsCoreRoutineCapability;
-(BOOL)supportsMultiUser;
-(BOOL)simulatorPlatform;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)iPhoneDevice;
-(BOOL)supportsPairedDevice;
-(BOOL)supportsMicroLocations;
-(BOOL)supportsMagicalMomentsCapability;
-(BOOL)supportsRoutes;
@end
