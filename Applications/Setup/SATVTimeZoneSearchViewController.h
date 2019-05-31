//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class NSArray, NSString, UIFocusGuide;

@interface SATVTimeZoneSearchViewController : UITableViewController
{
    NSString *_searchString;	// 8 = 0x8
    id <SATVTimeZoneSearchViewControllerDelegate> _searchDelegate;	// 16 = 0x10
    NSArray *_cities;	// 24 = 0x18
    UIFocusGuide *_focusGuide;	// 32 = 0x20
}

@property(retain, nonatomic) UIFocusGuide *focusGuide; // @synthesize focusGuide=_focusGuide;
@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property(nonatomic) __weak id <SATVTimeZoneSearchViewControllerDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;	// IMP=0x000000010003a3e8
- (void)_updateMatches;	// IMP=0x000000010003a2a0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000010003a1b4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000010003a1a8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100039ec4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100039e78
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100039e70
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100039d10
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100039c6c
- (void)viewDidLoad;	// IMP=0x00000001000399e8

@end

