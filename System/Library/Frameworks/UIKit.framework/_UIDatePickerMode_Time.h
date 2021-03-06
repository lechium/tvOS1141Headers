/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Time : _UIDatePickerMode {

	double _timeHourWidth;
	double _timeMinuteWidth;
	double _timeAMPMWidth;
	NSString* _hourFormat;
	NSString* _minuteFormat;

}
+(long long)datePickerMode;
+(unsigned long long)extractableCalendarUnits;
-(double)rowHeight;
-(id)font;
-(void)noteCalendarChanged;
-(long long)displayedCalendarUnits;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned long long)arg1 ;
-(double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3 ;
-(id)localizedFormatString;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1 ;
-(unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end

