/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation;

@interface MNTraceRouteSimulatorEvent : NSObject {

	double _timestamp;
	GEOLocation* _location;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) GEOLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completion;                       //@synthesize completion=_completion - In the implementation block
-(id)initWithLocation:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(id)completion;
-(GEOLocation *)location;
-(id)initWithTime:(double)arg1 completion:(/*^block*/id)arg2 ;
@end
