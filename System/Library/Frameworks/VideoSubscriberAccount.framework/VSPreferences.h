/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUndoManager, NSUserDefaults, VSDevice, NSURL;

@interface VSPreferences : NSObject {

	NSUndoManager* _undoManager;
	NSUserDefaults* _userDefaults;
	VSDevice* _device;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) VSDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                           //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,copy,readonly) NSURL * overridingAppBootURL; 
@property (nonatomic,readonly) BOOL shouldDisableRequestTimeouts; 
@property (nonatomic,readonly) BOOL shouldAlwaysAllowRemoteInspection; 
@property (nonatomic,readonly) BOOL shouldSkipSetup; 
@property (assign,nonatomic) long long cachedAvailabilityStatus; 
@property (assign,nonatomic) long long cachedDeveloperProviderStatus; 
@property (assign,nonatomic) long long cachedStoreProviderStatus; 
@property (nonatomic,readonly) BOOL hasSentWelcomeMessage; 
-(NSUndoManager *)undoManager;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(void)_updateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_updateShouldSkipSetupWithNumber:(id)arg1 ;
-(long long)cachedAvailabilityStatus;
-(void)setCachedAvailabilityStatus:(long long)arg1 ;
-(long long)cachedDeveloperProviderStatus;
-(void)setCachedDeveloperProviderStatus:(long long)arg1 ;
-(long long)cachedStoreProviderStatus;
-(void)setCachedStoreProviderStatus:(long long)arg1 ;
-(BOOL)hasChosenDesiredApp;
-(void)noteDesiredApp:(id)arg1 ;
-(VSDevice *)device;
-(void)setDevice:(VSDevice *)arg1 ;
-(BOOL)shouldAlwaysAllowRemoteInspection;
-(NSURL *)overridingAppBootURL;
-(void)noteShouldSkipSetup;
-(BOOL)hasSentWelcomeMessage;
-(void)noteDidSendWelcomeMessage;
-(BOOL)shouldSkipSetup;
-(BOOL)shouldDisableRequestTimeouts;
@end

