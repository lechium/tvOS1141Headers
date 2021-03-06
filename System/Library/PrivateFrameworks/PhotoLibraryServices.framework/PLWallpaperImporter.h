/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSArray, PLPhotoLibrary, PLManagedObjectContext;

@interface PLWallpaperImporter : NSObject {

	NSData* _wallpaperFileHash;
	NSArray* _allWallpaperURLs;
	PLPhotoLibrary* photoLibrary;

}

@property (nonatomic,retain,readonly) NSArray * allWallpaperURLs; 
@property (nonatomic,retain) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain,readonly) PLManagedObjectContext * managedObjectContext; 
+(id)posterImageURL;
+(void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(PLManagedObjectContext *)managedObjectContext;
-(void)updateAsNeeded;
-(NSArray *)allWallpaperURLs;
-(id)wallpaperFileHash;
-(void)deleteAll;
-(void)importAll;
-(id)allExistingWallpaperAssets;
-(void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setPhotoLibrary:(PLPhotoLibrary *)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
@end

