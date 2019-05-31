/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSDate;

@interface HMDVideoStreamReconfigureEvent : HMFObject {

	unsigned long long _eventType;
	NSDate* _timestamp;

}

@property (nonatomic,readonly) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
-(unsigned long long)eventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(long long)compare:(id)arg1 ;
-(id)initWithEventType:(unsigned long long)arg1 ;
@end

