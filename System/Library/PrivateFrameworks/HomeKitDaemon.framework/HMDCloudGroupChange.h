/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCloudGroup, NSMutableArray, NSMapTable, NSArray;

@interface HMDCloudGroupChange : HMFObject {

	BOOL _temporaryCache;
	BOOL _decryptionFailed;
	BOOL _encryptionFailed;
	BOOL _controllerIdentifierChanged;
	HMDCloudGroup* _cloudGroup;
	NSMutableArray* _cloudChanges;
	NSMapTable* _objectChangeMap;
	NSMapTable* _recordChangeMap;
	NSMutableArray* _processingCloudChanges;
	NSMutableArray* _processedCloudChanges;

}

@property (nonatomic,__weak,readonly) HMDCloudGroup * cloudGroup;                                //@synthesize cloudGroup=_cloudGroup - In the implementation block
@property (assign,nonatomic) BOOL decryptionFailed;                                              //@synthesize decryptionFailed=_decryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL encryptionFailed;                                              //@synthesize encryptionFailed=_encryptionFailed - In the implementation block
@property (assign,nonatomic) BOOL controllerIdentifierChanged;                                   //@synthesize controllerIdentifierChanged=_controllerIdentifierChanged - In the implementation block
@property (nonatomic,retain) NSMutableArray * cloudChanges;                                      //@synthesize cloudChanges=_cloudChanges - In the implementation block
@property (nonatomic,retain) NSMapTable * objectChangeMap;                                       //@synthesize objectChangeMap=_objectChangeMap - In the implementation block
@property (nonatomic,retain) NSMapTable * recordChangeMap;                                       //@synthesize recordChangeMap=_recordChangeMap - In the implementation block
@property (nonatomic,retain) NSMutableArray * processingCloudChanges;                            //@synthesize processingCloudChanges=_processingCloudChanges - In the implementation block
@property (getter=isRootRecordRequired,nonatomic,readonly) BOOL rootRecordRequired; 
@property (nonatomic,retain) NSMutableArray * processedCloudChanges;                             //@synthesize processedCloudChanges=_processedCloudChanges - In the implementation block
@property (nonatomic,readonly) NSArray * allTransactionStoreRowIDs; 
@property (nonatomic,readonly) NSArray * processedTransactionStoreRowIDs; 
@property (getter=isTemporaryCache,nonatomic,readonly) BOOL temporaryCache;                      //@synthesize temporaryCache=_temporaryCache - In the implementation block
@property (nonatomic,readonly) BOOL hasValidChanges; 
@property (nonatomic,readonly) NSArray * objectChanges; 
+(id)shortDescription;
-(id)init;
-(id)description;
-(id)shortDescription;
-(BOOL)decryptionFailed;
-(HMDCloudGroup *)cloudGroup;
-(NSMutableArray *)cloudChanges;
-(NSMutableArray *)processingCloudChanges;
-(NSMutableArray *)processedCloudChanges;
-(id)changeWithObjectID:(id)arg1 ;
-(NSMapTable *)objectChangeMap;
-(NSMapTable *)recordChangeMap;
-(void)_removeChange:(id)arg1 ;
-(BOOL)isTemporaryCache;
-(id)cloudRecordWithName:(id)arg1 ;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)setDecryptionFailed:(BOOL)arg1 ;
-(void)_addChangeWithDeletedCloudRecord:(id)arg1 ;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(id)cachedCloudRecordWithObjectID:(id)arg1 ;
-(void)addChange:(id)arg1 setAsProcessing:(BOOL)arg2 ;
-(void)_determineDeletesFromCache:(/*^block*/id)arg1 ;
-(void)loadCloudRecordsFromCache:(/*^block*/id)arg1 ;
-(BOOL)isRootRecordRequired;
-(void)addRootRecordChange;
-(void)collectRecordsForBatch;
-(BOOL)encryptionFailed;
-(void)setEncryptionFailed:(BOOL)arg1 ;
-(id)rootRecordModelObject;
-(void)setAsProcessedChange:(id)arg1 ;
-(BOOL)isRootRecordName:(id)arg1 ;
-(id)initWithGroup:(id)arg1 temporaryCache:(BOOL)arg2 ;
-(NSArray *)allTransactionStoreRowIDs;
-(NSArray *)processedTransactionStoreRowIDs;
-(id)transactionStoreRowIDsForObjectID:(id)arg1 ;
-(id)changeWithRecordName:(id)arg1 ;
-(void)setAllChangedAsProcessed;
-(void)addChangeWithObjectChange:(id)arg1 ;
-(void)addChangeWithRecord:(id)arg1 ;
-(void)addChangeWithDeletedRecordID:(id)arg1 ;
-(void)removeChangeWithObjectID:(id)arg1 ;
-(void)cachedCloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasValidChanges;
-(void)loadCloudRecordsAndDetermineDeletesFromCache:(/*^block*/id)arg1 ;
-(BOOL)moreChangesToProcess;
-(void)fetchBatchToUpload:(/*^block*/id)arg1 ;
-(void)setSaveAsProcessedWithRecord:(id)arg1 ;
-(void)resetRecordWithRecordID:(id)arg1 ;
-(void)setDeleteAsProcessedWithRecordID:(id)arg1 ;
-(void)flushAllChangesToCache;
-(NSArray *)objectChanges;
-(BOOL)controllerIdentifierChanged;
-(void)setControllerIdentifierChanged:(BOOL)arg1 ;
-(void)setCloudChanges:(NSMutableArray *)arg1 ;
-(void)setObjectChangeMap:(NSMapTable *)arg1 ;
-(void)setRecordChangeMap:(NSMapTable *)arg1 ;
-(void)setProcessingCloudChanges:(NSMutableArray *)arg1 ;
-(void)setProcessedCloudChanges:(NSMutableArray *)arg1 ;
@end

