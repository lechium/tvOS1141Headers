/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISDialogOperation.h>

@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation {

	UIAlertController* _alert;
	UIWindow* _window;

}
-(void)run;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(void)_showAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanupAlert;
@end

