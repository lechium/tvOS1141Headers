/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVTimeRangeCollection : NSObject {

	NSArray* _timeRanges;
	double _combinedDuration;

}

@property (readonly) NSArray * timeRanges;                 //@synthesize timeRanges=_timeRanges - In the implementation block
@property (readonly) double combinedDuration;              //@synthesize combinedDuration=_combinedDuration - In the implementation block
-(id)initWithTimeRanges:(id)arg1 ;
-(NSArray *)timeRanges;
-(id)init;
-(unsigned long long)count;
-(id)initWithTimedMetadataGroups:(id)arg1 ;
-(id)timeRangeContainingTime:(double)arg1 ;
-(id)timeRangeClosestToTime:(double)arg1 ;
-(id)timeRangeBeforeTime:(double)arg1 ;
-(id)arrayOfBoundaryTimes;
-(id)arrayOfDisplayTimesMatching:(/*^block*/id)arg1 ;
-(id)arrayOfDisplayTimes;
-(id)timeRangesBetweenDisplayTime:(double)arg1 and:(double)arg2 ;
-(double)displayTimeFromTime:(double)arg1 ;
-(double)timeFromDisplayTime:(double)arg1 ;
-(id)displayTimeRangeTrimmedToTimeRange:(id)arg1 ;
-(double)combinedDuration;
-(id)initWithInterstitialTimeRanges:(id)arg1 ;
@end

