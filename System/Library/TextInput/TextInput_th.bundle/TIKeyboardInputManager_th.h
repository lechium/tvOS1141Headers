/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_th.bundle/TextInput_th
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_th/TextInput_th-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>

@interface TIKeyboardInputManager_th : TIKeyboardInputManager
-(id)keyboardBehaviors;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(void)candidateRejected:(id)arg1 ;
-(void)loadDictionaries;
-(BOOL)supportsLearning;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(BOOL)deletesComposedTextByComposedCharacterSequence;
-(TIInputManager*)initImplementation;
-(id)trimmedInputStem;
-(void)setWordBoundary;
@end

