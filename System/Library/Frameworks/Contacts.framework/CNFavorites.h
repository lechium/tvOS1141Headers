/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, CNContactStore, NSMutableDictionary, NSArray;

@interface CNFavorites : NSObject {

	NSMutableArray* _entries;
	BOOL _dirty;
	BOOL _postCount;
	BOOL _needsReload;
	BOOL _autoUpdating;
	CNContactStore* _store;
	NSMutableDictionary* _uidToEntry;

}

@property (nonatomic,retain) CNContactStore * store;                        //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uidToEntry;              //@synthesize uidToEntry=_uidToEntry - In the implementation block
@property (assign,nonatomic) BOOL dirty;                                    //@synthesize dirty=_dirty - In the implementation block
@property (assign,nonatomic) BOOL postCount;                                //@synthesize postCount=_postCount - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                              //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) BOOL autoUpdating;                           //@synthesize autoUpdating=_autoUpdating - In the implementation block
@property (nonatomic,readonly) NSArray * entries; 
@property (getter=isFull,readonly) BOOL full; 
+(id)sharedInstance;
+(id)favoritesPath;
+(void)flushSingleton;
-(void)removeAllEntries;
-(void)save;
-(id)init;
-(void)dealloc;
-(NSArray *)entries;
-(void)setDirty:(BOOL)arg1 ;
-(BOOL)dirty;
-(void)addEntry:(id)arg1 ;
-(BOOL)autoUpdating;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(id)initWithContactStore:(id)arg1 autoUpdating:(BOOL)arg2 ;
-(void)_entryIdentityChanged:(id)arg1 ;
-(void)clearState;
-(id)synchronousRemoteObjectProxyForContactsXPCService;
-(BOOL)shouldNotReportFavoritesError:(id)arg1 ;
-(void)reportFavoritesIssue:(id)arg1 ;
-(id)_entryDictionaries;
-(void)_addEntryToMap:(id)arg1 ;
-(void)recacheIdentitiesSoon;
-(id)entriesWithRecaching:(BOOL)arg1 ;
-(void)loadEntriesIfNecessaryAndRecache:(BOOL)arg1 ;
-(NSMutableDictionary *)uidToEntry;
-(id)entriesForContacts:(id)arg1 ;
-(id)entriesForContact:(id)arg1 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(void)_scheduleSave;
-(BOOL)postCount;
-(void)setUidToEntry:(NSMutableDictionary *)arg1 ;
-(void)setPostCount:(BOOL)arg1 ;
-(BOOL)_writeFavoritesToFile:(id)arg1 ;
-(void)_delayedLookup;
-(id)initNonUpdatingReadonlyInstanceWithContactStore:(id)arg1 ;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(id)entryWithIdentifier:(id)arg1 forContact:(id)arg2 ;
-(id)entryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(BOOL)containsEntryWithType:(long long)arg1 forContact:(id)arg2 propertyKey:(id)arg3 identifier:(id)arg4 ;
-(BOOL)addEntryForContact:(id)arg1 propertyKey:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_entriesChangedExternally;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)_postChangeNotification;
-(id)initWithContactStore:(id)arg1 ;
-(id)entriesForContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 ;
-(void)saveImmediately;
-(BOOL)needsReload;
-(BOOL)isFull;
-(CNContactStore *)store;
-(void)setStore:(CNContactStore *)arg1 ;
-(void)setNeedsReload:(BOOL)arg1 ;
@end

