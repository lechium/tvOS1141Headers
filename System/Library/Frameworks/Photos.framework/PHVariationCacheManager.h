/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSURL;

@interface PHVariationCacheManager : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSCache* _memoryCache;
	NSURL* _cacheURL;

}

@property (readonly) NSURL * cacheURL;              //@synthesize cacheURL=_cacheURL - In the implementation block
-(NSURL *)cacheURL;
-(id)_keyForVariationType:(long long)arg1 ;
-(BOOL)_performChangesForAssetIdentifier:(id)arg1 changesBlock:(/*^block*/id)arg2 ;
-(id)_fileURLWithIdentifier:(id)arg1 pathExtension:(id)arg2 ;
-(id)_readInfoForURL:(id)arg1 ;
-(id)_gatingKeyForVariationType:(long long)arg1 ;
-(BOOL)_writeInfo:(id)arg1 atURL:(id)arg2 ;
-(BOOL)_removeCachesForURL:(id)arg1 ;
-(void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(unsigned long long)arg3 ;
-(id)initWithCacheURL:(id)arg1 ;
-(id)_recipeKeyForVariationType:(long long)arg1 ;
-(id)_suggestionKeyForVariationType:(long long)arg1 ;
-(void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2 ;
-(id)analysisResultForAssetIdentifier:(id)arg1 ;
-(void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3 ;
-(id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2 ;
-(unsigned long long)evictIfNeeded;
-(BOOL)deleteCacheForAssetIdentifier:(id)arg1 ;
-(unsigned long long)purgeAll;
@end

