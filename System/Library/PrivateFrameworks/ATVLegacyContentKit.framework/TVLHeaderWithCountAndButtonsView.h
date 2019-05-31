/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@protocol TVLHeaderWithCountAndButtonsViewDelegate;
@class NSString, NSArray, UILabel, TVLHeaderWithCountAndButtonsElement, UIFocusContainerGuide;

@interface TVLHeaderWithCountAndButtonsView : UIView <ATVUpdatable> {

	NSString* _title;
	long long _count;
	NSArray* _buttons;
	id<TVLHeaderWithCountAndButtonsViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _countLabel;
	TVLHeaderWithCountAndButtonsElement* _feedElement;
	UIFocusContainerGuide* _containerGuide;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy) NSString * title;                                                            //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long count;                                                           //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSArray * buttons;                                                         //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                                                      //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) TVLHeaderWithCountAndButtonsElement * feedElement;                         //@synthesize feedElement=_feedElement - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * containerGuide;                                    //@synthesize containerGuide=_containerGuide - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                                                       //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic,__weak) id<TVLHeaderWithCountAndButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(long long)count;
-(id<TVLHeaderWithCountAndButtonsViewDelegate>)delegate;
-(void)setDelegate:(id<TVLHeaderWithCountAndButtonsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(BOOL)canBecomeFocused;
-(void)setCount:(long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(UILabel *)countLabel;
-(UIFocusContainerGuide *)containerGuide;
-(id)initWithHeaderWithCountAndButtonsElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(TVLHeaderWithCountAndButtonsElement *)feedElement;
-(void)setFeedElement:(TVLHeaderWithCountAndButtonsElement *)arg1 ;
-(void)_buttonSelected:(id)arg1 ;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setContainerGuide:(UIFocusContainerGuide *)arg1 ;
@end

