/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableDictionary, CSLDataTokenizer;

@interface CSLMessageTextProcessor : NSObject {

	NSNumber* _featureNGramLimit;
	NSMutableDictionary* _stopWords;
	CSLDataTokenizer* _tokenizer;

}

@property (nonatomic,retain) NSMutableDictionary * stopWords;              //@synthesize stopWords=_stopWords - In the implementation block
@property (nonatomic,retain) CSLDataTokenizer * tokenizer;                 //@synthesize tokenizer=_tokenizer - In the implementation block
@property (nonatomic,retain) NSNumber * featureNGramLimit;                 //@synthesize featureNGramLimit=_featureNGramLimit - In the implementation block
-(id)init;
-(CSLDataTokenizer *)tokenizer;
-(id)initWithNGramLimit:(int)arg1 ;
-(id)createNGramFeaturesWithSource:(id)arg1 maxNgramCount:(long long)arg2 usingTokens:(id)arg3 inLocale:(id)arg4 ;
-(BOOL)isStopWordInLocale:(id)arg1 word:(id)arg2 ;
-(id)createUnigramFeaturesWithSource:(id)arg1 usingTokens:(id)arg2 inLocale:(id)arg3 ;
-(id)processMessageWithBody:(id)arg1 inLocale:(id)arg2 ;
-(id)createFeaturesWithSource:(id)arg1 usingTokens:(id)arg2 inLocale:(id)arg3 ;
-(id)processMessageWithBody:(id)arg1 subject:(id)arg2 inLocale:(id)arg3 ;
-(NSMutableDictionary *)stopWords;
-(BOOL)loadStopWordsInLocale:(id)arg1 ;
-(id)processMessageWithBody:(id)arg1 ;
-(id)processMessageWithBody:(id)arg1 subject:(id)arg2 ;
-(NSNumber *)featureNGramLimit;
-(void)setFeatureNGramLimit:(NSNumber *)arg1 ;
-(void)setStopWords:(NSMutableDictionary *)arg1 ;
-(void)setTokenizer:(CSLDataTokenizer *)arg1 ;
@end

