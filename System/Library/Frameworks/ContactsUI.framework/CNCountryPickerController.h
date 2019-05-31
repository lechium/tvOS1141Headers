/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSString, UITableViewController, UILocalizedIndexedCollation, NSArray;

@interface CNCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _selectedCountryCode;
	UITableViewController* _tableViewController;
	UILocalizedIndexedCollation* _collation;
	NSArray* _countries;
	NSArray* _sections;

}

@property (nonatomic,retain) UITableViewController * tableViewController;                        //@synthesize tableViewController=_tableViewController - In the implementation block
@property (nonatomic,retain) UILocalizedIndexedCollation * collation;                            //@synthesize collation=_collation - In the implementation block
@property (nonatomic,copy) NSArray * countries;                                                  //@synthesize countries=_countries - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSString * selectedCountryCode;                                       //@synthesize selectedCountryCode=_selectedCountryCode - In the implementation block
@property (assign,nonatomic,__weak) id<CNCountryPickerControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)_loadCountryCodes;
-(void)cancelPicker:(id)arg1 ;
-(UILocalizedIndexedCollation *)collation;
-(void)setCountries:(NSArray *)arg1 ;
-(void)_configureSections;
-(void)setCollation:(UILocalizedIndexedCollation *)arg1 ;
-(NSArray *)countries;
-(NSString *)selectedCountryCode;
-(void)setSelectedCountryCode:(NSString *)arg1 ;
-(void)setTableViewController:(UITableViewController *)arg1 ;
-(UITableViewController *)tableViewController;
@end

