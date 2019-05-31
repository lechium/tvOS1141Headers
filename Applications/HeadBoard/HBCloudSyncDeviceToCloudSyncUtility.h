//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HBCloudSyncDeviceToCloudSyncUtility : NSObject
{
}

+ (_Bool)parentFolderForApp:(id)arg1 containsOnlyNonRestorableApps:(id)arg2;	// IMP=0x00000001000693e8
+ (_Bool)hasAllParametersForInstallation:(id)arg1;	// IMP=0x00000001000691e8
+ (_Bool)isFolderSyncable:(id)arg1;	// IMP=0x0000000100068f30
+ (_Bool)isAppSyncable:(id)arg1;	// IMP=0x0000000100068af0
+ (id)validateFolderStructureAndDiscardUnwantedItems:(id)arg1;	// IMP=0x00000001000683d4
+ (id)appsWithChangedAlternateAppIconsFromAllApps:(id)arg1 appIdsToSyncedIconNames:(id)arg2;	// IMP=0x0000000100067eec
+ (id)updateItemOrderIdsForMovedItemsInFolder:(id)arg1;	// IMP=0x00000001000676f0
+ (id)allItemsWithUpdatedOrderIdsFromFolder:(id)arg1 baseOrderId:(unsigned long long)arg2;	// IMP=0x0000000100067428
+ (_Bool)needToResetOrderingForItemsInFolder:(id)arg1;	// IMP=0x0000000100066f98
+ (_Bool)doItemOrderIdsCollideInFolder:(id)arg1;	// IMP=0x0000000100066da4
+ (id)deletedItemsListFromFolder:(id)arg1 itemsToParentMapping:(id)arg2;	// IMP=0x0000000100066b6c
+ (id)addedOrModifiedItemsFromRootFolderItems:(id)arg1 currentParentFolderLevel:(long long)arg2 itemsToParentMapping:(id)arg3;	// IMP=0x0000000100066248
+ (id)foldersWithChangedDisplayNamesFromFolder:(id)arg1 folderIdentifiersMappedToDisplayNames:(id)arg2;	// IMP=0x0000000100065fcc
+ (id)folderIdentifiersMappedToDisplayNamesFromSyncedRecords:(id)arg1 existingMapping:(id)arg2;	// IMP=0x0000000100065c2c
+ (id)folderIdentifiersMappedToDisplayNames:(id)arg1;	// IMP=0x0000000100065a10
+ (id)itemsToParentMappingFromItems:(id)arg1 currentFolderLevelIndex:(long long)arg2;	// IMP=0x0000000100065600
+ (id)itemsToParentMappingFromAddedRecords:(id)arg1 deletedRecordIDs:(id)arg2 existingItemsToParentMapping:(id)arg3;	// IMP=0x0000000100065100
+ (void)initialize;	// IMP=0x0000000100065094

@end

