/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@protocol TVListTabsHeaderViewDelegate;
@class NSAttributedString, NSArray, UILabel, UISegmentedControl;

@interface TVListTabsHeaderView : UIView {

	id<TVListTabsHeaderViewDelegate> _delegate;
	NSAttributedString* _title;
	NSAttributedString* _subtitle;
	NSArray* _tabTitles;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UISegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                         //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic,__weak) id<TVListTabsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSAttributedString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSArray * tabTitles;                                             //@synthesize tabTitles=_tabTitles - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TVListTabsHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<TVListTabsHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSAttributedString *)title;
-(UILabel *)titleLabel;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
-(void)setSubtitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)subtitle;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTabTitles:(NSArray *)arg1 ;
-(id)_segmentedControl;
-(void)_selectedIndexDidChangeAction:(id)arg1 ;
-(NSArray *)tabTitles;
@end

