//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString;

@interface MTCategory : NSManagedObject
{
}

+ (id)rootCategoriesInManagedObjectContext:(id)arg1;	// IMP=0x0000000100046cb4
+ (id)categoryUuidForName:(id)arg1 managedObjectContext:(id)arg2;	// IMP=0x00000001000466a4
+ (id)categoryForName:(id)arg1 managedObjectContext:(id)arg2 insertIfNeeded:(_Bool)arg3;	// IMP=0x00000001000464f0
- (id)podcastUuids;	// IMP=0x0000000100046d68
- (id)parentId;	// IMP=0x0000000100046b80
- (id)subCategoryIds;	// IMP=0x0000000100046aa0
- (void)addPodcastUuid:(id)arg1;	// IMP=0x00000001000468d4
@property(retain, nonatomic) NSString *parentUuid; // @dynamic parentUuid;

// Remaining properties
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long parentStoreId; // @dynamic parentStoreId;
@property(nonatomic) long long storeId; // @dynamic storeId;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
