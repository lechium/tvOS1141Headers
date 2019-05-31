//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMUbiquitousPersistentStoreLoader, NSManagedObjectModel, NSMutableDictionary, NSObject<OS_dispatch_source>, NSPersistentStore, NSPersistentStoreCoordinator, NSString;

@interface IMUbiquitousDataProvider : NSObject
{
    NSManagedObjectModel *_managedObjectModel;	// 8 = 0x8
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 16 = 0x10
    NSPersistentStore *_currentPersistentStore;	// 24 = 0x18
    int _currentPersistentStoreType;	// 32 = 0x20
    IMUbiquitousPersistentStoreLoader *_bringUpPersistentStoreLoader;	// 40 = 0x28
    IMUbiquitousPersistentStoreLoader *_localPersistentStoreLoader;	// 48 = 0x30
    IMUbiquitousPersistentStoreLoader *_ubiquityPersistentStoreLoader;	// 56 = 0x38
    long long _onceToken;	// 64 = 0x40
    _Bool _ubiquityEnabled;	// 72 = 0x48
    _Bool _metadataDictionaryDirty;	// 73 = 0x49
    NSObject<OS_dispatch_source> *_ubiquitousStoreRetryTimer;	// 80 = 0x50
    NSMutableDictionary *_metadataDictionary;	// 88 = 0x58
}

+ (id)ubiquityUUIDUserDefaultsKey;	// IMP=0x0000000100245164
+ (id)managedObjectModelName;	// IMP=0x000000010024419c
+ (_Bool)ubiquityDebug;	// IMP=0x0000000100242920
+ (id)ubiquityQueue;	// IMP=0x00000001002422bc
+ (void)initialize;	// IMP=0x000000010024226c
@property(nonatomic) _Bool metadataDictionaryDirty; // @synthesize metadataDictionaryDirty=_metadataDictionaryDirty;
@property(retain, nonatomic) NSMutableDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *ubiquityPersistentStoreLoader; // @synthesize ubiquityPersistentStoreLoader=_ubiquityPersistentStoreLoader;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *localPersistentStoreLoader; // @synthesize localPersistentStoreLoader=_localPersistentStoreLoader;
@property(retain, nonatomic) IMUbiquitousPersistentStoreLoader *bringUpPersistentStoreLoader; // @synthesize bringUpPersistentStoreLoader=_bringUpPersistentStoreLoader;
@property int currentPersistentStoreType; // @synthesize currentPersistentStoreType=_currentPersistentStoreType;
@property(nonatomic, getter=isUbiquityEnabled) _Bool ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
@property(retain, nonatomic) NSPersistentStore *currentPersistentStore; // @synthesize currentPersistentStore=_currentPersistentStore;
@property(nonatomic) NSObject<OS_dispatch_source> *ubiquitousStoreRetryTimer; // @synthesize ubiquitousStoreRetryTimer=_ubiquitousStoreRetryTimer;
@property(retain) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(retain, nonatomic) NSString *remoteUbiquityUUID; // @dynamic remoteUbiquityUUID;
@property(retain, nonatomic) NSString *localUbiquityUUID; // @dynamic localUbiquityUUID;
- (id)ubiquityUUIDFileName;	// IMP=0x0000000100244b48
- (id)ubiquityUUIDFileURL;	// IMP=0x0000000100244a74
- (_Bool)isUbiquityUUIDValid;	// IMP=0x00000001002449e0
- (void)generateUbiquityUUID;	// IMP=0x0000000100244934
- (void)scheduleRetryTimerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010024476c
- (void)prefligthUbiquityBaseline:(CDUnknownBlockType)arg1;	// IMP=0x0000000100244208
- (_Bool)isEnabled;	// IMP=0x0000000100244134
- (void)cacheMetadataDictionary;	// IMP=0x0000000100244060
- (void)removePersistentStores;	// IMP=0x0000000100243e94
- (void)migrateFromPersistentStoreCoordinator:(id)arg1 toPersistentStoreCoordinator:(id)arg2;	// IMP=0x0000000100243e90
- (void)loadUbiquityPersistentStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100243900
- (void)loadBringUpPersistentStore;	// IMP=0x00000001002436d8
- (void)loadLocalPersistentStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100243634
- (void)loadPersistentStoreCoordinator;	// IMP=0x00000001002434dc
- (void)loadManagedObjectModel;	// IMP=0x000000010024332c
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x00000001002432e8
- (void)notifyAnnotationsUpdated:(id)arg1;	// IMP=0x0000000100243194
- (id)metadataObjectForKey:(id)arg1;	// IMP=0x0000000100243018
- (void)setMetadataObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100242e74
- (void)incrementGeneration:(id)arg1;	// IMP=0x0000000100242de4
- (id)generationValue:(id)arg1;	// IMP=0x0000000100242d70
- (void)setGenerationValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100242d64
- (void)updateCurrentPersistentStore;	// IMP=0x0000000100242d60
- (void)loadCoreData;	// IMP=0x0000000100242c88
- (id)newManagedObjectContext;	// IMP=0x0000000100242be4
- (_Bool)saveManagedObjectContext:(id)arg1;	// IMP=0x0000000100242a1c
- (_Bool)isUploadingUbiquitousLogs;	// IMP=0x0000000100242650
- (_Bool)isReady;	// IMP=0x0000000100242628
- (void)reset;	// IMP=0x00000001002425ec
- (void)dealloc;	// IMP=0x0000000100242450
- (id)initWithPersistentStoreURL:(id)arg1;	// IMP=0x00000001002423d4
- (id)initWithUbiquityEnabled:(_Bool)arg1;	// IMP=0x0000000100242358
- (id)init;	// IMP=0x00000001002422c8

@end
