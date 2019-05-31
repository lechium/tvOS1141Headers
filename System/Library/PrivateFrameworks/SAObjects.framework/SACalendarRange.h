/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SACalendarRange : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * end; 
@property (nonatomic,retain) SACalendar * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarRange;
+(id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SACalendar *)start;
-(void)setStart:(SACalendar *)arg1 ;
-(SACalendar *)end;
-(void)setEnd:(SACalendar *)arg1 ;
-(id)encodedClassName;
@end

