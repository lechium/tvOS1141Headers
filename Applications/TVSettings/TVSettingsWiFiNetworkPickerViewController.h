//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKTableViewController.h"

#import "TSKSettingItemEditingControllerDelegate.h"
#import "TVSWiFiNetworkConnectionOperationDelegate.h"

@class NSString, TSKPreviewViewController, TSKTextInputViewController, TSKWiFiNetworkDataSource;

@interface TVSettingsWiFiNetworkPickerViewController : TSKTableViewController <TSKSettingItemEditingControllerDelegate, TVSWiFiNetworkConnectionOperationDelegate>
{
    TSKPreviewViewController *_previewController;	// 8 = 0x8
    CDUnknownBlockType _passwordEntryBlock;	// 16 = 0x10
    TSKWiFiNetworkDataSource *_dataSource;	// 24 = 0x18
    TSKTextInputViewController *_networkNameController;	// 32 = 0x20
    TSKTextInputViewController *_passwordController;	// 40 = 0x28
}

@property(nonatomic) __weak TSKTextInputViewController *passwordController; // @synthesize passwordController=_passwordController;
@property(nonatomic) __weak TSKTextInputViewController *networkNameController; // @synthesize networkNameController=_networkNameController;
@property(retain, nonatomic) TSKWiFiNetworkDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100044a60
- (void)_cancelOperation;	// IMP=0x000000010004496c
- (void)_showScanningActivityIndicator;	// IMP=0x0000000100044758
- (void)_showConnectingActivityIndicator;	// IMP=0x0000000100044544
- (void)_showErrorMessageWithError:(id)arg1;	// IMP=0x0000000100043f6c
- (void)_showNetworkDetail;	// IMP=0x0000000100043eb0
- (void)_showPasswordInputControllerForNetwork:(id)arg1;	// IMP=0x0000000100043c00
- (void)_showNetworkNameInputController;	// IMP=0x0000000100043a04
- (void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2;	// IMP=0x00000001000439a0
- (void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3;	// IMP=0x0000000100043990
- (void)operation:(id)arg1 didConnectToNetwork:(id)arg2;	// IMP=0x0000000100043934
- (void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000438c0
- (void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3;	// IMP=0x00000001000438b0
- (void)editingController:(id)arg1 didCancelForSettingItem:(id)arg2;	// IMP=0x00000001000437f4
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x000000010004372c
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000001000436d4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000435b8
- (id)title;	// IMP=0x0000000100043548
- (void)viewDidLoad;	// IMP=0x000000010004333c
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100043304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
