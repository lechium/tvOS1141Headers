/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, ASEvent;

@interface ASRecurrence : ASItem <NSSecureCoding> {

	NSNumber* _type;
	NSNumber* _interval;
	NSNumber* _dayOfWeek;
	NSNumber* _dayOfMonth;
	NSNumber* _weekOfMonth;
	NSNumber* _monthOfYear;
	NSDate* _until;
	NSNumber* _occurrences;
	NSNumber* _firstDayOfWeek;
	NSNumber* _calendarType;
	ASEvent* _parentEvent;

}

@property (nonatomic,retain) NSNumber * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSNumber * interval;                       //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSNumber * dayOfWeek;                      //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,retain) NSNumber * dayOfMonth;                     //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (nonatomic,retain) NSNumber * weekOfMonth;                    //@synthesize weekOfMonth=_weekOfMonth - In the implementation block
@property (nonatomic,retain) NSNumber * monthOfYear;                    //@synthesize monthOfYear=_monthOfYear - In the implementation block
@property (nonatomic,retain) NSDate * until;                            //@synthesize until=_until - In the implementation block
@property (nonatomic,retain) NSNumber * occurrences;                    //@synthesize occurrences=_occurrences - In the implementation block
@property (nonatomic,retain) NSNumber * firstDayOfWeek;                 //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (nonatomic,retain) NSNumber * calendarType;                   //@synthesize calendarType=_calendarType - In the implementation block
@property (assign,nonatomic,__weak) ASEvent * parentEvent;              //@synthesize parentEvent=_parentEvent - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)monthOfYear;
-(NSNumber *)dayOfMonth;
-(void)setOccurrences:(NSNumber *)arg1 ;
-(NSNumber *)occurrences;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
-(NSNumber *)dayOfWeek;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(NSNumber *)arg1 ;
-(NSNumber *)type;
-(NSNumber *)weekOfMonth;
-(void)setWeekOfMonth:(NSNumber *)arg1 ;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(void)setDayOfMonth:(NSNumber *)arg1 ;
-(NSNumber *)calendarType;
-(void)setCalendarType:(NSNumber *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(BOOL)_loadAttributesFromCalRecurrence:(void*)arg1 parentStartDate:(id)arg2 parentItem:(id)arg3 useFloatingTimeForAllDayEvents:(BOOL)arg4 ;
-(void*)_newRecurrenceWithParentStartDate:(id)arg1 useFloatingTimeForAllDayEvents:(BOOL)arg2 ;
-(void)setMonthOfYear:(NSNumber *)arg1 ;
-(void)setUntilString:(id)arg1 ;
-(void)setFirstDayOfWeek:(NSNumber *)arg1 ;
-(NSDate *)until;
-(NSNumber *)firstDayOfWeek;
-(void)setUntil:(NSDate *)arg1 ;
-(BOOL)_requiresParentEvent;
-(id)_untilDateForCalFrameworkWithParentStartDate:(id)arg1 ;
-(id)_transformedUntilDateForActiveSync:(id)arg1 ;
-(id)initWithCalRecurrence:(void*)arg1 parentEvent:(id)arg2 useFloatingTimeForAllDayEvents:(BOOL)arg3 ;
-(void)saveToCalendarWithParentASEvent:(id)arg1 existingRecord:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 useFloatingTimeForAllDayEvents:(BOOL)arg5 ;
-(void)setParentEvent:(ASEvent *)arg1 ;
-(ASEvent *)parentEvent;
@end

