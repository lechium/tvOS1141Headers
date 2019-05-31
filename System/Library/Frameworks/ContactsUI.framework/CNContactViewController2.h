/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CNContactPropertyModelDelegate.h>
#import <libobjc.A.dylib/CNContactPropertyRemoteModelDelegate.h>

@class CNContactViewHostViewController, UITableView, CNContactPropertyModel, NSArray, NSString;

@interface CNContactViewController2 : UIViewController <UITableViewDataSource, UITableViewDelegate, CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate> {

	BOOL _ignoreViewWillBePresented;
	CNContactViewHostViewController* _remoteHostViewController;
	UITableView* _tableView;
	CNContactPropertyModel* _model;

}

@property (nonatomic,retain) CNContactViewHostViewController * remoteHostViewController;              //@synthesize remoteHostViewController=_remoteHostViewController - In the implementation block
@property (retain) UITableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (retain) CNContactPropertyModel * model;                                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id displayedObject; 
@property (nonatomic,retain) NSArray * displayedProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel:(id)arg1 ;
-(void)setModel:(CNContactPropertyModel *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_isDelayingPresentation;
-(void)_endDelayingPresentation;
-(CNContactPropertyModel *)model;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)_prepareViewController;
-(void)_setupViewController;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(BOOL)outOfProcess;
-(NSArray *)displayedProperties;
-(id)displayedObject;
-(CNContactViewHostViewController *)remoteHostViewController;
-(void)setRemoteHostViewController:(CNContactViewHostViewController *)arg1 ;
-(void)pendingRemoteTransactions:(id)arg1 ;
-(void)setDisplayedObject:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)pendingTransactions;
@end

