/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>

@interface EKPersistentAlarm : EKPersistentObject
+(id)defaultPropertiesToLoad;
+(id)relations;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)UUID;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(void)setUUID:(id)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(long long)proximity;
-(void)setProximity:(long long)arg1 ;
-(void)setStructuredLocation:(id)arg1 ;
-(id)externalData;
-(id)snoozedAlarms;
-(id)calendarItemOwner;
-(id)originalAlarm;
-(void)setAcknowledgedDate:(id)arg1 ;
-(void)setOriginalAlarm:(id)arg1 ;
-(id)acknowledgedDate;
-(void)setExternalData:(id)arg1 ;
-(void)setCalendarItemOwner:(id)arg1 ;
-(id)absoluteDate;
-(void)setAbsoluteDate:(id)arg1 ;
-(long long)alarmType;
-(void)setAlarmType:(long long)arg1 ;
-(id)calendarOwner;
-(void)setCalendarOwner:(id)arg1 ;
-(BOOL)isDefaultAlarm;
-(void)setDefaultAlarm:(BOOL)arg1 ;
-(void)setSnoozedAlarms:(id)arg1 ;
-(void)setRelativeOffset:(id)arg1 ;
-(id)relativeOffset;
-(int)entityType;
-(id)structuredLocation;
@end

