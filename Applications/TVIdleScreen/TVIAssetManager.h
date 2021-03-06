//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, TVIAssetCacheManager, TVIAssetDownloadManager, TVIMetadata, TVIMetadataLoader;

@interface TVIAssetManager : NSObject
{
    unsigned long long _mode;	// 8 = 0x8
    TVIAssetDownloadManager *_assetDownloadManager;	// 16 = 0x10
    NSMutableSet *_downloadingAssetsSet;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_nextAssetDownloadTimer;	// 32 = 0x20
    NSMapTable *_assetToCacheMap;	// 40 = 0x28
    NSCountedSet *_lockedAssets;	// 48 = 0x30
    TVIAssetCacheManager *_customerAssetCacheManager;	// 56 = 0x38
    TVIAssetCacheManager *_retailAssetCacheManager;	// 64 = 0x40
    TVIMetadataLoader *_customerMetadataLoader;	// 72 = 0x48
    TVIMetadataLoader *_retailMetadataLoader;	// 80 = 0x50
    TVIMetadata *_customerMetadata;	// 88 = 0x58
    TVIMetadata *_retailMetadata;	// 96 = 0x60
    id _screensaverPreferencesObserver;	// 104 = 0x68
    id _setupPreferencesObserver;	// 112 = 0x70
    id _internetAvailabilityObserver;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_workQ;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x0000000100006bb0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQ; // @synthesize workQ=_workQ;
@property(retain, nonatomic) id internetAvailabilityObserver; // @synthesize internetAvailabilityObserver=_internetAvailabilityObserver;
@property(retain, nonatomic) id setupPreferencesObserver; // @synthesize setupPreferencesObserver=_setupPreferencesObserver;
@property(retain, nonatomic) id screensaverPreferencesObserver; // @synthesize screensaverPreferencesObserver=_screensaverPreferencesObserver;
@property(retain, nonatomic) TVIMetadata *retailMetadata; // @synthesize retailMetadata=_retailMetadata;
@property(retain, nonatomic) TVIMetadata *customerMetadata; // @synthesize customerMetadata=_customerMetadata;
@property(retain, nonatomic) TVIMetadataLoader *retailMetadataLoader; // @synthesize retailMetadataLoader=_retailMetadataLoader;
@property(retain, nonatomic) TVIMetadataLoader *customerMetadataLoader; // @synthesize customerMetadataLoader=_customerMetadataLoader;
@property(retain, nonatomic) TVIAssetCacheManager *retailAssetCacheManager; // @synthesize retailAssetCacheManager=_retailAssetCacheManager;
@property(retain, nonatomic) TVIAssetCacheManager *customerAssetCacheManager; // @synthesize customerAssetCacheManager=_customerAssetCacheManager;
@property(retain, nonatomic) NSCountedSet *lockedAssets; // @synthesize lockedAssets=_lockedAssets;
@property(retain, nonatomic) NSMapTable *assetToCacheMap; // @synthesize assetToCacheMap=_assetToCacheMap;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *nextAssetDownloadTimer; // @synthesize nextAssetDownloadTimer=_nextAssetDownloadTimer;
@property(retain, nonatomic) NSMutableSet *downloadingAssetsSet; // @synthesize downloadingAssetsSet=_downloadingAssetsSet;
@property(retain, nonatomic) TVIAssetDownloadManager *assetDownloadManager; // @synthesize assetDownloadManager=_assetDownloadManager;
- (void).cxx_destruct;	// IMP=0x000000010000b628
- (CDUnknownBlockType)_retailMetadataRemoteURLBlock;	// IMP=0x000000010000b3bc
- (id)_retailMetadataCacheURL;	// IMP=0x000000010000b358
- (CDUnknownBlockType)_customerMetadataRemoteURLBlock;	// IMP=0x000000010000b260
- (id)_customerMetadataCacheURL;	// IMP=0x000000010000b1fc
- (void)_stopMetadataUpdates;	// IMP=0x000000010000b180
- (void)_startMetadataUpdates;	// IMP=0x000000010000ae80
- (void)_setDownloadDate:(id)arg1 forAsset:(id)arg2;	// IMP=0x000000010000ad80
- (id)_downloadDateForAsset:(id)arg1;	// IMP=0x000000010000ac48
- (void)_downloadAndCacheAsset:(id)arg1;	// IMP=0x000000010000a4c0
- (void)_downloadAndCacheNewAsset;	// IMP=0x000000010000a26c
- (void)_downloadAndCacheInitialAssets;	// IMP=0x0000000100009d74
- (id)_nextAssetToDownload;	// IMP=0x00000001000097b0
- (id)_nextAssetDownloadDate;	// IMP=0x00000001000095d0
- (void)_cancelNextAssetDownloadTimer;	// IMP=0x000000010000958c
- (void)_scheduleNextAssetDownloadOnDate:(id)arg1;	// IMP=0x0000000100009224
- (void)_scheduleNextAssetDownload;	// IMP=0x00000001000091d8
- (unsigned long long)_cachedAssetCount;	// IMP=0x0000000100009054
- (_Bool)_shouldDownloadInitialAssets;	// IMP=0x0000000100008fc8
- (_Bool)_canDownloadAssets;	// IMP=0x0000000100008d00
- (_Bool)_internetAvailable;	// IMP=0x0000000100008cec
- (_Bool)_idleScreenEnabled;	// IMP=0x0000000100008c98
- (_Bool)_setupCompleted;	// IMP=0x0000000100008c30
- (void)_handleUpdatedMetdata:(id)arg1;	// IMP=0x00000001000088e0
@property(retain, nonatomic) TVIMetadata *metadata;
@property(readonly, nonatomic) TVIAssetCacheManager *activeAssetCacheManager;
- (_Bool)isAssetLocked:(id)arg1;	// IMP=0x0000000100008658
- (_Bool)removeUnlockedAsset:(id)arg1;	// IMP=0x0000000100008474
- (_Bool)unlockAsset:(id)arg1;	// IMP=0x0000000100008210
- (id)urlForLockedAsset:(id)arg1;	// IMP=0x0000000100008044
- (_Bool)lockAsset:(id)arg1;	// IMP=0x0000000100007df8
- (id)assets;	// IMP=0x0000000100007c5c
@property unsigned long long mode;
- (void)dealloc;	// IMP=0x00000001000078a8
- (id)init;	// IMP=0x0000000100006c68

@end

