/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface TVPDateRange : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _durationInSeconds;

}

@property (nonatomic,readonly) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double durationInSeconds;              //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)containsDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)durationInSeconds;
-(id)dateRangeByIntersectingDateRange:(id)arg1 ;
@end
