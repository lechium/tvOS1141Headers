/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, NSString, NSURL, UIImageView;

@interface PSFooterHyperlinkView : UIView <PSHeaderFooterView, UITextViewDelegate> {

	UITextView* _textView;
	NSString* _text;
	NSURL* _URL;
	NSRange _linkRange;
	id _target;
	SEL _action;
	UIImageView* _iconView;

}

@property (retain) NSString * text; 
@property (assign) NSRange linkRange; 
@property (__weak) id target;                                       //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                                      //@synthesize action=_action - In the implementation block
@property (retain) NSURL * URL; 
@property (retain) UIImageView * iconView;                          //@synthesize iconView=_iconView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SEL)action;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(UIEdgeInsets)textInsets;
-(id)initWithSpecifier:(id)arg1 ;
-(void)setLinkRange:(NSRange)arg1 ;
-(BOOL)isValidLinkRange;
-(void)_linkify;
-(NSRange)linkRange;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

