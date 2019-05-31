//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class MTManagedObjectContext, NSManagedObjectModel;

@interface MTDB : MTSingleton
{
    NSManagedObjectModel *_managedObjectModel;	// 8 = 0x8
    MTManagedObjectContext *_mainQueueContext;	// 16 = 0x10
    MTManagedObjectContext *_privateQueueContext;	// 24 = 0x18
    MTManagedObjectContext *_carPlayContext;	// 32 = 0x20
    MTManagedObjectContext *_storeContext;	// 40 = 0x28
    MTManagedObjectContext *_importContext;	// 48 = 0x30
    MTManagedObjectContext *_resetableImportContext;	// 56 = 0x38
}

+ (void)setDataVersion:(long long)arg1;	// IMP=0x00000001001a14d0
+ (long long)dataVersion;	// IMP=0x00000001001a1474
+ (void)setCorrupt:(_Bool)arg1;	// IMP=0x00000001001a141c
+ (_Bool)isCorrupt;	// IMP=0x00000001001a13c0
+ (_Bool)isSupportedUrlString:(id)arg1;	// IMP=0x00000001001a0fa0
+ (id)fetchManagedObjectModelFromDisk;	// IMP=0x00000001001a0ee8
+ (id)libraryWalPath;	// IMP=0x00000001001a0e80
+ (id)libraryShmPath;	// IMP=0x00000001001a0e18
+ (id)libraryPath;	// IMP=0x00000001001a0db0
+ (_Bool)canExtensionOpenDatabase;	// IMP=0x000000010019fba4
@property(retain, nonatomic) MTManagedObjectContext *resetableImportContext; // @synthesize resetableImportContext=_resetableImportContext;
@property(retain, nonatomic) MTManagedObjectContext *importContext; // @synthesize importContext=_importContext;
@property(retain, nonatomic) MTManagedObjectContext *storeContext; // @synthesize storeContext=_storeContext;
@property(retain, nonatomic) MTManagedObjectContext *carPlayContext; // @synthesize carPlayContext=_carPlayContext;
@property(retain, nonatomic) MTManagedObjectContext *privateQueueContext; // @synthesize privateQueueContext=_privateQueueContext;
@property(retain, nonatomic) MTManagedObjectContext *mainQueueContext; // @synthesize mainQueueContext=_mainQueueContext;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void).cxx_destruct;	// IMP=0x00000001001a15ec
- (void)mergeFromContextDidSave:(id)arg1;	// IMP=0x00000001001a0bf0
- (void)stopObservingLibraryChanges;	// IMP=0x00000001001a0b90
- (void)startObservingLibraryChanges;	// IMP=0x00000001001a0b28
- (void)resetPersistentStore;	// IMP=0x00000001001a09dc
- (id)persistentStoreUuid;	// IMP=0x00000001001a08ac
- (id)_peristentStoreOptions;	// IMP=0x00000001001a07a4
- (id)_createPersistentStoreCoordinator;	// IMP=0x00000001001a063c
- (id)mainOrPrivateContext;	// IMP=0x000000010019fd9c
- (id)init;	// IMP=0x000000010019fd44

@end
