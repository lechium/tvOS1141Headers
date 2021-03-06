/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PRLexicon;

@interface PRLanguageModel : NSObject {

	NSString* _localization;
	NSString* _appIdentifier;
	void* _model;
	PRLexicon* _lexicon;

}
+(id)languageModelWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3 ;
+(void)setLogLevel:(long long)arg1 ;
+(void)performMaintenance;
-(id)appIdentifier;
-(unsigned)tokenIDForString:(id)arg1 ;
-(id)stringForTokenID:(unsigned)arg1 ;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumeratePredictionsForContext:(const unsigned*)arg1 length:(unsigned long long)arg2 maxPredictions:(unsigned long long)arg3 maxTokensPerPrediction:(unsigned long long)arg4 withBlock:(/*^block*/id)arg5 ;
-(BOOL)getUnigramProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(BOOL)getConditionalProbabilityForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 probability:(double*)arg4 ;
-(BOOL)tokenSequenceIsBlacklisted:(const unsigned*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)getFirstDynamicTokenID:(unsigned*)arg1 lastDynamicTokenID:(unsigned*)arg2 ;
-(float)usageCountForTokenID:(unsigned)arg1 ;
-(id)initWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3 ;
-(id)localization;
-(BOOL)addTokenForString:(id)arg1 tokenID:(unsigned*)arg2 ;
-(BOOL)shouldAdaptToTokenSequence:(const unsigned*)arg1 length:(unsigned long long)arg2 ;
-(void)incrementUsageCountForTokenID:(unsigned)arg1 context:(const unsigned*)arg2 length:(unsigned long long)arg3 ;
-(void)recordWithDifferentialPrivacy:(id)arg1 ;
-(void)countDynamicNgramsForOrder:(unsigned long long)arg1 threshold:(float)arg2 dynamicModelCount:(unsigned long long*)arg3 cacheCount:(unsigned long long*)arg4 ;
-(void)applyExponentialDecay;
-(void)pruneToSize:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)flushDynamicData;
@end

