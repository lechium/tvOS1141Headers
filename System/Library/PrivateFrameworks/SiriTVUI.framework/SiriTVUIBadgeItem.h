/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSString, UIFont, NSDictionary;

@interface SiriTVUIBadgeItem : SiriTVUITemplateItem {

	BOOL _filled;
	NSString* _title;
	UIFont* _font;
	NSDictionary* _colors;
	double _backgroundCornerRadius;
	double _borderWidth;
	UIEdgeInsets _backgroundInsets;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) NSDictionary * colors;                        //@synthesize colors=_colors - In the implementation block
@property (assign,getter=isFilled,nonatomic) BOOL filled;                //@synthesize filled=_filled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInsets;              //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
@property (assign,nonatomic) double backgroundCornerRadius;              //@synthesize backgroundCornerRadius=_backgroundCornerRadius - In the implementation block
@property (assign,nonatomic) double borderWidth;                         //@synthesize borderWidth=_borderWidth - In the implementation block
-(void)setColors:(NSDictionary *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setFont:(UIFont *)arg1 ;
-(NSDictionary *)colors;
-(void)setBorderWidth:(double)arg1 ;
-(UIFont *)font;
-(double)borderWidth;
-(double)backgroundCornerRadius;
-(UIEdgeInsets)backgroundInsets;
-(void)setBackgroundInsets:(UIEdgeInsets)arg1 ;
-(id)initWithTitle:(id)arg1 font:(id)arg2 colors:(id)arg3 isFilled:(BOOL)arg4 backgroundInsets:(UIEdgeInsets)arg5 backgroundCornerRadius:(double)arg6 borderWidth:(double)arg7 ;
-(void)setBackgroundCornerRadius:(double)arg1 ;
-(void)setFilled:(BOOL)arg1 ;
-(BOOL)isFilled;
@end
