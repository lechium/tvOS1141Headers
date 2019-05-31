/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, MNCommuteDestination, NSString, NSHashTable, MNCommuteDestinationSuggestion;

@interface MNCommuteDestinationScore : NSObject {

	BOOL _destinationInvalid;
	int _score;
	NSDate* _lastUpdate;
	MNCommuteDestination* _destination;
	NSString* _descriptionExtras;
	NSHashTable* _observers;

}

@property (retain) NSHashTable * observers;                                               //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdate;                                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic,__weak) MNCommuteDestination * destination;                   //@synthesize destination=_destination - In the implementation block
@property (readonly) BOOL destinationInvalid;                                             //@synthesize destinationInvalid=_destinationInvalid - In the implementation block
@property (readonly) int score;                                                           //@synthesize score=_score - In the implementation block
@property (readonly) double weightedScore; 
@property (readonly) MNCommuteDestinationSuggestion * destinationSuggestion; 
@property (readonly) NSString * descriptionExtras;                                        //@synthesize descriptionExtras=_descriptionExtras - In the implementation block
+(double)weight;
+(id)sessionStartDate;
+(void)setSessionStartDate:(id)arg1 ;
+(id)sessionStartDateOrNow;
-(int)score;
-(id)init;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSDate *)lastUpdate;
-(MNCommuteDestination *)destination;
-(void)setDestination:(MNCommuteDestination *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(NSString *)descriptionExtras;
-(double)weightedScore;
-(void)lastUpdateIsNow;
-(MNCommuteDestinationSuggestion *)destinationSuggestion;
-(void)notifyObservers;
-(void)setLastUpdate:(NSDate *)arg1 ;
@end

