/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SignpostSupportMachTimeTranslationRange : NSObject {

	unsigned long long _startMachAbsoluteTime;
	unsigned long long _endMachAbsoluteTime;
	unsigned long long _startMachContinuousTime;
	unsigned long long _endMachContinuousTime;

}

@property (nonatomic,readonly) unsigned long long startMachAbsoluteTime;                   //@synthesize startMachAbsoluteTime=_startMachAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachAbsoluteTime;                     //@synthesize endMachAbsoluteTime=_endMachAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long startMachContinuousTime;                 //@synthesize startMachContinuousTime=_startMachContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachContinuousTime;                   //@synthesize endMachContinuousTime=_endMachContinuousTime - In the implementation block
@property (nonatomic,readonly) long long absoluteMinusContinuousDelta; 
@property (nonatomic,readonly) long long continuousMinusAbsoluteDelta; 
@property (nonatomic,readonly) unsigned long long machContinuousTimeDuration; 
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)startMachContinuousTime;
-(unsigned long long)endMachContinuousTime;
-(unsigned long long)startMachAbsoluteTime;
-(unsigned long long)endMachAbsoluteTime;
-(long long)absoluteMinusContinuousDelta;
-(BOOL)containsMachAbsoluteTime:(unsigned long long)arg1 ;
-(long long)continuousMinusAbsoluteDelta;
-(BOOL)containsMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeDuration;
-(BOOL)setEndMachAbsoluteTimestamp:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2 ;
-(unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1 ;
-(unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1 ;
-(id)initWithStartMachAbsoluteTime:(unsigned long long)arg1 startContinuousTime:(unsigned long long)arg2 ;
-(id)initWithArrayRepresentation:(id)arg1 ;
-(id)serializableArrayRepresentation;
@end

