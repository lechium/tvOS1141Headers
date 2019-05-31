/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OS_dispatch_queue, NSString;

@interface CKKnowledgeStore : NSObject {

	 backingStore;
	 sparqlQueue;
	 location;
	 delegate;

}

@property (readonly,nonatomic) OS_dispatch_queue * sparqlQueue; 
@property (retain,nonatomic) id<CKKnowledgeStoreDelegate> delegate; 
@property (readonly,nonatomic) NSString * name; 
@property (readonly,nonatomic) NSString * path; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) long long hashValue; 
+(id)directoryPath;
+(id)knowledgeStoreWithName:(id)arg1 ;
+(id)defaultKnowledgeStore;
+(id)inMemoryKnowledgeStore;
+(id)userDefaultsKnowledgeStore;
+(id)synchedKnowledgeStoreWithName:(id)arg1 ;
+(id)defaultSynchedKnowledgeStore;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id<CKKnowledgeStoreDelegate>)delegate;
-(void)setDelegate:(id<CKKnowledgeStoreDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)hash;
-(NSString *)name;
-(NSString *)path;
-(id)entityWithIdentifier:(id)arg1 ;
-(void)triplesMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)keysAndReturnError:(id*)arg1 ;
-(id)keysMatching:(id)arg1 error:(id*)arg2 ;
-(id)valuesAndReturnError:(id*)arg1 ;
-(id)valuesForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(id)dictionaryRepresentationAndReturnError:(id*)arg1 ;
-(id)dictionaryRepresentationForKeysMatching:(id)arg1 error:(id*)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)writeBatch;
-(BOOL)removeValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeValuesMatching:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllValuesAndReturnError:(id*)arg1 ;
-(void)disableSyncAndDeleteCloudDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)keysWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)keysMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)valuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)valuesForKeysMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dictionaryRepresentationForKeysMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValueForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeValuesMatching:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeAllValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)importTriplesFromFileAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)removeEntity:(id)arg1 error:(id*)arg2 ;
-(void)entitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)valuesForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)valuesForKeys:(id)arg1 error:(id*)arg2 ;
-(id)entitiesAndReturnError:(id*)arg1 ;
-(id)triplesMatching:(id)arg1 error:(id*)arg2 ;
-(void)sparqlResultsForQuery:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)evaluateJSONLDEntryForEntity:(id)arg1 key:(id)arg2 value:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)subgraphWithEntities:(id)arg1 ;
-(void)importJSONLDWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id*)arg4 ;
-(void)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(OS_dispatch_queue *)sparqlQueue;
-(long long)hashValue;
-(void)dictionaryRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
@end

