/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIKeyboardAutoRespondingScrollViewController.h>
#import <UIKit/UITableViewFocusDelegateLegacy.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIAutoRespondingScrollViewControllerKeyboardSupport, UITableViewDataSource, _UIFilteredDataSource, UITableView, UIRefreshControl, NSString;

@interface UITableViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UITableViewDelegate, UITableViewDataSource> {

	long long _tableViewStyle;
	UIAutoRespondingScrollViewControllerKeyboardSupport* _keyboardSupport;
	UITableViewDataSource* _staticDataSource;
	SCD_Struct_UI47 _tableViewControllerFlags;
	_UIFilteredDataSource* _filteredDataSource;
	long long _filteredDataType;

}

@property (setter=_setStaticDataSource:,getter=_staticDataSource,nonatomic,retain) UITableViewDataSource * staticDataSource; 
@property (nonatomic,retain) UITableView * tableView; 
@property (assign,nonatomic) BOOL clearsSelectionOnViewWillAppear; 
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_scrollView,nonatomic,retain,readonly) UIScrollView*<_UIKeyboardAutoRespondingScrollView> scrollView; 
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2 ;
-(UIRefreshControl *)refreshControl;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(id)_scrollView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(id)initWithStyle:(long long)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(BOOL)arg1 ;
-(id)_existingTableView;
-(void)_applyDefaultDataSourceToTable:(id)arg1 ;
-(void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1 ;
-(long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1 ;
-(BOOL)clearsSelectionOnViewWillAppear;
-(long long)_filteredDataType;
-(void)_setFilteredDataType:(long long)arg1 ;
-(id)_staticDataSource;
-(void)_setStaticDataSource:(id)arg1 ;
@end

