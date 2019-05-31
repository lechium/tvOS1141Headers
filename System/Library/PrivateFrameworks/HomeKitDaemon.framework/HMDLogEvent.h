/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID, NSError;

@interface HMDLogEvent : HMFObject {

	BOOL _submitted;
	NSUUID* _eventType;
	NSError* _eventError;
	unsigned long long _startTime;
	unsigned long long _endTime;

}

@property (assign,getter=isSubmitted,nonatomic) BOOL submitted;              //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long endTime;                     //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSUUID * eventType;                           //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSError * eventError;                           //@synthesize eventError=_eventError - In the implementation block
@property (readonly) double durationInMilliseconds; 
+(id)stringForSource:(unsigned long long)arg1 ;
-(void)setEndTime:(unsigned long long)arg1 ;
-(unsigned long long)endTime;
-(NSUUID *)eventType;
-(id)init;
-(void)setStartTime:(unsigned long long)arg1 ;
-(unsigned long long)startTime;
-(id)initWithEventType:(id)arg1 ;
-(BOOL)isSubmitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(void)setEventError:(NSError *)arg1 ;
-(void)submitAtTime:(unsigned long long)arg1 error:(id)arg2 ;
-(double)durationInMilliseconds;
-(NSError *)eventError;
@end
