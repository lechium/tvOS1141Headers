/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _GEOThrottleState : NSObject {

	unsigned long long _requestCount;
	double _lastResetTime;

}

@property (assign,nonatomic) unsigned long long requestCount;              //@synthesize requestCount=_requestCount - In the implementation block
@property (assign,nonatomic) double lastResetTime;                         //@synthesize lastResetTime=_lastResetTime - In the implementation block
-(double)lastResetTime;
-(void)setLastResetTime:(double)arg1 ;
-(void)setRequestCount:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)requestCount;
@end

