//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPAccessObject.h"

#import "MSASModelObserver.h"
#import "MSASPlugin.h"
#import "TVCKPushNotificationListener.h"

@class ACAccount, NSCache, NSString;

@interface TVPSharedPSAccessObject : TVPAccessObject <MSASPlugin, MSASModelObserver, TVCKPushNotificationListener>
{
    ACAccount *appleAccount;	// 8 = 0x8
    id <TVPSharedPSAccessObjectDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    NSCache *_mediaURLCache;	// 32 = 0x20
}

+ (id)delegatePluginForPersonID:(id)arg1;	// IMP=0x00000001000200b4
+ (id)accessObjectWithAppleAccount:(id)arg1;	// IMP=0x000000010001ebd8
+ (void)initialize;	// IMP=0x000000010001eb24
@property(retain, nonatomic) NSCache *mediaURLCache; // @synthesize mediaURLCache=_mediaURLCache;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <TVPSharedPSAccessObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount;
- (void).cxx_destruct;	// IMP=0x00000001000243b4
- (id)_imageTokenForMSAsset:(id)arg1;	// IMP=0x0000000100024260
- (id)_serverSideModel;	// IMP=0x0000000100024194
- (void)_didFinishRetrievingAsset:(id)arg1 inAlbum:(id)arg2 imageData:(id)arg3 error:(id)arg4;	// IMP=0x0000000100024028
- (void)_loadImageForImageTokens:(id)arg1;	// IMP=0x0000000100023a7c
- (id)_imageTokenForAssetID:(id)arg1;	// IMP=0x0000000100023974
- (id)_imageForAssetID:(id)arg1 canLoad:(_Bool *)arg2;	// IMP=0x0000000100023960
- (void)_tearDown;	// IMP=0x00000001000237cc
- (void)_runSetup;	// IMP=0x00000001000235d8
- (void)pushNotificationServerTokenDidChange:(id)arg1;	// IMP=0x00000001000235d4
- (void)pushNotificationServer:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100023420
- (void)MSASModel:(id)arg1 didFinishCheckingForChangesInfo:(id)arg2 error:(id)arg3;	// IMP=0x000000010002328c
- (void)MSASModel:(id)arg1 didFinishRetrievingAsset:(id)arg2 inAlbum:(id)arg3 error:(id)arg4;	// IMP=0x0000000100022efc
- (void)MSASModel:(id)arg1 didFinishAcceptingInvitation:(id)arg2 forAlbum:(id)arg3 error:(id)arg4;	// IMP=0x0000000100022cac
- (void)MSASModel:(id)arg1 didFindCommentChange:(id)arg2 inAssetCollection:(id)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100022984
- (void)MSASModel:(id)arg1 didFindNewComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;	// IMP=0x000000010002253c
- (void)MSASModel:(id)arg1 didFindDeletedComments:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 info:(id)arg5;	// IMP=0x00000001000220f4
- (void)MSASModel:(id)arg1 didFindLastViewedCommentDate:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100021e1c
- (void)MSASModel:(id)arg1 didMarkAssetCollection:(id)arg2 asHavingUnreadComments:(_Bool)arg3 inAlbum:(id)arg4;	// IMP=0x0000000100021b44
- (void)MSASModel:(id)arg1 didFindDeletedAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100021888
- (void)MSASModel:(id)arg1 didFindNewAssetCollections:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x000000010002160c
- (void)MSASModel:(id)arg1 didMarkAlbum:(id)arg2 asHavingUnreadContent:(_Bool)arg3;	// IMP=0x00000001000213cc
- (void)MSASModel:(id)arg1 didFindAccessControlChange:(id)arg2 inAlbum:(id)arg3;	// IMP=0x00000001000210cc
- (void)MSASModel:(id)arg1 didFindDeletedAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x0000000100020cc8
- (void)MSASModel:(id)arg1 didFindNewAccessControls:(id)arg2 inAlbum:(id)arg3 info:(id)arg4;	// IMP=0x00000001000208c4
- (void)MSASModel:(id)arg1 didFindAlbumMetadataChange:(id)arg2;	// IMP=0x00000001000206b0
- (void)MSASModel:(id)arg1 didFindDeletedAlbums:(id)arg2 info:(id)arg3;	// IMP=0x0000000100020350
- (void)MSASModel:(id)arg1 didFindNewAlbums:(id)arg2 info:(id)arg3;	// IMP=0x0000000100020134
- (void)setLastViewedCommentDate:(id)arg1 forAssetID:(id)arg2;	// IMP=0x000000010002002c
- (id)lastViewedCommentDateForAssetID:(id)arg1;	// IMP=0x000000010001ffac
- (void)removeCommentForCommentID:(id)arg1;	// IMP=0x000000010001ff40
- (void)addComment:(id)arg1 forAssetID:(id)arg2;	// IMP=0x000000010001fe48
- (id)captionForAssetID:(id)arg1;	// IMP=0x000000010001fdc8
- (id)commentsForAssetID:(id)arg1;	// IMP=0x000000010001fd48
- (void)resolveMediaURLForMSAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f714
- (_Bool)isAssetUnviewedForAssetID:(id)arg1;	// IMP=0x000000010001f69c
- (void)removeAssetForAssetID:(id)arg1;	// IMP=0x000000010001f630
- (id)latestAssetForAlbumID:(id)arg1;	// IMP=0x000000010001f4f0
- (id)assetsForAlbumID:(id)arg1;	// IMP=0x000000010001f470
- (id)assetForAssetID:(id)arg1;	// IMP=0x000000010001f3f0
- (unsigned long long)numberOfAssetsForAlbumID:(id)arg1;	// IMP=0x000000010001f334
- (void)unsubsribeFromAlbumForAlbumID:(id)arg1;	// IMP=0x000000010001f2c8
- (void)rejectInvitationForAlbumID:(id)arg1;	// IMP=0x000000010001f1e8
- (void)acceptInvitationForAlbumID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f0f0
- (void)setAlbumIsViewedForAlbumID:(id)arg1;	// IMP=0x000000010001f084
- (_Bool)isAlbumUnviewedForAlbumID:(id)arg1;	// IMP=0x000000010001f00c
- (id)accessControlsForAlbumID:(id)arg1;	// IMP=0x000000010001ef8c
- (id)invitationForAlbumID:(id)arg1;	// IMP=0x000000010001ef0c
- (void)removeAlbumForAlbumID:(id)arg1;	// IMP=0x000000010001eea0
- (id)albumForAlbumID:(id)arg1;	// IMP=0x000000010001ee20
- (id)albums;	// IMP=0x000000010001edcc
- (id)albumIDs;	// IMP=0x000000010001ed78
- (void)tearDown;	// IMP=0x000000010001ed08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

