/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSettingsDetail.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setValue:(double)arg1 ;
+(id)iconImage;
+(double)currentValue;
+(id)preferencesURL;
+(double)incrementedBrightnessValue:(double)arg1 ;
+(void)incrementBrightnessValue:(double)arg1 ;
+(void)beginBrightnessAdjustmentTransaction;
+(void)endBrightnessAdjustmentTransaction;
+(void)beginObservingExternalBrightnessChanges:(/*^block*/id)arg1 changedAction:(/*^block*/id)arg2 ;
+(void)endObservingExternalBrightnessChanges;
+(BOOL)deviceSupportsAutoBrightness;
+(void)setAutoBrightnessEnabled:(BOOL)arg1 ;
+(BOOL)autoBrightnessEnabled;
@end

