/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTPreferences : NSObject
+(id)sharedPreferences;
-(id)init;
-(void)synchronize;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)_voiceTriggerEnabled;
-(id)localizedTriggerPhraseForLanguageCode:(id)arg1 ;
-(id)_localeIdentifier;
-(BOOL)_isSATMarkedForMarker:(id)arg1 languageCode:(id)arg2 ;
-(BOOL)isLocalVoiceTriggerAvailable;
-(id)devicesWithVoiceProfileIniCloudForLanguage:(id)arg1 ;
-(id)_VTSATBasePath;
-(id)_VTSATCachePath;
-(BOOL)hasExplicitlySetVoiceTriggerEnabled;
-(BOOL)phraseSpotterEnabled;
-(void)setPhraseSpotterEnabled:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerDisconnected;
-(void)setVoiceTriggerEnabledWhenChargerDisconnected:(BOOL)arg1 ;
-(BOOL)voiceTriggerEnabledWhenChargerConnected;
-(void)setVoiceTriggerEnabledWhenChargerConnected:(BOOL)arg1 ;
-(id)localizedTriggerPhrase;
-(BOOL)secondPassAudioLoggingEnabled;
-(void)setSecondPassAudioLoggingEnabled:(BOOL)arg1 ;
-(BOOL)onetimeRemoteAssetQueryRanSuccessfully;
-(void)setOnetimeRemoteAssetQueryRanSuccessfully:(BOOL)arg1 ;
-(void)discardSATEnrollmentForLanguageCode:(id)arg1 ;
-(void)discardAllSATEnrollment;
-(void)markSATEnrollmentSuccessForLanguageCode:(id)arg1 ;
-(id)_getSATEnrollmentAudioPathForLanguageCode:(id)arg1 ;
-(id)getMD5HashForSATEnrollmentAudioForLanguageCode:(id)arg1 ;
-(id)getSATEnrollmentPath;
-(BOOL)gestureSubscriptionEnabled;
-(BOOL)isVoiceTriggerAvailable;
-(BOOL)isRemoteVoiceTriggerAvailable;
-(BOOL)isSATAvailable;
-(BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)arg1 ;
-(void)enableVoiceTriggerUponVoiceProfileSyncForLanguage:(id)arg1 ;
-(id)_languageCode;
-(void)_setVoiceTriggerEnabled:(BOOL)arg1 ;
-(BOOL)_storeModeEnabled;
-(void)setFileLoggingLevel:(id)arg1 ;
-(id)fileLoggingLevel;
-(BOOL)isSATEnrolledForLanguageCode:(id)arg1 ;
-(id)_deviceCategoryMap;
-(BOOL)voiceTriggerInCoreSpeech;
-(BOOL)isSATEnrollmentMigratedForLanguageCode:(id)arg1 ;
@end
