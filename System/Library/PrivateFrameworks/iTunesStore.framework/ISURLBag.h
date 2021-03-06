/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBagContext, SSNetworkConstraints, ISURLBagBackend, NSString, NSArray, NSSet, NSDictionary;

@interface ISURLBag : NSObject {

	SSURLBagContext* _context;
	SSNetworkConstraints* _defaultConstraints;
	ISURLBagBackend* _bagBackend;
	NSString* _bagBackendKey;
	NSArray* _guidPatterns;
	NSSet* _guidSchemes;
	NSDictionary* _headerPatterns;
	double _invalidationTime;
	BOOL _loadedFromDiskCache;
	NSString* _storeFrontIdentifier;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (assign,nonatomic) double invalidationTime;                        //@synthesize invalidationTime=_invalidationTime - In the implementation block
@property (assign,nonatomic) BOOL loadedFromDiskCache;                       //@synthesize loadedFromDiskCache=_loadedFromDiskCache - In the implementation block
@property (nonatomic,copy) NSString * storeFrontIdentifier;                  //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) SSURLBagContext * URLBagContext; 
@property (nonatomic,readonly) NSDictionary * URLBagDictionary; 
@property (nonatomic,readonly) long long versionIdentifier; 
@property (readonly) NSSet * availableStorefrontItemKinds; 
+(id)_sharedBagBackend;
+(void)_loadItemKindURLBagKeyMap;
+(id)storeFrontURLBagKeyForItemKind:(id)arg1 ;
+(id)copyExtraHeadersForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)networkConstraintsForDownloadKind:(id)arg1 inBagContext:(id)arg2 ;
+(BOOL)shouldSendGUIDForURL:(id)arg1 inBagContext:(id)arg2 ;
+(id)urlBagForContext:(id)arg1 ;
+(id)urlForKey:(id)arg1 inBagContext:(id)arg2 ;
+(BOOL)urlIsTrusted:(id)arg1 inBagContext:(id)arg2 ;
+(id)valueForKey:(id)arg1 inBagContext:(id)arg2 ;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithContentsOfFile:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)shouldSendAnonymousMachineIdentifierForURL:(id)arg1 ;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(SSURLBagContext *)URLBagContext;
-(NSDictionary *)URLBagDictionary;
-(void)_setBagBackendWithDictionary:(id)arg1 ;
-(id)_copyGUIDPatternsFromBagBackend;
-(id)_copyGUIDSchemesFromBagBackend;
-(id)_copyHeaderPatternsFromBagBackend;
-(id)_networkConstraintsCachePath;
-(void)_writeNetworkConstraintsCacheFile;
-(void)_writeURLResolutionCacheFile;
-(id)networkConstraintsForDownloadKind:(id)arg1 ;
-(void)setInvalidationTime:(double)arg1 ;
-(id)copyExtraHeadersForURL:(id)arg1 ;
-(BOOL)shouldSendGUIDForURL:(id)arg1 ;
-(void)_preprocessURLResolutionCacheDictionary:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 returningError:(id*)arg2 ;
-(NSSet *)availableStorefrontItemKinds;
-(id)searchQueryParametersForClientIdentifier:(id)arg1 networkType:(long long)arg2 ;
-(void)setInvalidationTimeWithExprationInterval:(double)arg1 ;
-(id)URLForURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)sanitizedURLForURL:(id)arg1 ;
-(void)setLoadedFromDiskCache:(BOOL)arg1 ;
-(void)setURLBagContext:(SSURLBagContext *)arg1 ;
-(id)initWithRawDictionary:(id)arg1 ;
-(double)invalidationTime;
-(BOOL)loadedFromDiskCache;
-(BOOL)urlIsTrusted:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(id)initWithURLBagContext:(id)arg1 ;
-(long long)versionIdentifier;
-(id)urlForKey:(id)arg1 ;
@end

