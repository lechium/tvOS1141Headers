//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSettingsIPEntryViewController.h"

#import "TSKSettingItemEditingController.h"
#import "TVSettingsIPEntryViewControllerDelegate.h"

@class NSString, TSKSettingItem;

@interface TVSettingsIPEditingViewController : TVSettingsIPEntryViewController <TVSettingsIPEntryViewControllerDelegate, TSKSettingItemEditingController>
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void).cxx_destruct;	// IMP=0x0000000100028670
- (void)_menuPressed;	// IMP=0x00000001000285a4
- (id)_promptText;	// IMP=0x0000000100028534
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000284ac
- (void)viewDidLoad;	// IMP=0x00000001000282c8
- (id)title;	// IMP=0x00000001000282c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100028200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

