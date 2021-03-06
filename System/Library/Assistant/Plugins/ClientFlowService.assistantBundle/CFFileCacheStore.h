/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache, NSMutableDictionary;

@interface CFFileCacheStore : NSObject {

	NSObject*<OS_dispatch_queue> _cacheFileQueue;
	NSCache* _scriptsMemoryCacheWithDomainAsKey;
	NSMutableDictionary* _scriptChecksumDictionary;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheFileQueue;                 //@synthesize cacheFileQueue=_cacheFileQueue - In the implementation block
@property (nonatomic,retain) NSCache * scriptsMemoryCacheWithDomainAsKey;                 //@synthesize scriptsMemoryCacheWithDomainAsKey=_scriptsMemoryCacheWithDomainAsKey - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * scriptChecksumDictionary;              //@synthesize scriptChecksumDictionary=_scriptChecksumDictionary - In the implementation block
+(id)sharedStore;
+(BOOL)cachingEnabled;
+(id)cacheFilePathForDomain:(id)arg1 ;
+(id)scriptCheckSumDictionaryFromFileSystem;
+(id)cachePath;
-(id)init;
-(void)updateScriptCacheForFlowScript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeScripts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cacheScriptForDomain:(id)arg1 script:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheScriptForDomain:(id)arg1 script:(id)arg2 shouldCacheInMemory:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(NSCache *)scriptsMemoryCacheWithDomainAsKey;
-(NSMutableDictionary *)scriptChecksumDictionary;
-(id)updatedScriptForFlowScript:(id)arg1 ;
-(BOOL)scriptExistsForDomain:(id)arg1 ;
-(id)scriptForDomain:(id)arg1 scriptLoadType:(long long*)arg2 ;
-(BOOL)removeScriptWithIdentifier:(id)arg1 ;
-(void)createCacheDirectoryIfNeeded;
-(void)populateChecksumDictionary;
-(void)cacheScriptForDomain:(id)arg1 script:(id)arg2 ;
-(id)scriptFromFileSystemForIdentifier:(id)arg1 ;
-(id)cachedScriptDomainsAndCheckSums;
-(void)removeAllScriptsWithCompletion:(/*^block*/id)arg1 ;
-(void)logScriptLoadType:(long long)arg1 forDomain:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)cacheFileQueue;
-(void)setCacheFileQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setScriptsMemoryCacheWithDomainAsKey:(NSCache *)arg1 ;
-(void)setScriptChecksumDictionary:(NSMutableDictionary *)arg1 ;
@end

