/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class UITextReplacement;

@interface UICalloutBarButton : UIButton {

	SEL m_action;
	int m_position;
	int m_type;
	UITextReplacement* m_textReplacement;
	double m_contentWidth;
	double m_contentScale;
	double m_additionalContentHeight;
	double m_dividerOffset;
	double m_imageVerticalAdjust;
	long long m_page;
	BOOL m_isText;
	BOOL m_configured;
	BOOL m_single;
	BOOL m_padLeft;
	BOOL m_padRight;
	BOOL m_dontDismiss;
	BOOL forceFlash;

}

@property (nonatomic,readonly) SEL action; 
@property (nonatomic,readonly) double contentWidth; 
@property (nonatomic,readonly) double contentScale; 
@property (nonatomic,readonly) double additionalContentHeight; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) BOOL forceFlash; 
@property (assign,nonatomic) long long page; 
@property (assign,nonatomic) double dividerOffset; 
@property (assign,nonatomic) double imageVerticalAdjust; 
@property (assign,nonatomic) BOOL dontDismiss; 
@property (nonatomic,retain) UITextReplacement * textReplacement; 
+(id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6 ;
+(id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
+(id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4 ;
-(void)removeFromSuperview;
-(void)dealloc;
-(void)layoutSubviews;
-(int)type;
-(SEL)action;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(void)setDontDismiss:(BOOL)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(double)contentWidth;
-(double)_scaleFactorForImage;
-(void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 action:(SEL)arg4 type:(int)arg5 ;
-(void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 ;
-(void)flash;
-(void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2 ;
-(void)cancelFlash;
-(void)configureLabel;
-(CGRect)adjustRectForPosition:(CGRect)arg1 scaleRect:(BOOL)arg2 ;
-(BOOL)forceFlash;
-(void)setForceFlash:(BOOL)arg1 ;
-(void)fadeAndSendAction;
-(void)configureForSingle:(int)arg1 ;
-(void)configureForLeftPosition:(int)arg1 ;
-(void)configureForMiddlePosition;
-(void)configureForRightPosition:(int)arg1 ;
-(void)setContentScale:(double)arg1 ;
-(double)contentScale;
-(double)additionalContentHeight;
-(UITextReplacement *)textReplacement;
-(void)setTextReplacement:(UITextReplacement *)arg1 ;
-(long long)page;
-(void)setPage:(long long)arg1 ;
-(double)dividerOffset;
-(void)setDividerOffset:(double)arg1 ;
-(double)imageVerticalAdjust;
-(void)setImageVerticalAdjust:(double)arg1 ;
-(BOOL)dontDismiss;
@end

