/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStoreCoordinator, NSString, NSURL, NSDictionary;

@interface NSPersistentStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSString* _configurationName;
	NSURL* _url;
	NSDictionary* _options;
	id* _oidFactories;
	id _defaultFaultHandler;
	struct {
		unsigned isReadOnly : 1;
		unsigned cleanOnRemove : 1;
		unsigned isMDDirty : 1;
		unsigned _RESERVED : 29;
	}  _flags;
	void* _temporaryIDClass;
	id _coreSpotlightDelegate;
	int _activeRequests;
	int _reserved32;

}

@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator; 
@property (copy,readonly) NSString * configurationName; 
@property (readonly) NSDictionary * options; 
@property (retain) NSURL * URL; 
@property (copy) NSString * identifier; 
@property (copy,readonly) NSString * type; 
@property (getter=isReadOnly) BOOL readOnly; 
@property (nonatomic,retain) NSDictionary * metadata; 
+(BOOL)accessInstanceVariablesDirectly;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 readOnly:(BOOL*)arg3 error:(id*)arg4 options:(id)arg5 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(Class)rowCacheClass;
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(void)initialize;
+(id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)faultHandler;
-(BOOL)load:(id*)arg1 ;
-(BOOL)_isMetadataDirty;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(BOOL)supportsGenerationalQuerying;
-(id)currentQueryGeneration;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(Class)_objectIDClass;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(id)_rawMetadata__;
-(void)_setMetadataDirty:(BOOL)arg1 ;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)doFilesystemCleanupOnRemove:(BOOL)arg1 ;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(BOOL)_unload:(id*)arg1 ;
-(void)didAddToPersistentStoreCoordinator:(id)arg1 ;
-(id)coreSpotlightExporter;
-(Class)faultHandlerClass;
-(void)_updateAncillaryVersionHashesInMetadata:(id)arg1 ;
-(id)ancillaryModels;
-(Class)objectIDClassForEntity:(id)arg1 ;
-(void)_resetObjectIDFactoriesForStoreUUIDChange;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_defaultMetadata;
-(void)_updateMetadata;
-(void)incrementInUseCounter;
-(void)decrementInUseCounter;
-(BOOL)supportsConcurrentRequestHandling;
-(id)currentChangeToken;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)options;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(NSString *)configurationName;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
@end

