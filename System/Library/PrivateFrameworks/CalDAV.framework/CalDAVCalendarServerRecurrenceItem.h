/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, CoreDAVLeafItem, CalDAVCalendarServerChangesItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _master;
	CoreDAVLeafItem* _recurrenceID;
	CalDAVCalendarServerChangesItem* _changes;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * master;                     //@synthesize master=_master - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * recurrenceID;                         //@synthesize recurrenceID=_recurrenceID - In the implementation block
@property (nonatomic,retain) CalDAVCalendarServerChangesItem * changes;              //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL isMaster; 
-(CalDAVCalendarServerChangesItem *)changes;
-(BOOL)isMaster;
-(id)init;
-(CoreDAVItemWithNoChildren *)master;
-(void)setMaster:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
-(void)setRecurrenceID:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)recurrenceID;
-(void)setChanges:(CalDAVCalendarServerChangesItem *)arg1 ;
@end

