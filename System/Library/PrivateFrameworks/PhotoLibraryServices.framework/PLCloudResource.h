/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSDate, PLManagedAsset, PLCloudMaster;

@interface PLCloudResource : PLManagedObject

@property (nonatomic,retain) NSString * assetUuid; 
@property (nonatomic,retain) NSDate * dateCreated; 
@property (nonatomic,retain) NSString * filePath; 
@property (assign,nonatomic) unsigned long long fileSize; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) long long height; 
@property (assign,nonatomic) BOOL isAvailable; 
@property (assign,nonatomic) BOOL isLocallyAvailable; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSString * itemIdentifier; 
@property (nonatomic,retain) NSDate * lastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * lastPrefetchDate; 
@property (assign,nonatomic) short prefetchCount; 
@property (nonatomic,retain) NSDate * prunedAt; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (assign,nonatomic) long long width; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,retain) PLCloudMaster * cloudMaster; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 forAsset:(id)arg2 withCPLResource:(id)arg3 adjusted:(BOOL)arg4 withCreationDate:(id)arg5 ;
+(id)duplicateCloudResource:(id)arg1 forAsset:(id)arg2 withFilePath:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3 ;
+(void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(BOOL)arg2 ;
+(void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3 ;
+(unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1 ;
+(BOOL)countNonLocalOriginalResourcesInLibrary:(id)arg1 outCount:(unsigned long long*)arg2 photoCount:(unsigned long long*)arg3 videoCount:(unsigned long long*)arg4 ;
+(BOOL)countOfLocalCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5 ;
+(id)entityName;
-(id)description;
-(void)setIsLocallyAvailable:(BOOL)arg1 ;
-(void)prepareForDeletion;
-(void)applyPropertiesFromCloudResource:(id)arg1 ;
-(void)_duplicatePropertiesFromCloudResource:(id)arg1 withFilePath:(id)arg2 forAssetUuid:(id)arg3 ;
-(id)cplResourceIncludeFile:(BOOL)arg1 ;
@end

