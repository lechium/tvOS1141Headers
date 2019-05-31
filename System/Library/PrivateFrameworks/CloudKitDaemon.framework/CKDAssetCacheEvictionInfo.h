/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKDClientContext, NSMutableOrderedSet;

@interface CKDAssetCacheEvictionInfo : NSObject {

	BOOL _forced;
	BOOL _evictNow;
	BOOL _clearRegisteredItems;
	CKDClientContext* _clientContext;
	NSMutableOrderedSet* _itemIDsToUnregister;
	NSMutableOrderedSet* _assetHandleItemIDsToDelete;

}

@property (assign) BOOL forced;                                                             //@synthesize forced=_forced - In the implementation block
@property (assign) BOOL evictNow;                                                           //@synthesize evictNow=_evictNow - In the implementation block
@property (assign) BOOL clearRegisteredItems;                                               //@synthesize clearRegisteredItems=_clearRegisteredItems - In the implementation block
@property (nonatomic,retain) CKDClientContext * clientContext;                              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * itemIDsToUnregister;                     //@synthesize itemIDsToUnregister=_itemIDsToUnregister - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetHandleItemIDsToDelete;              //@synthesize assetHandleItemIDsToDelete=_assetHandleItemIDsToDelete - In the implementation block
-(void)setClientContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)clientContext;
-(void)setForced:(BOOL)arg1 ;
-(void)setEvictNow:(BOOL)arg1 ;
-(void)setItemIDsToUnregister:(NSMutableOrderedSet *)arg1 ;
-(void)setAssetHandleItemIDsToDelete:(NSMutableOrderedSet *)arg1 ;
-(id)initWithClientContext:(id)arg1 forced:(BOOL)arg2 evictNow:(BOOL)arg3 ;
-(BOOL)forced;
-(BOOL)evictNow;
-(BOOL)clearRegisteredItems;
-(void)setClearRegisteredItems:(BOOL)arg1 ;
-(NSMutableOrderedSet *)itemIDsToUnregister;
-(NSMutableOrderedSet *)assetHandleItemIDsToDelete;
@end

