/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSAttributedString, UIImage, UIColor;

@interface _WLKUITextBadge : UIView {

	int _textBlendMode;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	double _strokeSize;
	double _cornerRadius;
	UIImage* _backgroundImage;
	unsigned long long _badgeStyle;
	unsigned long long _textAlignmentStyle;
	UIColor* _tintColor;
	double _fontSize;
	UIEdgeInsets _badgeInsets;

}

@property (nonatomic,retain) UIColor * tintColor;                                //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double fontSize;                                    //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;                 //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) int textBlendMode;                                  //@synthesize textBlendMode=_textBlendMode - In the implementation block
@property (assign,nonatomic) double strokeSize;                                  //@synthesize strokeSize=_strokeSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets badgeInsets;                           //@synthesize badgeInsets=_badgeInsets - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                          //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) unsigned long long badgeStyle;                      //@synthesize badgeStyle=_badgeStyle - In the implementation block
@property (assign,nonatomic) unsigned long long textAlignmentStyle;              //@synthesize textAlignmentStyle=_textAlignmentStyle - In the implementation block
+(id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(NSAttributedString *)attributedTitle;
-(CGSize)_textSize;
-(double)fontSize;
-(id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3 ;
-(id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4 ;
-(int)textBlendMode;
-(void)setTextBlendMode:(int)arg1 ;
-(double)strokeSize;
-(void)setStrokeSize:(double)arg1 ;
-(UIEdgeInsets)badgeInsets;
-(void)setBadgeInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)badgeStyle;
-(void)setBadgeStyle:(unsigned long long)arg1 ;
-(unsigned long long)textAlignmentStyle;
-(void)setTextAlignmentStyle:(unsigned long long)arg1 ;
@end

