//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMCloudSyncTransactionProcessing.h"

@class AEAnnotationManagedObjectContext, AEAnnotationProvider, NSArray, NSDictionary, NSString;

@interface AEAnnotationCloudSyncProcessor : NSObject <IMCloudSyncTransactionProcessing>
{
    id <AEAnnotationCloudSyncProcessorDataSource> _dataSource;	// 8 = 0x8
    AEAnnotationProvider *_annotationProvider;	// 16 = 0x10
    NSArray *_keyGroups;	// 24 = 0x18
    NSDictionary *_sentMaxModificationDates;	// 32 = 0x20
    AEAnnotationManagedObjectContext *_moc;	// 40 = 0x28
}

@property(retain, nonatomic) AEAnnotationManagedObjectContext *moc; // @synthesize moc=_moc;
@property(retain, nonatomic) NSDictionary *sentMaxModificationDates; // @synthesize sentMaxModificationDates=_sentMaxModificationDates;
@property(retain, nonatomic) NSArray *keyGroups; // @synthesize keyGroups=_keyGroups;
@property(retain, nonatomic) AEAnnotationProvider *annotationProvider; // @synthesize annotationProvider=_annotationProvider;
@property(nonatomic) id <AEAnnotationCloudSyncProcessorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)_dataSourceShouldGetKeysForKeyGroup:(long long)arg1;	// IMP=0x000000010025f5e4
- (void)_dataSourceSetVersion:(id)arg1 maxModificationDate:(id)arg2 forAssetID:(id)arg3 inKeyGroup:(long long)arg4;	// IMP=0x000000010025f580
- (id)_dataSourceVersionForAssetID:(id)arg1 inKeyGroup:(long long)arg2;	// IMP=0x000000010025f534
- (id)_dataSourceMaxModificationDatesDictionaryForKeyGroup:(long long)arg1;	// IMP=0x000000010025f4f8
- (id)_dataSourceAssetIDsForKeyGroup:(long long)arg1;	// IMP=0x000000010025f4bc
- (id)_dataSourceAnnotationTypesForKeyGroup:(long long)arg1;	// IMP=0x000000010025f480
- (id)_dataSourceKeyPrefixForKeyGroup:(long long)arg1;	// IMP=0x000000010025f444
- (long long)_dataSourceNumberOfKeyGroups;	// IMP=0x000000010025f410
- (id)_assetsForAssetWithDirtyAnnotationsOfTypes:(id)arg1 inAssetList:(id)arg2;	// IMP=0x000000010025f1dc
- (void)_acknowledgeMergingServerAnnotations:(id)arg1 forAssetID:(id)arg2;	// IMP=0x000000010025efa8
- (_Bool)_mergeNode:(id)arg1 keyGroup:(id)arg2;	// IMP=0x000000010025ed90
- (void)_populateValueForNode:(id)arg1 keyGroup:(id)arg2;	// IMP=0x000000010025eb34
- (id)_versionForKey:(id)arg1;	// IMP=0x000000010025eaa8
- (id)_keysForSetTransaction;	// IMP=0x000000010025e820
- (id)_keysForGetTransaction;	// IMP=0x000000010025e61c
- (id)_keyGroupForKey:(id)arg1;	// IMP=0x000000010025e4cc
- (void)_saveMocsIfHaveChanges;	// IMP=0x000000010025e45c
- (void)_loadKeyGroups;	// IMP=0x000000010025e2bc
- (id)keysForTransaction:(id)arg1;	// IMP=0x000000010025e204
- (void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 version:(id)arg4 mismatch:(_Bool)arg5 finishedBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000010025e0d0
- (id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id *)arg3;	// IMP=0x000000010025dfa8
- (id)versionForGetTransaction:(id)arg1 key:(id)arg2;	// IMP=0x000000010025df98
- (id)assetIDForKey:(id)arg1 inKeyGroup:(long long)arg2;	// IMP=0x000000010025df34
- (id)keyForAssetID:(id)arg1 inKeyGroup:(long long)arg2;	// IMP=0x000000010025ded0
- (_Bool)canProcessKey:(id)arg1;	// IMP=0x000000010025deac
- (void)dealloc;	// IMP=0x000000010025ddf0
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000010025dd88
- (id)init;	// IMP=0x000000010025dcf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

