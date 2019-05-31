/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate, OS_dispatch_queue;
@class NSObject, PLPTPdFormatConversionManager, NSString, NSSet, PLPhotoLibrary, NSMutableSet, NSFileManager, PLManagedObjectContext, PFMediaCapabilities;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject*<PhotoLibraryPTPDelegate> _delegate;
	PLPTPdFormatConversionManager* _formatConversionManager;
	NSString* _firstDCIMFolderServiced;
	NSSet* _availableAssetIDs;
	PLPhotoLibrary* _photoLibrary;
	int _libraryStatus;
	NSMutableSet* _ptpDeletedAssets;
	NSObject*<OS_dispatch_queue> availableAssetsQueue;
	NSFileManager* fileManager;

}

@property (retain,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSFileManager * fileManager; 
@property (retain) PFMediaCapabilities * peerMediaCapabilities; 
@property (assign,nonatomic,__weak) NSObject*<PhotoLibraryPTPDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<PhotoLibraryPTPDelegate>)delegate;
-(void)setDelegate:(NSObject*<PhotoLibraryPTPDelegate>)arg1 ;
-(void)dealloc;
-(PLManagedObjectContext *)managedObjectContext;
-(NSFileManager *)fileManager;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 adjustedAssetIDs:(id)arg5 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)setPeerMediaCapabilities:(PFMediaCapabilities *)arg1 ;
-(void)_registerForFirstUnlockNotification;
-(void)handlePhotoLibraryAvailableNotification;
-(PFMediaCapabilities *)peerMediaCapabilities;
-(id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1 ;
-(id)_ptpAssetEnumeratorAllAssets;
-(id)_ptpThumbnailForOriginalWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3 ;
-(id)_performResultBlockAndWait:(/*^block*/id)arg1 ;
-(void)_expungeAsset:(id)arg1 withReason:(id)arg2 ;
-(id)_performResultTransactionAndWait:(/*^block*/id)arg1 ;
-(id)_ptpAssetsForAssetWithID:(id)arg1 ;
-(id)_ptpInformationForAllAssets;
-(id)ptpInformationForFilesInDirectory:(id)arg1 ;
-(id)_ptpOriginalExifDataForAssetWithID:(id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(id)ptpThumbnailForAssetHandle:(id)arg1 size:(CGSize)arg2 compressionQuality:(float)arg3 ;
-(void)markSignpostForAsset:(id)arg1 endMarker:(BOOL)arg2 adjusted:(BOOL)arg3 arg4:(unsigned long long)arg4 ;
-(CGSize)_validateSize:(CGSize)arg1 ;
-(id)dataForThumbnailFileAtPath:(id)arg1 rotatedToOrientation:(long long)arg2 size:(CGSize)arg3 compressionQuality:(float)arg4 ;
-(id)_generateThumbnailForAsset:(id)arg1 imagePath:(id)arg2 size:(CGSize)arg3 compressionQuality:(float)arg4 ;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(id)dataByJPEGCompressingCGImage:(CGImageRef)arg1 toLengthLimit:(long long)arg2 initialCompressionQuality:(float)arg3 size:(CGSize)arg4 orientation:(long long)arg5 ;
-(BOOL)_ptpDeletePhotoWithAssetID:(id)arg1 andExtension:(id)arg2 ;
-(BOOL)ptpCanDeleteFiles;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)_ptpInformationForPhotoWithObjectID:(id)arg1 ;
-(id)_allAssetObjectIDs;
-(id)albumHandles;
-(id)infoForAlbum:(NSObject*)arg1 ;
-(id)associationsInAlbum:(NSObject*)arg1 ;
-(id)assetsInAssociation:(NSObject*)arg1 ;
-(id)infoForAsset:(NSObject*)arg1 ;
-(void)deleteAsset:(id)arg1 ;
-(void)ptpEnumerateAllAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)ptpAssetReaderForAssetHandle:(id)arg1 ;
-(id)ptpImagePropertiesForAssetHandle:(id)arg1 ;
-(BOOL)ptpDeletePhotoForAssetHandle:(id)arg1 ;
-(void)ptpEnumerateAssetsWithPrimaryKeys:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)libraryIsAvailable;
-(void)enumeratePTPInformationForFilesInDirectory:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)ptpExifDataForAssetHandle:(id)arg1 ;
-(id)ptpExifDataForPhotoWithKey:(id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(id)arg1 ;
-(BOOL)ptpDeletePhotoWithKey:(id)arg1 andExtension:(id)arg2 ;
-(void)setPtpDelegate:(id)arg1 ;
-(id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
@end

