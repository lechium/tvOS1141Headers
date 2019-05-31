/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, NSString, NSDictionary, NSObject;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate> {

	BOOL _receivingRemoteControlEvents;
	UIWindow* _window;
	BOOL _urlNeedsHandling;
	int _observeForRechabilityChanges;
	BOOL _isReachable;
	BOOL _isOnWifi;
	BOOL _photoStreamIsBusy;
	BOOL _sharedPhotoStreamIsBusy;
	int _photoStreamActivityToken;
	int _sharedPhotoStreamActivityToken;
	int _sharedPhotoStreamInvitationFailureToken;
	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	NSObject* _iPhotoMigrationActivityAlert;

}

@property (nonatomic,readonly) BOOL isReachable;                                   //@synthesize isReachable=_isReachable - In the implementation block
@property (nonatomic,readonly) BOOL isOnWifi;                                      //@synthesize isOnWifi=_isOnWifi - In the implementation block
@property (nonatomic,retain) NSString * currentTestName;                           //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                    //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (nonatomic,retain) NSObject * iPhotoMigrationActivityAlert;              //@synthesize iPhotoMigrationActivityAlert=_iPhotoMigrationActivityAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(void)initialize;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(id)rootViewController;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)photosPreferencesChanged;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)_startObservingReachabilityChanges;
-(void)_stopObservingReachabilityChanges;
-(void)enableNetworkObservation;
-(void)disableNetworkObservation;
-(BOOL)isOnWifi;
-(void)_setImageOptions;
-(id)mainWindow;
-(void)_registerForPhotoStreamActivityNotifications;
-(void)sharedFinishedLaunching:(BOOL)arg1 ;
-(void)_cleanUpOutboundSharingAssets;
-(void)_updatePhotoStreamProgressDisplay;
-(void)_updateSharedPhotoStreamProgressDisplay;
-(void)setReceivingRemoteControlEvents:(BOOL)arg1 ;
-(void)_updateSuspensionSettings;
-(void)_unregisterForPhotoStreamActivityNotifications;
-(void)_updateNetworkActivityIndicatorAsync;
-(void)_finishExtendedTest;
-(BOOL)useCompatibleSuspensionAnimation;
-(BOOL)visitViewControllersWithBlock:(/*^block*/id)arg1 ;
-(id)getSharedContactStore;
-(void*)getSharedAddressBook;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long long)arg2 ;
-(NSString *)currentTestName;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(NSDictionary *)currentTestOptions;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(NSObject *)iPhotoMigrationActivityAlert;
-(void)setIPhotoMigrationActivityAlert:(NSObject *)arg1 ;
-(void)_applicationDidResignActive:(id)arg1 ;
-(BOOL)shouldAllowSBAlertSupression;
-(BOOL)isReachable;
@end

