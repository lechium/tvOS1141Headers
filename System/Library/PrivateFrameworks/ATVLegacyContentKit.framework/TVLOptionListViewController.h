/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVTableViewDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class UILabel, TVTableView, TVLMenuListDataSource, NSString;

@interface TVLOptionListViewController : UIViewController <TVTableViewDelegate, ATVUpdatable> {

	UILabel* _titleLabel;
	UILabel* _footnoteLabel;
	TVTableView* _listView;
	TVLMenuListDataSource* _listDataSource;

}

@property (nonatomic,retain) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * footnoteLabel;                             //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (nonatomic,retain) TVTableView * listView;                              //@synthesize listView=_listView - In the implementation block
@property (nonatomic,retain) TVLMenuListDataSource * listDataSource;              //@synthesize listDataSource=_listDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(UILabel *)titleLabel;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)footnoteLabel;
-(TVTableView *)listView;
-(void)setListView:(TVTableView *)arg1 ;
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(id)initWithElement:(id)arg1 ;
-(void)setListDataSource:(TVLMenuListDataSource *)arg1 ;
-(TVLMenuListDataSource *)listDataSource;
-(void)setFootnoteLabel:(UILabel *)arg1 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
@end

