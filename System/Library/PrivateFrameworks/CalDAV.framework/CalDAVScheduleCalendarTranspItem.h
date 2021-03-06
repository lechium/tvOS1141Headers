/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _transparent;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * transparent;              //@synthesize transparent=_transparent - In the implementation block
@property (nonatomic,readonly) BOOL isScheduleTransparent; 
-(CoreDAVItemWithNoChildren *)transparent;
-(BOOL)isScheduleTransparent;
-(id)copyParseRules;
-(void)setTransparent:(CoreDAVItemWithNoChildren *)arg1 ;
@end

