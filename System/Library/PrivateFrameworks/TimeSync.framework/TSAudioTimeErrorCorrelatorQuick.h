/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator {

	float* _channelABuffer;
	float* _scratchBuffer;
	float* _correlationBuffer;
	float* _interpollationIndiciesBuffer;

}
-(void)dealloc;
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_makeBlock;
@end

