/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {

	int _score;
	BOOL _destinationInvalid;
	NSMutableArray* _offRouteEntries;

}

@property (nonatomic,retain) NSMutableArray * offRouteEntries;              //@synthesize offRouteEntries=_offRouteEntries - In the implementation block
+(double)weight;
-(int)score;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)updateForRerouteWithLocation:(id)arg1 ;
-(void)_updateScoreAndDestinationInvalid;
-(NSMutableArray *)offRouteEntries;
-(void)setOffRouteEntries:(NSMutableArray *)arg1 ;
@end

