/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/TVColumnRowViewDelegate.h>

@class TVImageProxy, TVLTableElement, UILabel, UIView, UIImageView, TVLColumnRowView, TVLColumnRowViewDataSource, NSString;

@interface TVLBaseballStandingsCollectionViewCell : UICollectionViewCell <TVColumnRowViewDelegate> {

	TVImageProxy* _backgroundImageProxy;
	TVLTableElement* _tableElement;
	UILabel* _titleLabel;
	UIView* _dividerView;
	UIImageView* _backgroundImageView;
	TVLColumnRowView* _tableView;
	TVLColumnRowViewDataSource* _tableViewDataSource;

}

@property (nonatomic,retain) UILabel * titleLabel;                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * dividerView;                                          //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                             //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) TVLColumnRowView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) TVLColumnRowViewDataSource * tableViewDataSource;              //@synthesize tableViewDataSource=_tableViewDataSource - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) TVImageProxy * backgroundImageProxy;                           //@synthesize backgroundImageProxy=_backgroundImageProxy - In the implementation block
@property (nonatomic,retain) TVLTableElement * tableElement;                                //@synthesize tableElement=_tableElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setTableView:(TVLColumnRowView *)arg1 ;
-(TVLColumnRowView *)tableView;
-(void)setBackgroundImage:(id)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setBackgroundImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)backgroundImageProxy;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setTableElement:(TVLTableElement *)arg1 ;
-(double)headerHeightForColumnRowView:(id)arg1 ;
-(double)columnRowView:(id)arg1 widthForColumn:(long long)arg2 ;
-(double)columnRowView:(id)arg1 heightForRow:(long long)arg2 ;
-(TVLTableElement *)tableElement;
-(TVLColumnRowViewDataSource *)tableViewDataSource;
-(void)setTableViewDataSource:(TVLColumnRowViewDataSource *)arg1 ;
-(void)setHighlightProgress:(double)arg1 ;
-(void)setDividerView:(UIView *)arg1 ;
-(UIView *)dividerView;
@end

