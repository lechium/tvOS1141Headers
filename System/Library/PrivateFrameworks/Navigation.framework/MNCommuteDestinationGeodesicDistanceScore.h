/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNCommuteDestinationScore.h>
#import <libobjc.A.dylib/MNCommuteDestinationLocationScore.h>

@class NSMutableArray;

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {

	int _score;
	NSMutableArray* _geodesicDistances;
	double _slope;

}

@property (nonatomic,retain) NSMutableArray * geodesicDistances;              //@synthesize geodesicDistances=_geodesicDistances - In the implementation block
@property (assign,nonatomic) double slope;                                    //@synthesize slope=_slope - In the implementation block
+(double)weight;
-(int)score;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithDestination:(id)arg1 ;
-(void)updateScoreIfPossible;
-(BOOL)destinationInvalid;
-(id)descriptionExtras;
-(void)_updateScoreAndDestinationInvalid;
-(NSMutableArray *)geodesicDistances;
-(void)setGeodesicDistances:(NSMutableArray *)arg1 ;
-(double)slope;
-(void)setSlope:(double)arg1 ;
@end

