/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNCommuteDestinationUpdaterDelegate.h>
#import <libobjc.A.dylib/MNCommuteDestinationObserver.h>

@protocol MNCommuteSessionObserver;
@class MNObserverHashTable, NSTimer, NSMutableDictionary, NSArray, MNNavigationTraceManager, MNLocation, MNLocationHistory, MNSuggestionsManager, MNCommuteDestinationUpdater, NSString;

@interface MNCommuteSession : NSObject <MNCommuteDestinationUpdaterDelegate, MNCommuteDestinationObserver> {

	MNObserverHashTable*<MNCommuteSessionObserver> _observers;
	NSTimer* _stateChangeTimer;
	NSMutableDictionary* _suggestions;
	NSArray* _rankedDestinations;
	id _rankedDestinationsSync;
	NSTimer* _etaUpdateTimer;
	MNNavigationTraceManager* _traceManager;
	unsigned long long _currentSuggestionID;
	BOOL _isMapsActive;
	MNLocation* _lastLocation;
	MNLocationHistory* _locationHistory;
	MNSuggestionsManager* _suggestionsManager;
	unsigned long long _commuteSessionState;
	MNCommuteDestinationUpdater* _comparisonDestinationStartTime;

}

@property (assign,nonatomic,__weak) MNCommuteDestinationUpdater * comparisonDestinationStartTime;              //@synthesize comparisonDestinationStartTime=_comparisonDestinationStartTime - In the implementation block
@property (assign,nonatomic,__weak) MNSuggestionsManager * suggestionsManager;                                 //@synthesize suggestionsManager=_suggestionsManager - In the implementation block
@property (assign,nonatomic) unsigned long long commuteSessionState;                                           //@synthesize commuteSessionState=_commuteSessionState - In the implementation block
@property (nonatomic,readonly) MNNavigationTraceManager * traceManager;                                        //@synthesize traceManager=_traceManager - In the implementation block
@property (nonatomic,readonly) NSArray * rankedDestinations; 
@property (readonly) NSString * suggestionsDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isMapsActive; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)stop;
-(void)updateLocation:(id)arg1 ;
-(void)updateMapsActive:(BOOL)arg1 ;
-(void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2 ;
-(MNNavigationTraceManager *)traceManager;
-(void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2 ;
-(void)destinationUpdaterDidArrive:(id)arg1 ;
-(BOOL)isMapsActive;
-(id)initWithTraceName:(id)arg1 isTraceRecording:(BOOL)arg2 ;
-(void)setCommuteSessionState:(unsigned long long)arg1 ;
-(void)_updateSuggestionsManagerState;
-(NSArray *)rankedDestinations;
-(NSString *)suggestionsDescription;
-(void)startETAUpdatesWithInterval:(double)arg1 ;
-(void)stopETAUpdates;
-(void)addSuggestion:(id)arg1 ;
-(void)_resetRankedDestinations;
-(void)updateComparisonStartDate;
-(void)_updatedDestinations;
-(MNSuggestionsManager *)suggestionsManager;
-(void)setSuggestionsManager:(MNSuggestionsManager *)arg1 ;
-(unsigned long long)commuteSessionState;
-(MNCommuteDestinationUpdater *)comparisonDestinationStartTime;
-(void)setComparisonDestinationStartTime:(MNCommuteDestinationUpdater *)arg1 ;
@end

