/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSAudioTimeErrorValue : NSObject {

	double _sampleTimestamp;
	double _timeError;

}

@property (nonatomic,readonly) double sampleTimestamp;              //@synthesize sampleTimestamp=_sampleTimestamp - In the implementation block
@property (nonatomic,readonly) double timeError;                    //@synthesize timeError=_timeError - In the implementation block
-(id)description;
-(id)initWithSampleTimestamp:(double)arg1 andTimeError:(double)arg2 ;
-(double)sampleTimestamp;
-(double)timeError;
@end

