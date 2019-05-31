/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManager_zh.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class CIMCandidateData, NSOperationQueue, TIConversionHistory, NSString, NSArray, TIMecabraIMLogger, TIKeyboardCandidate;

@interface TIKeyboardInputManager_zh_Phonetic : TIKeyboardInputManager_zh <TIKeyboardInputManagerChineseCompletion> {

	BOOL _usesCandidateSelection;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	BOOL _isCandidateSelected;
	BOOL _acceptingCandidate;
	BOOL _isInAmbiguousMode;
	BOOL _lockingFirstPinyinSyllable;
	BOOL _filterCandidatesUsingInputIndex;
	TIConversionHistory* _conversionHistory;
	NSString* _remainingInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;
	NSString* _composedTextBeforeFirstSyllableLocked;
	NSArray* _pinyinSyllableCandidates;
	unsigned long long _selectedPinyinSyllableCandidateIndex;
	TIMecabraIMLogger* _logger;

}

@property (getter=isPhraseBoundarySet,nonatomic,readonly) BOOL phraseBoundarySet; 
@property (nonatomic,readonly) TIKeyboardCandidate * candidateForInlineTextSegmentation; 
@property (nonatomic,copy) NSString * remainingInput;                                                 //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,readonly) NSString * unconvertedInput; 
@property (assign,nonatomic) BOOL filterCandidatesUsingInputIndex;                                    //@synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex - In the implementation block
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                                //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;                           //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * composedTextBeforeFirstSyllableLocked;                          //@synthesize composedTextBeforeFirstSyllableLocked=_composedTextBeforeFirstSyllableLocked - In the implementation block
@property (nonatomic,retain) NSArray * pinyinSyllableCandidates;                                      //@synthesize pinyinSyllableCandidates=_pinyinSyllableCandidates - In the implementation block
@property (assign,nonatomic) unsigned long long selectedPinyinSyllableCandidateIndex;                 //@synthesize selectedPinyinSyllableCandidateIndex=_selectedPinyinSyllableCandidateIndex - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalInputString; 
@property (nonatomic,readonly) NSString * convertedInput; 
@property (nonatomic,readonly) BOOL usesGeometryModelData; 
@property (nonatomic,retain) TIConversionHistory * conversionHistory;                                 //@synthesize conversionHistory=_conversionHistory - In the implementation block
@property (nonatomic,retain) TIMecabraIMLogger * logger;                                              //@synthesize logger=_logger - In the implementation block
+(Class)wordSearchClass;
+(id)stringByRemovingSyllableSeparatorsFromString:(id)arg1 ;
+(id)stringFallBackForTenKeyInput:(id)arg1 range:(NSRange)arg2 ;
+(id)ambiguousPinyinSet;
+(id)directlyCommittedCharacterSetForEmptyInline;
+(id)ambiguousDefaults;
-(void)dealloc;
-(void)suspend;
-(id)keyboardBehaviors;
-(void)resume;
-(id)candidateResultSet;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(BOOL)usesAutoDeleteWord;
-(BOOL)supportsSetPhraseBoundary;
-(id)inputString;
-(BOOL)shouldExtendPriorWord;
-(BOOL)suppressCompletionsForFieldEditor;
-(BOOL)suppliesCompletions;
-(unsigned long long)phraseBoundary;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(BOOL)commitsAcceptedCandidate;
-(id)defaultCandidate;
-(void)_nop;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(BOOL)ignoresDeadKeys;
-(id)locale;
-(void)setInput:(id)arg1 ;
-(id)sentenceDelimitingCharacters;
-(NSRange)analysisStringRange;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(BOOL)supportsPerRecipientLearning;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(BOOL)supportsLearning;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)setAutoCorrects:(BOOL)arg1 ;
-(id)newInputManagerState;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(id)rawInputString;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(void)updateComposedText;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(BOOL)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(BOOL)canStartSentenceAfterString:(id)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(void)setPhraseBoundary:(unsigned long long)arg1 ;
-(id)sortingMethods;
-(void)clearDynamicDictionary;
-(id)initWithConfig:(id)arg1 ;
-(TIMecabraIMLogger *)logger;
-(void)setLogger:(TIMecabraIMLogger *)arg1 ;
-(NSString *)replacementUnambiguousPinyinSyllable;
-(NSString *)replacedAmbiguousPinyinSyllable;
-(NSString *)convertedInput;
-(void)setReplacedAmbiguousPinyinSyllable:(NSString *)arg1 ;
-(void)setReplacementUnambiguousPinyinSyllable:(NSString *)arg1 ;
-(void)wordSearchEngineDidFindPredictionCandidates:(id)arg1 ;
-(BOOL)shouldLookForCompletionCandidates;
-(TIConversionHistory *)conversionHistory;
-(BOOL)_shouldCommitInputDirectly:(id)arg1 ;
-(BOOL)isSpecialInput:(id)arg1 ;
-(NSString *)internalInputString;
-(int)inputMethodType;
-(id)phoneticSortingMethod;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(BOOL)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(BOOL)usesGeometryModelData;
-(id)remapInput:(id)arg1 isFacemarkInput:(BOOL*)arg2 ;
-(void)didDeleteCandidates:(id)arg1 ;
-(void)setPinyinSyllableCandidates:(NSArray *)arg1 ;
-(void)setSelectedPinyinSyllableCandidateIndex:(unsigned long long)arg1 ;
-(BOOL)firstSyllableLocked;
-(BOOL)isPhraseBoundarySet;
-(NSString *)unconvertedInput;
-(id)stringByPrependingConvertedCandidateTextToString:(id)arg1 ;
-(void)clearPinyinSyllableSelection;
-(TIKeyboardCandidate *)candidateForInlineTextSegmentation;
-(BOOL)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1 ;
-(void)revertToAmbiguousPinyinSyllable;
-(void)setFilterCandidatesUsingInputIndex:(BOOL)arg1 ;
-(BOOL)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2 ;
-(void)addInputToInternal:(id)arg1 ;
-(unsigned long long)internalInputIndex;
-(NSArray *)pinyinSyllableCandidates;
-(unsigned long long)selectedPinyinSyllableCandidateIndex;
-(id)inputStringForSearch;
-(unsigned long long)internalInputCount;
-(NSString *)composedTextBeforeFirstSyllableLocked;
-(BOOL)generateReanalysisCandidatesIfAppropriate;
-(BOOL)updateCandidates;
-(BOOL)hasExtensionEmojiCandidates;
-(id)stringByStrippingConvertedCandidateTextFromString:(id)arg1 ;
-(void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)setComposedTextBeforeFirstSyllableLocked:(NSString *)arg1 ;
-(void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)filterCandidatesUsingInputIndex;
-(id)segmentedPinyinStringFromString:(id)arg1 ;
-(void)loadAddressBook;
-(void)setConversionHistory:(TIConversionHistory *)arg1 ;
@end

