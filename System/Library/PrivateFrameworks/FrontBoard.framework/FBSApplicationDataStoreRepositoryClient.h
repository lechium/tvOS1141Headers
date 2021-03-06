/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
@optional
-(id)objectForKey:(id)arg1 forApplication:(id)arg2 checkPrefetch:(BOOL)arg3;

@required
-(void)invalidate;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(/*^block*/id)arg3 checkPrefetch:(BOOL)arg4;
-(BOOL)prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
-(void)addPrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removePrefetchedKeys:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)availableDataStores:(/*^block*/id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 withCompletion:(/*^block*/id)arg4;
-(void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAllObjectsForApplication:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)synchronizeWithCompletion:(/*^block*/id)arg1;

@end

