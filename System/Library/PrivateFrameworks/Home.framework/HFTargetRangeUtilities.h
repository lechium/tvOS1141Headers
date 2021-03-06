/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HFTargetRangeUtilities : NSObject
+(id)targetRelativePercentValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5 ;
+(unsigned long long)rangeModeForHeatingCoolingMode:(long long)arg1 ;
+(id)targetValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetResponse:(id)arg3 minimumThresholdResponse:(id)arg4 maximumThresholdResponse:(id)arg5 ;
+(unsigned long long)rangeModeForTargetHumidifierDehumidifierState:(long long)arg1 ;
+(unsigned long long)rangeModeForCurrentHumidifierDehumidifierState:(long long)arg1 ;
+(id)targetValueForService:(id)arg1 valueProvider:(/*^block*/id)arg2 ;
+(id)targetRelativePercentValueWithTargetMode:(unsigned long long)arg1 currentMode:(unsigned long long)arg2 rawTargetRelativePercentValue:(id)arg3 minimumThresholdRelativePercentValue:(id)arg4 maximumThresholdRelativePercentValue:(id)arg5 ;
+(unsigned long long)rangeModeForTargetHeaterCoolerState:(long long)arg1 ;
+(unsigned long long)rangeModeForCurrentHeaterCoolerState:(long long)arg1 ;
@end

