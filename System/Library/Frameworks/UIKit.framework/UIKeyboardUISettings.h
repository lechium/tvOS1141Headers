/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface UIKeyboardUISettings : _UISettings {

	int _lastVolume;
	BOOL _nextPage;
	BOOL _didShowHUD;

}
+(id)sharedInstance;
+(BOOL)enabled;
+(void)loadSettings;
+(void)hideViaNotification;
-(void)pressRingerButton;
-(void)hide;
-(id)_sharedHUD;
-(BOOL)_isShowingHUD;
-(id)initWithDefaultValues;
-(void)saveSettings;
-(void)cancel;
-(void)next;
-(void)show;
-(void)show:(BOOL)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)settingsHUDConfiguration;
-(void)previous;
@end

