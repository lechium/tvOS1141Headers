/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TIInputModeController : NSObject {

	NSArray* _supportedInputModeIdentifiers;
	NSArray* _supportedInputModeLanguageAndRegions;
	NSString* currentLocale;
	NSArray* preferredLanguages;
	NSArray* enabledInputModes;
	NSArray* defaultInputModes;
	NSArray* inputModesForTesting;

}

@property (nonatomic,copy) NSString * currentLocale; 
@property (nonatomic,copy) NSArray * preferredLanguages; 
@property (nonatomic,copy) NSArray * enabledInputModes; 
@property (nonatomic,copy) NSArray * defaultInputModes; 
@property (nonatomic,copy) NSArray * inputModesForTesting; 
@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * supportedInputModeLanguageAndRegions; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
+(id)sharedInputModeController;
+(id)_inputModesForLocale:(id)arg1 language:(id)arg2 modeFetcher:(/*^block*/id)arg3 ;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(NSArray *)inputModesForTesting;
-(NSArray *)supportedInputModeLanguageAndRegions;
-(void)setCurrentLocale:(NSString *)arg1 ;
-(void)setInputModesForTesting:(NSArray *)arg1 ;
-(void)setInputModeIdentifiersForTesting:(id)arg1 ;
-(void)dealloc;
-(NSString *)currentLocale;
-(NSArray *)preferredLanguages;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(id)suggestedDictationLanguageForDeviceLanguage;
-(id)defaultDictationLanguagesForKeyboardLanguage:(id)arg1 ;
-(id)keyboardLanguageForDictationLanguage:(id)arg1 ;
-(NSArray *)enabledInputModes;
-(id)defaultEnabledInputModesForCurrentLocale;
-(NSArray *)defaultInputModes;
-(NSArray *)supportedInputModeIdentifiers;
@end

