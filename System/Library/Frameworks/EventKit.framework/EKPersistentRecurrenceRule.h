/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentRecurrenceRule : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)specifier;
-(id)endDate;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(void)setCount:(unsigned long long)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)setInterval:(long long)arg1 ;
-(long long)interval;
-(void)setUUID:(id)arg1 ;
-(void)setFirstDayOfTheWeek:(long long)arg1 ;
-(id)cachedEndDate;
-(long long)firstDayOfTheWeek;
-(void)setSpecifier:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(int)entityType;
@end

