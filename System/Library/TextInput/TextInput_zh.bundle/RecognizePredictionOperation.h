/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class TIInputManagerHandwriting, CHRecognizer, NSArray, NSString, NSDictionary;

@interface RecognizePredictionOperation : NSOperation {

	TIInputManagerHandwriting* _inputManager;
	CHRecognizer* _recognizer;
	NSArray* _committedCandidates;
	unsigned long long _predictionOptions;
	NSString* _prefixContext;
	NSArray* _candidates;
	NSArray* _proactiveTriggers;
	NSDictionary* _candidateRefsDictionary;

}

@property (nonatomic,retain,readonly) TIInputManagerHandwriting * inputManager;              //@synthesize inputManager=_inputManager - In the implementation block
@property (nonatomic,retain,readonly) CHRecognizer * recognizer;                             //@synthesize recognizer=_recognizer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * committedCandidates;                           //@synthesize committedCandidates=_committedCandidates - In the implementation block
@property (nonatomic,readonly) unsigned long long predictionOptions;                         //@synthesize predictionOptions=_predictionOptions - In the implementation block
@property (nonatomic,retain,readonly) NSString * prefixContext;                              //@synthesize prefixContext=_prefixContext - In the implementation block
@property (nonatomic,retain,readonly) NSArray * candidates;                                  //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain,readonly) NSArray * proactiveTriggers;                           //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * candidateRefsDictionary;                //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
-(void)dealloc;
-(NSArray *)candidates;
-(TIInputManagerHandwriting *)inputManager;
-(void)main;
-(CHRecognizer *)recognizer;
-(NSArray *)proactiveTriggers;
-(NSDictionary *)candidateRefsDictionary;
-(unsigned long long)predictionOptions;
-(NSArray *)committedCandidates;
-(NSString *)prefixContext;
-(id)initWithInputManager:(id)arg1 predictionOptions:(unsigned long long)arg2 prefixContext:(id)arg3 ;
@end

