/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSProfile.h>

@class CLSMeaningClue;

@interface CLSMoodProfile : CLSProfile {

	CLSMeaningClue* _mood;

}

@property (nonatomic,retain) CLSMeaningClue * mood;              //@synthesize mood=_mood - In the implementation block
+(id)reductionRulesPath;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
-(BOOL)isValid;
-(void)processResultsWithReductionForInvestigation:(id)arg1 ;
-(id)_bestWordsFromCountedSet:(id)arg1 reverse:(BOOL)arg2 ;
-(void)setMood:(CLSMeaningClue *)arg1 ;
-(id)processResultsOperationForInvestigation:(id)arg1 ;
-(unsigned long long)moodIdentifier;
-(CLSMeaningClue *)mood;
@end

