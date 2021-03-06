/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>

@interface CADSpotlightOperationGroup : CADOperationGroup
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(id)_gatherAllCalendarItemUUIDs;
-(void)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1 inBatchesOf:(unsigned long long)arg2 ;
-(void)_pushUpdatesForCalendarItemsWithUUIDs:(id)arg1 ;
-(void)_resetDatabase;
-(void)CADPushItemsToSpotlight:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

