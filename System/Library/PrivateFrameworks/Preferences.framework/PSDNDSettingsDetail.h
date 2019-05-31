/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSSettingsBoolDetail.h>

@class NSString;

@interface PSDNDSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabled;
+(void)setEnabled:(BOOL)arg1 ;
+(id)iconImage;
+(id)preferencesURL;
+(void)loadStateWithCompletion:(/*^block*/id)arg1 ;
@end

