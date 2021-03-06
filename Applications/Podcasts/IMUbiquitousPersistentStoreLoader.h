//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface IMUbiquitousPersistentStoreLoader : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSURL *_persistentStoreURL;	// 16 = 0x10
    NSString *_storeName;	// 24 = 0x18
    NSString *_managedObjectModelName;	// 32 = 0x20
    _Bool _isUbiquitous;	// 40 = 0x28
    NSString *_ubiquitousStoreIdentifier;	// 48 = 0x30
    NSString *_ubiquitousContentName;	// 56 = 0x38
    NSString *_ubiquitousPeerIDOverride;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *ubiquitousPeerIDOverride; // @synthesize ubiquitousPeerIDOverride=_ubiquitousPeerIDOverride;
@property(retain, nonatomic) NSString *ubiquitousContentName; // @synthesize ubiquitousContentName=_ubiquitousContentName;
@property(retain, nonatomic) NSString *ubiquitousStoreIdentifier; // @synthesize ubiquitousStoreIdentifier=_ubiquitousStoreIdentifier;
@property(nonatomic) _Bool isUbiquitous; // @synthesize isUbiquitous=_isUbiquitous;
@property(retain, nonatomic) NSString *managedObjectModelName; // @synthesize managedObjectModelName=_managedObjectModelName;
@property(retain, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(retain, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSURL *storeURL; // @dynamic storeURL;
- (id)ubiquitousContainerURL;	// IMP=0x0000000100249038
- (void)deletePersistentStore;	// IMP=0x0000000100248f6c
- (_Bool)storeFileExists;	// IMP=0x0000000100248f0c
- (id)addPersistentStoreToPersistentStoreCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5;	// IMP=0x0000000100248b38
- (id)addPersistentStoreToPersistentStoreCoordinator:(id)arg1 includeUbiquitousOptions:(_Bool)arg2;	// IMP=0x00000001002488fc
- (void)dealloc;	// IMP=0x000000010024881c
- (id)init;	// IMP=0x000000010024878c
- (id)initWithPersistentStoreURL:(id)arg1;	// IMP=0x0000000100248724
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001002486bc

@end

