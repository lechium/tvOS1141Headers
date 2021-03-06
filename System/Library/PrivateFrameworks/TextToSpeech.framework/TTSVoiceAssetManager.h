/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TTSVoiceAssetManager : NSObject {

	NSMutableDictionary* _resourceCache;

}
+(id)sharedInstance;
+(id)queryForVoiceResourceAsset:(id)arg1 localOnly:(BOOL)arg2 ;
+(id)voiceResourceFromAsset:(id)arg1 ;
+(id)_getLatestAssetFromArray:(id)arg1 ;
+(id)voiceResourceAssetForLanguage:(id)arg1 localOnly:(BOOL)arg2 ;
-(id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 version:(id)arg5 voiceType:(long long)arg6 localOnly:(BOOL)arg7 ;
-(id)_voiceAssetForASAsset:(id)arg1 voiceType:(long long)arg2 ;
-(id)getPreinstalledGryphonAssetsForLanguage:(id)arg1 ;
-(BOOL)_assetExistsOnDisk:(id)arg1 ;
-(id)resourcePathForLanguage:(id)arg1 gender:(long long)arg2 footprint:(long long)arg3 voiceName:(id)arg4 voiceType:(long long)arg5 outAsset:(id*)arg6 ;
-(void)getCustomVoiceAssetsLocalOnly:(BOOL)arg1 language:(id)arg2 voiceType:(long long)arg3 reply:(/*^block*/id)arg4 ;
@end

