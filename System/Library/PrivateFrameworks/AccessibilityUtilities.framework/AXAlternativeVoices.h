/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, NSSet;

@interface AXAlternativeVoices : NSObject {

	NSDictionary* _voiceClassesMap;
	NSMutableDictionary* _voiceNameMap;

}

@property (nonatomic,retain) NSDictionary * voiceClassesMap;                     //@synthesize voiceClassesMap=_voiceClassesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * voiceNameMap;                 //@synthesize voiceNameMap=_voiceNameMap - In the implementation block
@property (nonatomic,copy,readonly) NSSet * supportedSiriLanguages; 
+(id)sharedInstance;
+(BOOL)supportsSiri;
+(BOOL)supportsAlex;
+(void)setInUnitTestMode:(BOOL)arg1 ;
+(BOOL)inUnitTestMode;
-(BOOL)isSiriVoiceIdentifier:(id)arg1 ;
-(id)nameForVoiceIdentifier:(id)arg1 ;
-(void)setVoiceClassesMap:(NSDictionary *)arg1 ;
-(void)setVoiceNameMap:(NSMutableDictionary *)arg1 ;
-(BOOL)isAlexAvailableForLanguage:(id)arg1 ;
-(BOOL)_siriSupportsLanguage:(id)arg1 ;
-(NSSet *)supportedSiriLanguages;
-(id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3 ;
-(NSMutableDictionary *)voiceNameMap;
-(NSDictionary *)voiceClassesMap;
-(id)_siriBaseIdentifierFromIdentifier:(id)arg1 ;
-(BOOL)isAlternativeVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
-(BOOL)isAlternativeVoice:(id)arg1 ;
-(BOOL)isOldSiriVoiceIdentifier:(id)arg1 ;
-(id)alternativeVoiceIdentifiersForLangauge:(id)arg1 ;
-(id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2 ;
@end

