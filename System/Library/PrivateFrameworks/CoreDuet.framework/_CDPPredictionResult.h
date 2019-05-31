/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface _CDPPredictionResult : NSObject {

	NSMutableDictionary* _scoresForMembers;
	NSArray* _rankedMembers;
	double _weight;

}

@property (retain) NSMutableDictionary * scoresForMembers;              //@synthesize scoresForMembers=_scoresForMembers - In the implementation block
@property (assign) double weight;                                       //@synthesize weight=_weight - In the implementation block
-(void)commonInit;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(void)setScoresForMembers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)scoresForMembers;
-(id)rankedMembers:(id)arg1 ;
-(id)initWithMembers:(id)arg1 andScores:(id)arg2 ;
-(id)initByMergingPredictionResults:(id)arg1 ;
-(id)rankedMembers;
-(id)rankedCandidates:(id)arg1 ;
-(id)rankedMembersPassingThreshold:(double)arg1 ;
@end
