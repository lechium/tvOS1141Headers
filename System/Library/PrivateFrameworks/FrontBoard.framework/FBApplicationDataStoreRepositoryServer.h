/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>
#import <libobjc.A.dylib/FBApplicationDataStoreRepositoryServerClientDelegate.h>

@protocol FBApplicationDataStoreRepository;
@interface FBApplicationDataStoreRepositoryServer : FBSystemServiceFacility <FBApplicationDataStoreRepositoryServerClientDelegate> {

	id<FBApplicationDataStoreRepository> _dataStore;

}

@property (nonatomic,retain) id<FBApplicationDataStoreRepository> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)prerequisiteMilestones;
-(void)applicationDataStoreRepositoryClient:(id)arg1 valueChangedForObject:(id)arg2 key:(id)arg3 bundleID:(id)arg4 ;
-(void)applicationDataStoreRespositoryClient:(id)arg1 repositoryInvalidatedForBundleID:(id)arg2 ;
-(id<FBApplicationDataStoreRepository>)dataStore;
-(void)_handleSetPrefetchedKeys:(id)arg1 client:(id)arg2 ;
-(void)_handleSetChangesInterest:(id)arg1 client:(id)arg2 ;
-(void)_handleSynchronize:(id)arg1 ;
-(void)_handleGetAvailableDataStores:(id)arg1 ;
-(void)_handleGetObjectForKey:(id)arg1 ;
-(void)_handleSetObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveObjectForKey:(id)arg1 client:(id)arg2 ;
-(void)_handleRemoveAllObjects:(id)arg1 ;
-(Class)classForClient:(id)arg1 ;
-(void)setDataStore:(id<FBApplicationDataStoreRepository>)arg1 ;
@end
