//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVSStarkTableViewController.h"

#import "SVSStarkItemController.h"
#import "SVSStarkTableViewControllerDelegate.h"

@class NSMutableDictionary, NSString, NSTimer, NSUUID, SAUIListItem;

@interface SVSStarkDisambiguationSnippetController : SVSStarkTableViewController <SVSStarkTableViewControllerDelegate, SVSStarkItemController>
{
    unsigned long long _preferredListItemIndex;	// 8 = 0x8
    SAUIListItem *_preferredListItem;	// 16 = 0x10
    _Bool _isGroup;	// 24 = 0x18
    NSMutableDictionary *_groupNameMapping;	// 32 = 0x20
    _Bool _isIdle;	// 40 = 0x28
    long long _interactionStyle;	// 48 = 0x30
    NSUUID *_conversationItemIdentifier;	// 56 = 0x38
    id <SVSStarkDisambiguationSnippetControllerDelegate> _delegate;	// 64 = 0x40
    NSString *_disambiguationKey;	// 72 = 0x48
    NSTimer *_idleTimer;	// 80 = 0x50
}

@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_isIdle) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(nonatomic) __weak id <SVSStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
- (void).cxx_destruct;	// IMP=0x0000000100045f80
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100045e38
- (id)backgroundColorForTableViewCells;	// IMP=0x0000000100045d84
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;	// IMP=0x0000000100045bf4
- (void)didPressShowMore;	// IMP=0x0000000100045b98
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100045afc
- (id)newShowMoreCellWithIdentifier:(id)arg1;	// IMP=0x0000000100045a90
- (Class)showMoreCellClass;	// IMP=0x0000000100045a7c
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000001000456d8
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000010004567c
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100045650
- (id)tableCellIdentifiersAndClasses;	// IMP=0x00000001000455c8
- (_Bool)isActive;	// IMP=0x00000001000455a8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010004554c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000454fc
- (void)_createNewIdleTimer;	// IMP=0x000000010004547c
- (void)_resetIdleTimer;	// IMP=0x0000000100045448
- (void)_clearIdleTimer;	// IMP=0x000000010004540c
- (void)_idleTimerFired:(id)arg1;	// IMP=0x00000001000453f0
- (void)autodisambiguate;	// IMP=0x00000001000453c4
- (_Bool)shouldAutodisambiguate;	// IMP=0x00000001000453ac
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 showHeader:(_Bool)arg3;	// IMP=0x0000000100044bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

