/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	struct {
		unsigned isAmPm : 1;
	}  _datePickerContentViewFlags;
	BOOL _isModern;
	UILabel* _titleLabel;
	double _titleLabelMaxX;
	long long _titleAlignment;
	_UIDatePickerMode* _mode;

}

@property (nonatomic,retain) _UIDatePickerMode * mode;              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelMaxX;                 //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) BOOL isAmPm; 
@property (assign,nonatomic) long long titleAlignment;              //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (assign,nonatomic) BOOL isModern;                         //@synthesize isModern=_isModern - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_canBeReusedInPickerView;
-(UILabel *)titleLabel;
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(_UIDatePickerMode *)mode;
-(long long)titleAlignment;
-(id)initWithMode:(id)arg1 ;
-(BOOL)isAmPm;
-(void)setIsAmPm:(BOOL)arg1 ;
-(void)setTitleLabelMaxX:(double)arg1 ;
-(void)setTitleAlignment:(long long)arg1 ;
-(double)titleLabelMaxX;
-(BOOL)isModern;
-(void)setIsModern:(BOOL)arg1 ;
@end

