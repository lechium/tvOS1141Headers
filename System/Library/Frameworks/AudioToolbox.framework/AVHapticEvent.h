/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@interface AVHapticEvent : NSObject {

	double _time;
	double _duration;
	BOOL _isParameter;
	SCD_Union_AV10 _u;
	AVHapticPlayerFixedParameter _fixedParams[5];
	long long _fixedParamCount;
	float _value;

}

@property (readonly) double time;                                            //@synthesize time=_time - In the implementation block
@property (readonly) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (readonly) BOOL isParameter;                                       //@synthesize isParameter=_isParameter - In the implementation block
@property (readonly) unsigned long long eventType; 
@property (readonly) unsigned long long paramType; 
@property (readonly) float value;                                            //@synthesize value=_value - In the implementation block
@property (readonly) AVHapticPlayerFixedParameter* fixedParams; 
@property (readonly) long long fixedParamCount;                              //@synthesize fixedParamCount=_fixedParamCount - In the implementation block
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 duration:(double)arg5 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 ;
+(id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 ;
+(id)eventWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3 ;
-(id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3 ;
-(id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const AVHapticPlayerFixedParameter*)arg3 count:(long long)arg4 duration:(double)arg5 ;
-(id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3 ;
-(unsigned long long)paramType;
-(AVHapticPlayerFixedParameter*)fixedParams;
-(BOOL)isParameter;
-(long long)fixedParamCount;
-(double)time;
-(unsigned long long)eventType;
-(double)duration;
-(float)value;
@end

