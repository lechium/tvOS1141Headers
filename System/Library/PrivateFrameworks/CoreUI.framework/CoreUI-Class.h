/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CoreUI : NSObject
+(void)_determineCompatibilityMode;
+(themelook*)currentSystemThemeLook;
+(void)_setCurrentSystemThemeLook:(themelook*)arg1 ;
+(void)_updateMenuBarDrawingStyleForLook:(themelook*)arg1 ;
+(BOOL)_isCurrentLook:(themelook*)arg1 ;
+(long long)lookCongruencyForObject:(id)arg1 ;
+(void)_invalidateVisibleWindows;
+(id)_themeLookDelegate;
+(void)_setThemeLookDelegate:(id)arg1 ;
+(BOOL)_hasDarkMenuBarForLook:(themelook*)arg1 ;
+(void)changeToLook:(themelook*)arg1 ;
+(long long)currentLookGradation;
+(long long)maximumLookGradation;
@end
