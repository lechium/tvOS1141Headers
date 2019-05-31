/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMSongLibrary, NSMutableArray, NSMutableDictionary;

@interface FlexCloudManager : NSObject {

	FMSongLibrary* _library;
	NSMutableArray* _cloudManagedSongs;
	NSMutableDictionary* _cloudManagedSongsByUID;
	unsigned long long _retryCount;

}

@property (assign,nonatomic) unsigned long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (__weak,readonly) FMSongLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (readonly) NSMutableArray * cloudManagedSongs;                        //@synthesize cloudManagedSongs=_cloudManagedSongs - In the implementation block
@property (readonly) NSMutableDictionary * cloudManagedSongsByUID;              //@synthesize cloudManagedSongsByUID=_cloudManagedSongsByUID - In the implementation block
+(id)createCloudManager:(long long)arg1 withLibrary:(id)arg2 options:(id)arg3 ;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)initWithLibrary:(id)arg1 ;
-(FMSongLibrary *)library;
-(void)loadAssetWithID:(id)arg1 forSongID:(id)arg2 ;
-(void)cancelDownloadOfAllAssets;
-(void)_registerSongs:(id)arg1 ;
-(id)loadCachedSongs;
-(void)fetchAllSongsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)cloudManagedSongsByUID;
-(NSMutableArray *)cloudManagedSongs;
-(id)_purgeAndReturnReplacementFor:(id)arg1 ;
-(void)retryFetchAllSongs;
-(void)requestDownloadOfAsset:(id)arg1 ;
-(void)cancelDownloadOfAsset:(id)arg1 ;
-(void)requestPurgeOfAsset:(id)arg1 ;
-(unsigned long long)assetStatus:(id)arg1 ;
@end
