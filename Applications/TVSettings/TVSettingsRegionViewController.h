//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class NSArray;

@interface TVSettingsRegionViewController : TSKViewController
{
    NSArray *_filteredSectionIndexTitles;	// 8 = 0x8
}

@property(copy, nonatomic) NSArray *filteredSectionIndexTitles; // @synthesize filteredSectionIndexTitles=_filteredSectionIndexTitles;
- (void).cxx_destruct;	// IMP=0x00000001000432a8
- (id)_localeFormatter;	// IMP=0x00000001000431c4
- (void)setRegion:(id)arg1;	// IMP=0x0000000100042b6c
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100042b64
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x0000000100042b54
- (id)loadSettingGroups;	// IMP=0x00000001000422d8

@end

