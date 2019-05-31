/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManager_zh_Phonetic.h>

@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManager_zh_Phonetic {

	BOOL _dynamic;
	BOOL _assertDefaultKeyPlane;

}

@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;                                          //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,getter=isAssertDefaultKeyPlane,nonatomic) BOOL assertDefaultKeyPlane;              //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(void)setDynamic:(BOOL)arg1 ;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(BOOL)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(BOOL)isDynamic;
-(id)validCharacterSetForAutocorrection;
-(id)inputsToReject;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(BOOL)keyboardConfigurationAssertDefaultKeyPlane;
-(id)didAcceptCandidate:(id)arg1 ;
-(TIInputManager*)initImplementation;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setAssertDefaultKeyPlane:(BOOL)arg1 ;
-(BOOL)shouldSearchCompletionForSubstrings;
-(BOOL)isAssertDefaultKeyPlane;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(int)inputMethodType;
-(id)phoneticSortingMethod;
-(BOOL)shouldInsertFirstToneMark;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
@end

