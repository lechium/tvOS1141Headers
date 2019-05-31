//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "MTSettingsControllerDelegate.h"

@class MTSettingsController, NSString;

@interface MTGenericSettingsViewController : UITableViewController <MTSettingsControllerDelegate>
{
    MTSettingsController *_settingsController;	// 8 = 0x8
}

+ (double)rowHeight;	// IMP=0x0000000100123a9c
+ (id)cellIdentifierForSettingType:(int)arg1;	// IMP=0x00000001001239e8
+ (id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2;	// IMP=0x0000000100123890
+ (id)settingFont;	// IMP=0x0000000100123870
+ (id)footerFont;	// IMP=0x000000010012384c
+ (id)selectedColor;	// IMP=0x0000000100123838
@property(retain, nonatomic) MTSettingsController *settingsController; // @synthesize settingsController=_settingsController;
- (void).cxx_destruct;	// IMP=0x0000000100126944
- (_Bool)_radioButtonTintsTextColorOnSelection;	// IMP=0x000000010012692c
- (void)syncControllerOperationCompleted:(id)arg1;	// IMP=0x0000000100126928
- (void)textSettingChanged:(id)arg1 value:(id)arg2;	// IMP=0x00000001001267a8
- (void)switchSettingChanged:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000001001266c8
- (void)optionSettingChanged:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x00000001001265e8
- (void)settingsController:(id)arg1 updatedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3;	// IMP=0x0000000100126478
- (void)settingsController:(id)arg1 removedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3;	// IMP=0x0000000100126314
- (void)settingsController:(id)arg1 removedGroupAtIndex:(long long)arg2;	// IMP=0x0000000100126298
- (void)settingsController:(id)arg1 addedGroup:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000010012621c
- (void)settingsController:(id)arg1 reloadedGroupWithIdentifier:(id)arg2;	// IMP=0x00000001001260dc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100125f7c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100125e9c
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100125700
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001001255c0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100125364
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100125268
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100125210
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000100124fc8
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000100124e2c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100124e24
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100124e18
- (id)optionsTableViewControllerWithOption:(id)arg1;	// IMP=0x0000000100124e10
- (id)newCellForDescriptionType:(int)arg1 inGroupWithIdentifier:(id)arg2;	// IMP=0x0000000100124b2c
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4;	// IMP=0x0000000100124410
- (void)setCell:(id)arg1 enabled:(_Bool)arg2 withDescription:(id)arg3;	// IMP=0x0000000100124294
- (id)indexPathForSetting:(id)arg1;	// IMP=0x0000000100124048
- (id)settingAtIndexPath:(id)arg1;	// IMP=0x0000000100123ef0
- (void)updateRowHeight;	// IMP=0x0000000100123db0
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000100123d5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100123cec
- (void)viewDidLoad;	// IMP=0x0000000100123c94
- (void)dealloc;	// IMP=0x0000000100123c1c
- (id)init;	// IMP=0x0000000100123b24
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100123b18
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100123b0c
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100123b00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

