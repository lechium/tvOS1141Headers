/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode_Date.h>

@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date
+(long long)datePickerMode;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2 ;
-(id)selectedDateComponents;
-(long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1 ;
-(long long)yearForRow:(long long)arg1 ;
-(long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4 ;
-(id)titleForRow:(long long)arg1 inComponent:(long long)arg2 ;
-(BOOL)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3 ;
@end
