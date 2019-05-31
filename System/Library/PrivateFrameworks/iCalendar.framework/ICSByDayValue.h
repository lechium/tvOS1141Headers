/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface ICSByDayValue : NSObject <NSSecureCoding> {

	NSNumber* _number;
	int _weekday;

}

@property (assign) int weekday;                              //@synthesize weekday=_weekday - In the implementation block
@property (nonatomic,retain) NSNumber * number; 
+(BOOL)supportsSecureCoding;
+(int)weekdayFromICSString:(id)arg1 ;
+(id)byDayValueFromICSString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(int)weekday;
-(void)setWeekday:(int)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithWeekday:(int)arg1 ;
-(id)initWithWeekday:(int)arg1 number:(id)arg2 ;
-(NSNumber *)number;
-(void)setNumber:(NSNumber *)arg1 ;
@end

