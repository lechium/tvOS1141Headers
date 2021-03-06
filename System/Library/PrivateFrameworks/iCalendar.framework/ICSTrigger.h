/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
-(id)initWithDate:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(void)setDate:(id)arg1 ;
-(id)initWithDuration:(id)arg1 ;
-(void)fixAlarmTrigger;
-(id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2 ;
-(id)travelRelativeDuration;
-(BOOL)isDurationBased;
@end

