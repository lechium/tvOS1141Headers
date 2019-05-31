/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group, CKSQLiteItem;
@class NSObject, CKDPCSCache, CKDPCSData, NSError, CKDRecordPCSData, NSString;

@interface CKDPCSCacheFetchOperation : CKDDatabaseOperation {

	BOOL _willRetryFetchSuperCalled;
	BOOL _didFetchData;
	BOOL _wasFetchedFromCache;
	BOOL _shouldRetry;
	BOOL _pcsDataInvalidated;
	int _numRetries;
	NSObject*<OS_dispatch_group> _fetchGroup;
	CKDPCSCache* _cache;
	id<CKSQLiteItem> _itemID;
	unsigned long long _fetchOptions;
	CKDPCSData* _pcsData;
	NSError* _fetchError;
	CKDRecordPCSData* _parentPCSData;

}

@property (nonatomic,retain) CKDPCSCache * cache;                                    //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic) BOOL willRetryFetchSuperCalled;                         //@synthesize willRetryFetchSuperCalled=_willRetryFetchSuperCalled - In the implementation block
@property (nonatomic,retain) id<CKSQLiteItem> itemID;                                //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned long long fetchOptions;                        //@synthesize fetchOptions=_fetchOptions - In the implementation block
@property (assign,nonatomic) BOOL didFetchData;                                      //@synthesize didFetchData=_didFetchData - In the implementation block
@property (nonatomic,retain) CKDPCSData * pcsData;                                   //@synthesize pcsData=_pcsData - In the implementation block
@property (nonatomic,retain) NSError * fetchError;                                   //@synthesize fetchError=_fetchError - In the implementation block
@property (assign,nonatomic) BOOL wasFetchedFromCache;                               //@synthesize wasFetchedFromCache=_wasFetchedFromCache - In the implementation block
@property (assign,nonatomic) int numRetries;                                         //@synthesize numRetries=_numRetries - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                       //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (nonatomic,retain) CKDRecordPCSData * parentPCSData;                       //@synthesize parentPCSData=_parentPCSData - In the implementation block
@property (nonatomic,readonly) BOOL hasAllPCSData; 
@property (nonatomic,readonly) NSString * itemTypeName; 
@property (getter=isPCSDataInvalidated) BOOL pcsDataInvalidated;                     //@synthesize pcsDataInvalidated=_pcsDataInvalidated - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> fetchGroup;              //@synthesize fetchGroup=_fetchGroup - In the implementation block
-(void)main;
-(CKDPCSCache *)cache;
-(void)setCache:(CKDPCSCache *)arg1 ;
-(id<CKSQLiteItem>)itemID;
-(unsigned long long)fetchOptions;
-(void)setFetchOptions:(unsigned long long)arg1 ;
-(BOOL)canBeUsedForOperation:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)setPcsDataInvalidated:(BOOL)arg1 ;
-(BOOL)isPCSDataInvalidated;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(CKDPCSData *)pcsData;
-(void)setItemID:(id<CKSQLiteItem>)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setPcsData:(CKDPCSData *)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)_errorShouldImpactFlowControl:(id)arg1 ;
-(BOOL)makeStateTransition;
-(BOOL)didFetchData;
-(void)setDidFetchData:(BOOL)arg1 ;
-(void)setFetchError:(NSError *)arg1 ;
-(void)setWasFetchedFromCache:(BOOL)arg1 ;
-(NSError *)fetchError;
-(BOOL)wasFetchedFromCache;
-(NSString *)itemTypeName;
-(BOOL)hasAllPCSData;
-(void)_willRetryFetch;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_saveUpdatedPCSToServer;
-(BOOL)_savePCSDataToCache;
-(void)setParentPCSData:(CKDRecordPCSData *)arg1 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(CKDRecordPCSData *)parentPCSData;
-(BOOL)shouldRetry;
-(BOOL)_fetchDependentPCS;
-(int)numRetries;
-(void)setWillRetryFetchSuperCalled:(BOOL)arg1 ;
-(BOOL)willRetryFetchSuperCalled;
-(void)setNumRetries:(int)arg1 ;
-(BOOL)needsAdditionalPCSCreation;
@end

