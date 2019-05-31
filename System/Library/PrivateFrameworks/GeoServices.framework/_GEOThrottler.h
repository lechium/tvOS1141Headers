/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOThrottler : NSObject {

	vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp> >* _lastRequestTimes;
	unsigned _currentIndex;
	double _timeWindow;

}
-(id)initForKey:(GEOThrottleKey)arg1 ;
-(id)initWithRequestCount:(unsigned long long)arg1 interval:(double)arg2 ;
-(BOOL)addRequestTimestamp;
-(unsigned long long)remainingEntries;
-(id)description;
@end

