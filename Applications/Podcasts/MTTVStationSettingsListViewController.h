//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPlaylistSettingsViewController.h"

@class UIAlertController;

@interface MTTVStationSettingsListViewController : MTPlaylistSettingsViewController
{
    UIAlertController *_deleteStationAlertController;	// 8 = 0x8
}

+ (struct CGSize)podcastImageSize;	// IMP=0x00000001000a0ec0
@property(retain, nonatomic) UIAlertController *deleteStationAlertController; // @synthesize deleteStationAlertController=_deleteStationAlertController;
- (void).cxx_destruct;	// IMP=0x00000001000a16c8
- (id)newSettingsController;	// IMP=0x00000001000a14a8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a13dc
- (id)_newSeparatorHeaderView;	// IMP=0x00000001000a10d8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a1034
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001000a0fe0
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000a0f44
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000001000a0f04
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000a0ed0
- (void)deleteStation;	// IMP=0x00000001000a0c68
- (void)showDeleteStationUI;	// IMP=0x00000001000a0768
- (void)viewDidLoad;	// IMP=0x00000001000a06b4

@end

