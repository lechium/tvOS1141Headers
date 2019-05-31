/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface UIDatePickerWeekMonthDayView : UIView {

	struct {
		unsigned weekdayLast : 1;
	}  _datePickerWeekMonthDayViewFlags;
	BOOL _isModern;
	UILabel* _dateLabel;
	UILabel* _weekdayLabel;
	NSString* _formattedDateString;
	double _weekdayWidth;

}

@property (nonatomic,readonly) UILabel * dateLabel;                     //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) UILabel * weekdayLabel;                  //@synthesize weekdayLabel=_weekdayLabel - In the implementation block
@property (nonatomic,copy) NSString * formattedDateString;              //@synthesize formattedDateString=_formattedDateString - In the implementation block
@property (assign,nonatomic) double weekdayWidth;                       //@synthesize weekdayWidth=_weekdayWidth - In the implementation block
@property (assign,nonatomic) BOOL weekdayLast; 
@property (assign,nonatomic) BOOL isModern;                             //@synthesize isModern=_isModern - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_canBeReusedInPickerView;
-(UILabel *)dateLabel;
-(UILabel *)weekdayLabel;
-(BOOL)isModern;
-(void)setIsModern:(BOOL)arg1 ;
-(void)setWeekdayWidth:(double)arg1 ;
-(BOOL)weekdayLast;
-(void)setWeekdayLast:(BOOL)arg1 ;
-(NSString *)formattedDateString;
-(void)setFormattedDateString:(NSString *)arg1 ;
-(double)weekdayWidth;
@end
