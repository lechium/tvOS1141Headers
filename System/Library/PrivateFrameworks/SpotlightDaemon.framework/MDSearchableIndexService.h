/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSearchableIndexInterface.h>
#import <libobjc.A.dylib/CSSearchableIndexServiceInterface.h>

@protocol MDIndexer, OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString;

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface> {

	BOOL _isInternal;
	BOOL _searchInternal;
	BOOL _quotaDisabled;
	unsigned _clientUID;
	NSObject*<MDIndexer> _indexer;
	NSObject*<OS_xpc_object> _clientConnection;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSString* _clientBundleID;
	NSString* _protectionClass;

}

@property (nonatomic,readonly) NSString * processDescription; 
@property (nonatomic,retain) NSObject*<MDIndexer> indexer;                           //@synthesize indexer=_indexer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;               //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) NSString * clientBundleID;                                //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,nonatomic) unsigned clientUID;                                     //@synthesize clientUID=_clientUID - In the implementation block
@property (nonatomic,copy) NSString * protectionClass;                               //@synthesize protectionClass=_protectionClass - In the implementation block
@property (assign,nonatomic) BOOL isInternal;                                        //@synthesize isInternal=_isInternal - In the implementation block
@property (assign,nonatomic) BOOL searchInternal;                                    //@synthesize searchInternal=_searchInternal - In the implementation block
@property (assign,nonatomic) BOOL quotaDisabled;                                     //@synthesize quotaDisabled=_quotaDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performIndexJob:(id)arg1 acknowledgementHandler:(/*^block*/id)arg2 ;
-(void)performIndexJob:(id)arg1 ;
-(void)setProtectionClass:(NSString *)arg1 ;
-(void)willModifySearchableItemsWithIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllSearchableItemsWithProtectionClass:(id)arg1 forBundleID:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deleteSearchableItemsSinceDate:(id)arg1 protectionClass:(id)arg2 forBundleID:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)fetchLastClientStateWithProtectionClass:(id)arg1 forBundleID:(id)arg2 clientStateName:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)provideDataForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)provideFileURLForBundle:(id)arg1 identifier:(id)arg2 type:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performDataMigrationWithTimeout:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)protectionClass;
-(void)setClientBundleID:(NSString *)arg1 ;
-(void)_issueCommand:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIsInternal:(BOOL)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(BOOL)isInternal;
-(NSObject*<OS_xpc_object>)clientConnection;
-(void)setClientConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)clientBundleID;
-(void)setIndexer:(NSObject*<MDIndexer>)arg1 ;
-(BOOL)searchInternal;
-(BOOL)quotaDisabled;
-(void)setSearchInternal:(BOOL)arg1 ;
-(void)setQuotaDisabled:(BOOL)arg1 ;
-(void)setClientUID:(unsigned)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 ;
-(NSObject*<MDIndexer>)indexer;
-(NSString *)processDescription;
-(id)_checkBundleIDHelper:(id)arg1 ;
-(unsigned)clientUID;
-(id)_checkItems:(id)arg1 identifiers:(id)arg2 protectionClass:(id)arg3 bundleID:(id)arg4 allowedOnH4:(BOOL)arg5 ;
-(void)_deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4 options:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 options:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 options:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)deleteBundle:(id)arg1 ;
-(BOOL)deleteSinceDate:(id)arg1 ;
-(BOOL)processActivities:(id)arg1 ;
-(BOOL)addInteraction:(id)arg1 ;
-(BOOL)_deleteInteractions:(id)arg1 forGroup:(BOOL)arg2 ;
-(BOOL)deleteAllInteractions:(id)arg1 ;
-(void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2 protectionClass:(id)arg3 forBundleID:(id)arg4 forUTIType:(id)arg5 options:(long long)arg6 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1 protectionClass:(id)arg2 shouldGC:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_forceAppWithBundleID:(id)arg1 toPerformJob:(id)arg2 ;
-(BOOL)_jobForIndex:(long long)arg1 ;
@end

