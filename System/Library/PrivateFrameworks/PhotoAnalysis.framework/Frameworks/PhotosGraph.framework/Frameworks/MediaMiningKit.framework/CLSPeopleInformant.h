/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInformant.h>

@interface CLSPeopleInformant : CLSInformant
+(id)familyIdentifier;
+(BOOL)_isLocation:(CLLocationCoordinate2D)arg1 closeToLocation:(CLLocationCoordinate2D)arg2 ;
+(BOOL)_isLocation:(CLLocationCoordinate2D)arg1 farFromLocation:(CLLocationCoordinate2D)arg2 ;
+(id)_clueValueForRelationship:(unsigned long long)arg1 ;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
-(id)gatherCluesOperationForInvestigation:(id)arg1 ;
-(BOOL)_isExactDate:(id)arg1 forBirthdayDate:(id)arg2 ;
-(BOOL)_isNextWeekEnd:(id)arg1 forBirthdayDate:(id)arg2 ;
-(id)_getCurrentYearStringForBirthdayDate:(id)arg1 atLocalDate:(id)arg2 ;
-(id)_gatherCluesForInvestigation:(id)arg1 inParentOperation:(id)arg2 ;
-(id)farAwayOrCloseCluesForLocations:(id)arg1 forPerson:(id)arg2 withAddressType:(unsigned long long)arg3 forInvestigation:(id)arg4 ;
-(BOOL)_isAbroadForPerson:(id)arg1 forPlacemarks:(id)arg2 inInvestigation:(id)arg3 inParentOperation:(id)arg4 ;
-(id)personsForLocations:(id)arg1 inPersons:(id)arg2 inInvestigation:(id)arg3 ;
-(id)_locationRelationshipForPersonRelationship:(id)arg1 ;
-(id)personForAnniversary:(id)arg1 forInvestigation:(id)arg2 ;
-(id)personsForBirthdayDates:(id)arg1 inPersons:(id)arg2 inInvestigation:(id)arg3 ;
-(BOOL)_persons:(id)arg1 areKindOf:(unsigned long long)arg2 ;
@end

