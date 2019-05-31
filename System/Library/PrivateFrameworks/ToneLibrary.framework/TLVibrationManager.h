/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLAccessQueue, NSMutableDictionary, NSDictionary;

@interface TLVibrationManager : NSObject {

	TLAccessQueue* _accessQueue;
	unsigned long long _specialBehaviors;
	NSMutableDictionary* _cachedSystemVibrationIdentifiers;
	NSMutableDictionary* _cachedSystemVibrationCompleteSubdirectories;
	NSDictionary* _cachedUserGeneratedVibrationPatterns;
	BOOL _needsRefresh;
	BOOL _allowsAutoRefresh;

}

@property (nonatomic,readonly) BOOL needsRefresh;                                          //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign,nonatomic) BOOL allowsAutoRefresh;                                       //@synthesize allowsAutoRefresh=_allowsAutoRefresh - In the implementation block
@property (nonatomic,readonly) BOOL shouldVibrateForCurrentRingerSwitchState; 
@property (nonatomic,readonly) BOOL shouldVibrateOnRing; 
@property (nonatomic,readonly) BOOL shouldVibrateOnSilent; 
+(void)_handleVibrationPreferencesDidChangeNotificationForPreferencesKinds:(unsigned long long)arg1 atInitiativeOfVibrationManager:(id)arg2 ;
+(void)_handleVibrateOnRingOrSilentDidChangeNotification;
+(id)sharedVibrationManager;
-(id)init;
-(void)dealloc;
-(void)_performBlockInAccessQueue:(/*^block*/id)arg1 ;
-(id)_newServiceConnection;
-(id)_initWithSpecialBehaviors:(unsigned long long)arg1 ;
-(BOOL)_isUnitTestingModeEnabled;
-(id)_userGeneratedVibrationPatterns;
-(id)currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 topic:(id)arg3 ;
-(id)_systemWideVibrationPatternPreferenceKeyForAlertType:(long long)arg1 ;
-(BOOL)vibrationWithIdentifierIsValid:(id)arg1 ;
-(id)_defaultVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 ;
-(id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 allowsNoneDefaultToAnyActualVibrationSubstitution:(BOOL)arg4 ;
-(id)_currentVibrationIdentifierForAlertType:(long long)arg1 topic:(id)arg2 correspondingToneIdentifier:(id)arg3 ;
-(void)_didSetVibrationPreferenceSuccessfullyWithKey:(id)arg1 inDomain:(id)arg2 usingPreferencesOfKind:(unsigned long long)arg3 ;
-(id)currentVibrationIdentifierForAlertType:(long long)arg1 ;
-(id)nameOfVibrationWithIdentifier:(id)arg1 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2 ;
-(id)_patternForSystemVibrationWithIdentifier:(id)arg1 shouldLogAssetPath:(BOOL)arg2 ;
-(id)_systemVibrationIdentifiersForSubdirectory:(id)arg1 ;
-(id)defaultVibrationIdentifierForAlertType:(long long)arg1 ;
-(id)noneVibrationPattern;
-(id)_completeSystemVibrationsSubdirectoryForSubdirectory:(id)arg1 ;
-(id)_localizedNameForVibrationWithIdentifier:(id)arg1 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 ;
-(id)_nameOfVibrationWithIdentifier:(id)arg1 ;
-(id)_retrieveUserGeneratedVibrationPatternsUsingService;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(BOOL)_setUserGeneratedVibrationPatternsUsingService:(id)arg1 error:(id*)arg2 ;
-(void)_didChangeUserGeneratedVibrationPatterns;
-(BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2 ;
-(BOOL)_removeAllUserGeneratedVibrationPatternsUsingServiceWithError:(id*)arg1 ;
-(BOOL)shouldVibrateOnRing;
-(void)setAllowsAutoRefresh:(BOOL)arg1 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 ;
-(id)currentVibrationNameForAlertType:(long long)arg1 ;
-(id)currentVibrationPatternForAlertType:(long long)arg1 ;
-(id)defaultVibrationNameForAlertType:(long long)arg1 ;
-(id)defaultVibrationPatternForAlertType:(long long)arg1 ;
-(id)noneVibrationName;
-(id)allUserSelectableSystemVibrationIdentifiers;
-(id)allUserGeneratedVibrationIdentifiers;
-(BOOL)_vibrationIsSettableForAlertType:(long long)arg1 ;
-(id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_numberOfUserGeneratedVibrations;
-(BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1 ;
-(BOOL)shouldVibrateForCurrentRingerSwitchState;
-(BOOL)shouldVibrateOnSilent;
-(BOOL)needsRefresh;
-(BOOL)allowsAutoRefresh;
-(id)currentVibrationIdentifierForAlertType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(long long)arg2 accountIdentifier:(id)arg3 ;
-(BOOL)refresh;
@end

