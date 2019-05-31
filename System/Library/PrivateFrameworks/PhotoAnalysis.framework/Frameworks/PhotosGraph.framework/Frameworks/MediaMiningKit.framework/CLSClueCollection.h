/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLSClueCollectionJSExports.h>

@protocol OS_dispatch_queue;
@class NSObject, CLSInputPeopleClue, NSMapTable, CLSMeaningClue;

@interface CLSClueCollection : NSObject <CLSClueCollectionJSExports> {

	unsigned long long _versionCount;
	NSObject*<OS_dispatch_queue> _accessQueue;
	CLSInputPeopleClue* _mePersonClue;
	NSMapTable* _inputCluesByKey;
	NSMapTable* _outputCluesByKey;
	NSMapTable* _meaningCluesByKey;

}

@property (nonatomic,retain) CLSInputPeopleClue * mePersonClue;              //@synthesize mePersonClue=_mePersonClue - In the implementation block
@property (readonly) unsigned long long versionCount;                        //@synthesize versionCount=_versionCount - In the implementation block
@property (readonly) CLSMeaningClue * locationMobilityClue; 
@property (readonly) double timeInterval; 
@property (readonly) unsigned long long numberOfDays; 
@property (readonly) unsigned long long numberOfLocations; 
@property (readonly) unsigned long long numberOfPeoples; 
-(id)locations;
-(id)init;
-(id)description;
-(double)timeInterval;
-(long long)year;
-(id)locationDescription;
-(id)peopleNames;
-(unsigned long long)numberOfDays;
-(id)prepareOperations;
-(id)inputClues;
-(id)outputClues;
-(id)meaningClues;
-(CLSInputPeopleClue *)mePersonClue;
-(id)localDates;
-(id)locationPlacemarks;
-(BOOL)hasOutputClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)uniqueOutputCluesForKey:(id)arg1 ;
-(id)uniqueOutputClueForKey:(id)arg1 andValue:(id)arg2 ;
-(unsigned long long)versionCount;
-(void)_incrementVersionCount;
-(id)universalDates;
-(id)locationAddresses;
-(id)inputCluesForKey:(id)arg1 ;
-(id)outputCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(id)uniqueMeaningClueForKey:(id)arg1 andValue:(id)arg2 ;
-(void)_mergeInputClue:(id)arg1 ;
-(void)_mergeOutputClue:(id)arg1 ;
-(void)_mergeMeaningClue:(id)arg1 ;
-(id)peopleDescriptionWithoutPeople:(id)arg1 ;
-(unsigned long long)numberOfPeoples;
-(id)uniqueInputClues;
-(id)uniqueOutputClues;
-(BOOL)hasOutputClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(id)outputClueRelatedPeopleForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputClueRelatedEventsForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)outputClueRelatedPlacesForKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(id)uniqueMeaningClues;
-(id)meaningCluesForKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 andValue:(id)arg2 ;
-(BOOL)hasMeaningClueWithKey:(id)arg1 value:(id)arg2 andMinimumScore:(double)arg3 ;
-(unsigned long long)numberOfTimes;
-(id)locationRegions;
-(id)locationRegionsInPlacemarks;
-(id)peopleDescription;
-(id)detailedLocationDescription;
-(void)setMePersonClue:(CLSInputPeopleClue *)arg1 ;
-(id)_activityString;
-(id)_peopleString;
-(id)_timeOfDayString;
-(id)_timeOfWeekString;
-(id)_timeDurationString;
-(id)_timeEventString;
-(id)_timeSeasonString;
-(id)_locationString;
-(id)_locationMobilityString;
-(id)_weatherString;
-(id)_petString;
-(id)_healthHeartBeatString;
-(id)_healthSpeedString;
-(id)_healthDynamismString;
-(id)locationNames;
-(id)locationCities;
-(id)locationCountries;
-(id)activityEventNames;
-(id)timeEventNames;
-(unsigned long long)clueTimeOfDay;
-(unsigned long long)clueTimeOfWeek;
-(unsigned long long)clueTimeDuration;
-(unsigned long long)clueTimeSeason;
-(unsigned long long)clueTimeEvent;
-(unsigned long long)clueMeaningBeatsSentenceTimeEvent;
-(unsigned long long)clueLocation;
-(unsigned long long)clueMeaningBeatsSentenceLocation;
-(unsigned long long)clueLocationMobility;
-(unsigned long long)cluePeople;
-(unsigned long long)cluePet;
-(unsigned long long)clueActivity;
-(unsigned long long)clueMeaningBeatsSentenceActivity;
-(unsigned long long)clueWeather;
-(unsigned long long)clueHealthHeartBeat;
-(unsigned long long)clueHealthSpeed;
-(unsigned long long)clueHealthDynamism;
-(id)locationNeighbourhoods;
-(id)locationCounties;
-(id)locationStates;
-(id)distanceFromHome;
-(id)distanceFromWork;
-(id)peopleTypeForPeopleName:(id)arg1 ;
-(id)matchingFullDescription;
-(void)mergeClues:(id)arg1 ;
-(id)outputCluesForKey:(id)arg1 ;
-(unsigned long long)numberOfLocations;
-(id)mePerson;
-(void)enumeratePeopleClues:(/*^block*/id)arg1 ;
-(id)universalStartDate;
-(id)universalEndDate;
-(id)localEndDate;
-(id)localStartDate;
-(id)meaningCluesForKey:(id)arg1 ;
-(id)uniqueMeaningCluesForKey:(id)arg1 ;
-(void)enumerateLocationClues:(/*^block*/id)arg1 ;
-(void)enumerateTimeClues:(/*^block*/id)arg1 ;
-(void)enumerateTimeOfDayClues:(/*^block*/id)arg1 ;
-(CLSMeaningClue *)locationMobilityClue;
-(id)matchingDescription;
@end

