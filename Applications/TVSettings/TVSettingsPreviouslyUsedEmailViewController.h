//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSettingsPreviouslyUsedEmailFacade, UIBarButtonItem;

@interface TVSettingsPreviouslyUsedEmailViewController : TSKViewController
{
    TVSettingsPreviouslyUsedEmailFacade *_emailFacade;	// 8 = 0x8
    UIBarButtonItem *_editButtonItem;	// 16 = 0x10
    UIBarButtonItem *_doneButtonItem;	// 24 = 0x18
}

@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) TVSettingsPreviouslyUsedEmailFacade *emailFacade; // @synthesize emailFacade=_emailFacade;
- (void).cxx_destruct;	// IMP=0x000000010004d58c
- (void)_clearAll;	// IMP=0x000000010004d14c
- (void)_showDeleteConfirmationForItem:(id)arg1;	// IMP=0x000000010004cbac
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000010004cb44
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000010004cb1c
- (void)clearAll;	// IMP=0x000000010004cb10
- (void)willResumeFromBackground;	// IMP=0x000000010004cb04
- (id)title;	// IMP=0x000000010004ca94
- (id)loadSettingGroups;	// IMP=0x000000010004c6c4
- (void)_updateNavigationItem;	// IMP=0x000000010004c568
- (void)toggleEditMode:(id)arg1;	// IMP=0x000000010004c3e4
- (void)dealloc;	// IMP=0x000000010004c35c
- (void)didReceiveMemoryWarning;	// IMP=0x000000010004c328
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010004c214
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004c1c0
- (id)initWithStyle:(long long)arg1;	// IMP=0x000000010004c0f4

@end
