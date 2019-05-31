//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

#import "TVSettingsScreenSaverRadioSettingGroupDelegate.h"

@class NSString;

@interface TVSettingsScreenSaverTypesViewController : TSKViewController <TVSettingsScreenSaverRadioSettingGroupDelegate>
{
}

- (id)_photoCollectionGroupTitleFormatter;	// IMP=0x0000000100034b70
- (id)_childViewControllerForPhotoCollectionGroup:(id)arg1;	// IMP=0x0000000100034ad0
- (void)radioSettingsGroup:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x0000000100034864
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100034794
- (id)loadSettingGroups;	// IMP=0x0000000100034344
- (id)title;	// IMP=0x00000001000342d4
- (void)dealloc;	// IMP=0x0000000100034200
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000100034118

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
