/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSourceInterface.h>

@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetSources:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetLocalSource:(/*^block*/id)arg1 ;
-(void)CADSourceGetConstraints:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADSourceRefresh:(id)arg1 isUserRequested:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(/*^block*/id)arg3 ;
@end
