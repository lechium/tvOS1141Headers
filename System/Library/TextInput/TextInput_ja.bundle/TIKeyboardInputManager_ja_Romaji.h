/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TextInput_ja-Structs.h>
#import <TextInput_ja/TIKeyboardInputManager_ja.h>

@class NSMutableArray, NSString;

@interface TIKeyboardInputManager_ja_Romaji : TIKeyboardInputManager_ja {

	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;

}
+(Class)wordSearchClass;
-(void)updateState;
-(void)dealloc;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(id)inputString;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(NSRange)analysisStringRange;
-(id)validCharacterSetForAutocorrection;
-(void)loadDictionaries;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)remainingInput;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)initWithConfig:(id)arg1 ;
-(id)transliterate:(id)arg1 ;
-(unsigned long long)actualInternalInputIndex;
-(id)_convertStringWithBoundary:(unsigned long long)arg1 ;
-(unsigned long long)remainingInputLengthOfCandidate:(id)arg1 ;
@end
