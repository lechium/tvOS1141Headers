/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/EKPredicate.h>

@interface CADTravelEventsPredicate : EKPredicate
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(id)_fetchTravelEventsWithDatabase:(CalDatabase*)arg1 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)predicateFormat;
@end

