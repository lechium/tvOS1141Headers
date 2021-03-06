/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFPreferences : NSObject {

	BOOL _registeredForInternalPrefs;
	BOOL _registeredForLanguageCode;
	BOOL _registeredForOutputVoice;
	BOOL _registeredForSupportedLanguages;
	NSObject*<OS_dispatch_queue> _navTokenQueue;
	BOOL _navTokenIsValid;
	int _navToken;

}
+(id)sharedPreferences;
-(id)init;
-(void)synchronize;
-(void)dealloc;
-(BOOL)dictationIsEnabled;
-(id)languageCode;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(void)setLanguageCode:(id)arg1 ;
-(BOOL)suppressDictationOptIn;
-(BOOL)applySASToFirstPartyDomains;
-(void)setApplySASToFirstPartyDomains:(BOOL)arg1 ;
-(BOOL)useSASAutoSelectionFeature;
-(void)setUseSASAutoSelectionFeature:(BOOL)arg1 ;
-(BOOL)isLocaleIdentifierNativelySupported:(id)arg1 ;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForSupportedLanguageChangeNotifications;
-(void)_registerForInteralPrefs;
-(void)_registerForLanguageCodeChangeNotifications;
-(id)bestSupportedLanguageCodeForLanguageCode:(id)arg1 ;
-(id)_bestSupportedLanguageCodeForLanguageCode:(id)arg1 isGoodFit:(BOOL*)arg2 ;
-(id)_bestSupportedLanguageCodeForLanguageCodes:(id)arg1 isGoodFit:(BOOL*)arg2 ;
-(id)_languagePreferencesForCurrentSystemConfiguration;
-(BOOL)_languageCode:(id)arg1 isGoodFitForPreferredLanguages:(id)arg2 ;
-(void)_registerForOutputVoice;
-(unsigned long long)currentNavigationState;
-(void)setCurrentNavigationState:(unsigned long long)arg1 ;
-(void)_registerForNavStatusIfNeeded;
-(void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)fileLoggingIsEnabled;
-(long long)handsFreeMode;
-(void)setHandsFreeMode:(long long)arg1 ;
-(BOOL)respectsSystemMute;
-(void)setRespectsSystemMute:(BOOL)arg1 ;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_ouputVoiceDidChangeExternally;
-(void)_supportedLanguagesDidChangeExternally;
-(BOOL)offlineDictationOverride;
-(void)setOfflineDictationOverride:(BOOL)arg1 ;
-(id)offlineDictationProfileOverridePath;
-(void)setOfflineDictationProfileOverridePath:(id)arg1 ;
-(BOOL)legacyLoggingEnabled;
-(void)_setAssistantIsEnabledLocal:(BOOL)arg1 ;
-(void)_setDictationIsEnabledLocal:(BOOL)arg1 ;
-(void)setDictationIsEnabled:(BOOL)arg1 ;
-(void)resetSessionLanguage;
-(BOOL)showServerOnUI;
-(void)setShowServerOnUI:(BOOL)arg1 ;
-(BOOL)debugButtonIsEnabled;
-(void)setDebugButtonIsEnabled:(BOOL)arg1 ;
-(BOOL)showsHoldToTalkIndicator;
-(void)setShowsHoldToTalkIndicator:(BOOL)arg1 ;
-(BOOL)suppressAssistantOptIn;
-(void)setSuppressAssistantOptIn:(BOOL)arg1 ;
-(void)setSuppressDictationOptIn:(BOOL)arg1 ;
-(void)_setSuppressDictationOptInLocal:(BOOL)arg1 ;
-(void)setCloudSyncEnabled:(BOOL)arg1 ;
-(id)cloudSyncEnabledModificationDate;
-(void)_setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 ;
-(void)_setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 ;
-(id)supplementalLanguageDictionaryForProduct:(id)arg1 ;
-(id)supplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 ;
-(id)supplementalLanguages;
-(id)_supplementalLanguagesDictionary;
-(id)supplementalLanguagesModificationDate;
-(id)horsemanSupplementalLanguageDictionary;
-(id)activitySummaryReportDate;
-(void)setActivitySummaryReportDateToNow;
-(void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1 ;
-(void)setManualEndpointingThreshold:(id)arg1 ;
-(BOOL)streamingDictationEnabled;
-(void)setStreamingDictationEnabled:(BOOL)arg1 ;
-(BOOL)myriadCoordinationEnabled;
-(void)setMyriadCoordinationEnabled:(BOOL)arg1 ;
-(BOOL)myriadDuckingEnabled;
-(void)setMyriadDuckingEnabled:(BOOL)arg1 ;
-(id)myriadDeviceGroup;
-(void)setMyriadDeviceGroup:(id)arg1 ;
-(BOOL)limitedAudioLoggingEnabled;
-(void)setLimitedAudioLoggingEnabled:(BOOL)arg1 ;
-(BOOL)siriDebugUIEnabled;
-(void)setSiriDebugUIEnabled:(BOOL)arg1 ;
-(BOOL)siriKitEnabledForNativeMessages;
-(void)setSiriKitEnabledForNativeMessages:(BOOL)arg1 ;
-(BOOL)siriKitEnabledForNativeCalling;
-(void)setSiriKitEnabledForNativeCalling:(BOOL)arg1 ;
-(BOOL)siriKitEnabledForNativeNotes;
-(void)setSiriKitEnabledForNativeNotes:(BOOL)arg1 ;
-(BOOL)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1 ;
-(BOOL)assistantLanguageForceRTL;
-(void)setAssistantLanguageForceRTL:(BOOL)arg1 ;
-(BOOL)isCurrentLocaleNativelySupported;
-(id)allSiriLanguageCodesForSystemLanguageCode:(id)arg1 isGoodFit:(BOOL*)arg2 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(id)inProgressOutputVoice;
-(void)setInProgressOutputVoice:(id)arg1 ;
-(long long)useDeviceSpeakerForTTS;
-(void)setUseDeviceSpeakerForTTS:(long long)arg1 ;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)shouldLogForQA;
-(void)setCardLoggingEnabled:(BOOL)arg1 ;
-(BOOL)cardLoggingEnabled;
-(BOOL)assistantIsEnabled;
-(void)setAssistantIsEnabled:(BOOL)arg1 ;
-(void)setOutputVoice:(id)arg1 ;
-(id)outputVoice;
-(BOOL)cloudSyncEnabled;
@end

