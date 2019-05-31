/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDictionary, NSMutableDictionary;

@interface SCNAssetCatalog : NSObject {

	NSURL* _catalogURL;
	NSDictionary* _db;
	NSMutableDictionary* _cache;

}

@property (nonatomic,readonly) NSURL * catalogURL;              //@synthesize catalogURL=_catalogURL - In the implementation block
+(void)clearCache;
+(id)assetCatalogWithURL:(id)arg1 ;
+(id)objectWithName:(id)arg1 class:(Class)arg2 ;
+(id)assetCatalogForResourceURL:(id)arg1 ;
+(id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)assetCatalogNamed:(id)arg1 ;
-(void)dealloc;
-(id)sceneWithURL:(id)arg1 ;
-(NSURL *)catalogURL;
-(id)animationNamed:(id)arg1 ;
-(id)actionNamed:(id)arg1 ;
-(id)particleSystemNamed:(id)arg1 ;
-(id)sceneNamed:(id)arg1 ;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
-(id)URLOfResourceNamed:(id)arg1 ;
-(id)pathByMakingURLRelativeToCatalog:(id)arg1 ;
@end

