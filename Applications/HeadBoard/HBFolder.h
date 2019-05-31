//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HBRootItem.h"

#import "HBAppObserver.h"
#import "HBFolderObserver.h"

@class NSArray, NSString, UIImage;

@interface HBFolder : HBRootItem <HBAppObserver, HBFolderObserver>
{
    _Bool _recentlyCreatedWhileEditing;	// 16 = 0x10
    _Bool _iconAppIdentifiersUpdatePending;	// 17 = 0x11
    NSArray *_items;	// 24 = 0x18
    NSString *_folderIdentifier;	// 32 = 0x20
    NSArray *_applicationIdentifiers;	// 40 = 0x28
    UIImage *_folderIconImage;	// 48 = 0x30
}

@property(retain, nonatomic) UIImage *folderIconImage; // @synthesize folderIconImage=_folderIconImage;
@property(nonatomic, getter=isIconAppIdentifiersUpdatePending) _Bool iconAppIdentifiersUpdatePending; // @synthesize iconAppIdentifiersUpdatePending=_iconAppIdentifiersUpdatePending;
@property(copy, nonatomic) NSArray *applicationIdentifiers; // @synthesize applicationIdentifiers=_applicationIdentifiers;
@property(nonatomic) _Bool recentlyCreatedWhileEditing; // @synthesize recentlyCreatedWhileEditing=_recentlyCreatedWhileEditing;
@property(copy, nonatomic) NSString *folderIdentifier; // @synthesize folderIdentifier=_folderIdentifier;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;	// IMP=0x000000010004bf4c
- (void)_removeFolderIconImage;	// IMP=0x000000010004bea0
- (void)_setItems:(id)arg1 save:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x000000010004bb40
- (void)_updateForBadgeChange;	// IMP=0x000000010004b948
- (id)_currentAppIdentifiersExcludingApps:(id)arg1;	// IMP=0x000000010004b738
- (id)_currentAppIdentifiers;	// IMP=0x000000010004b6d0
- (void)_updateForItemsChange;	// IMP=0x000000010004b3ec
- (id)_validInstallableApps;	// IMP=0x000000010004b230
- (id)_validateDisplayName:(id)arg1;	// IMP=0x000000010004b184
- (void)_updateIconAppIdentifiers;	// IMP=0x000000010004b124
- (void)_setNeedsIconAppIdentifiersUpdate;	// IMP=0x000000010004b07c
- (void)itemsDidChange:(id)arg1;	// IMP=0x000000010004afa8
- (void)folderChangeNeedsSaving:(id)arg1;	// IMP=0x000000010004af9c
- (void)appProxyDidChange:(id)arg1;	// IMP=0x000000010004aedc
- (void)_notifyIconImagesDidChange;	// IMP=0x000000010004ad78
- (void)_notifyItemsDidChange;	// IMP=0x000000010004ac14
- (void)_notifyFolderChangeNeedsSaving;	// IMP=0x000000010004aab0
- (id)findAppWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010004a848
- (_Bool)isInstallPaused;	// IMP=0x000000010004a840
- (_Bool)isValidDisplayName:(id)arg1;	// IMP=0x000000010004a804
@property(readonly, copy, nonatomic) NSString *moveActionDisplayName;
- (void)setDisplayName:(id)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x000000010004a5c0
- (id)displayName;	// IMP=0x000000010004a4f8
- (id)_imageForApp:(id)arg1 withCornerRadius:(double)arg2;	// IMP=0x0000000100049cac
- (void)setIconAppIdentifiers:(id)arg1;	// IMP=0x0000000100049c18
- (id)iconImagesForZoomAnimationExcludingApps:(id)arg1;	// IMP=0x0000000100049a48
@property(readonly, copy, nonatomic) NSArray *iconImagesForZoomAnimation;
- (id)_appsExcludingApps:(id)arg1;	// IMP=0x0000000100049868
@property(readonly, copy, nonatomic) NSArray *allFolders;
- (id)allApplicationIdentifiers;	// IMP=0x00000001000494c8
@property(readonly, copy, nonatomic) NSArray *allApplications;
- (void)setItems:(id)arg1 shouldNotify:(_Bool)arg2;	// IMP=0x0000000100049260
- (void)setItems:(id)arg1 thenSave:(_Bool)arg2;	// IMP=0x000000010004923c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100049008
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_appIconNameDidChange:(id)arg1;	// IMP=0x0000000100048d24
- (void)dealloc;	// IMP=0x0000000100048cac
- (void)appProxyDidChangeNotification:(id)arg1;	// IMP=0x0000000100048c30
- (id)init;	// IMP=0x0000000100048b44
- (id)rootFolder;	// IMP=0x0000000100048adc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
