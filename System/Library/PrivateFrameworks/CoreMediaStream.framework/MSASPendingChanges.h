/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface MSASPendingChanges : NSObject {

	NSMutableSet* _pendingAlbumGUIDsWithKeyValueChanges;
	NSMutableSet* _pendingAlbumChanges;
	NSMutableSet* _pendingAlbumGUIDsWithSharingInfoChanges;
	NSMutableDictionary* _pendingAlbumGUIDToAssetCollections;

}

@property (nonatomic,retain) NSMutableSet * pendingAlbumGUIDsWithKeyValueChanges;                   //@synthesize pendingAlbumGUIDsWithKeyValueChanges=_pendingAlbumGUIDsWithKeyValueChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAlbumChanges;                                    //@synthesize pendingAlbumChanges=_pendingAlbumChanges - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingAlbumGUIDsWithSharingInfoChanges;                //@synthesize pendingAlbumGUIDsWithSharingInfoChanges=_pendingAlbumGUIDsWithSharingInfoChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingAlbumGUIDToAssetCollections;              //@synthesize pendingAlbumGUIDToAssetCollections=_pendingAlbumGUIDToAssetCollections - In the implementation block
-(id)initWithSyncedKeyValueChangesForAlbumGUIDS:(id)arg1 albumChanges:(id)arg2 accessControlChangesForAlbumGUIDS:(id)arg3 ;
-(void)removePendingKeyValueChangesForAlbumGUID:(id)arg1 ;
-(void)addPendingChangesForAlbumGUID:(id)arg1 ;
-(void)removePendingChangesForAlbumGUID:(id)arg1 ;
-(void)addPendingAssetCollectionChanges:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)removePendingAssetCollection:(id)arg1 forAlbumGUID:(id)arg2 ;
-(void)removePendingSharingInfoChangesForAlbumGUID:(id)arg1 ;
-(BOOL)hasPendingChanges;
-(NSMutableSet *)pendingAlbumGUIDsWithKeyValueChanges;
-(void)setPendingAlbumGUIDsWithKeyValueChanges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingAlbumChanges;
-(void)setPendingAlbumChanges:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingAlbumGUIDsWithSharingInfoChanges;
-(void)setPendingAlbumGUIDsWithSharingInfoChanges:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)pendingAlbumGUIDToAssetCollections;
-(void)setPendingAlbumGUIDToAssetCollections:(NSMutableDictionary *)arg1 ;
@end

