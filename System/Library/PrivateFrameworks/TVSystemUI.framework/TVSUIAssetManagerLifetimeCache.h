/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface TVSUIAssetManagerLifetimeCache : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableDictionary* _proxyCacheKeyToAssetManager;
	NSMutableDictionary* _applicationIdentifierToActiveCacheKeys;
	NSObject*<OS_dispatch_queue> _cacheQueue;

}

@property (nonatomic,retain) NSMutableDictionary * proxyCacheKeyToAssetManager;                         //@synthesize proxyCacheKeyToAssetManager=_proxyCacheKeyToAssetManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applicationIdentifierToActiveCacheKeys;              //@synthesize applicationIdentifierToActiveCacheKeys=_applicationIdentifierToActiveCacheKeys - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheQueue;                                   //@synthesize cacheQueue=_cacheQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)flush;
-(NSObject*<OS_dispatch_queue>)cacheQueue;
-(void)setCacheQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)_assetManagerForProxy:(id)arg1 ;
-(void)_updateForInstalledApplications:(id)arg1 ;
-(void)_updateForUninstalledApplications:(id)arg1 ;
-(void)_recordCacheKey:(id)arg1 ;
-(void)_removeOldCacheDataForInstalledAppProxy:(id)arg1 ;
-(void)_removeAllCacheDataForProxy:(id)arg1 ;
-(id)assetManagerForProxy:(id)arg1 ;
-(NSMutableDictionary *)proxyCacheKeyToAssetManager;
-(void)setProxyCacheKeyToAssetManager:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)applicationIdentifierToActiveCacheKeys;
-(void)setApplicationIdentifierToActiveCacheKeys:(NSMutableDictionary *)arg1 ;
@end
