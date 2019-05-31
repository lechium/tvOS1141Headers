/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSectionedIdentifierListDelegate;
@class NSString, NSMutableArray, MPSectionedIdentifierListEntry, NSOperationQueue, NSMutableDictionary;

@interface MPSectionedIdentifierList : NSObject {

	long long _itemCount;
	BOOL _automaticallyReversesNonDestructiveDataSourceEdits;
	NSString* _identifier;
	id<MPSectionedIdentifierListDelegate> _delegate;
	NSMutableArray* _startEntries;
	MPSectionedIdentifierListEntry* _endEntry;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _sectionHeadEntryMap;

}

@property (nonatomic,readonly) NSMutableArray * startEntries;                                      //@synthesize startEntries=_startEntries - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierListEntry * endEntry;                          //@synthesize endEntry=_endEntry - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sectionHeadEntryMap;                          //@synthesize sectionHeadEntryMap=_sectionHeadEntryMap - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<MPSectionedIdentifierListDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long itemCount;                                                //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) BOOL automaticallyReversesNonDestructiveDataSourceEdits;              //@synthesize automaticallyReversesNonDestructiveDataSourceEdits=_automaticallyReversesNonDestructiveDataSourceEdits - In the implementation block
-(id)init;
-(id<MPSectionedIdentifierListDelegate>)delegate;
-(void)setDelegate:(id<MPSectionedIdentifierListDelegate>)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSString *)identifier;
-(long long)itemCount;
-(NSOperationQueue *)operationQueue;
-(id)_itemEntry:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)enumeratorWithOptions:(unsigned long long)arg1 ;
-(id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3 ;
-(void)addDataSourceAtStart:(id)arg1 section:(id)arg2 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 ;
-(void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 ;
-(void)moveItemToStart:(id)arg1 fromSection:(id)arg2 ;
-(void)moveItemToEnd:(id)arg1 fromSection:(id)arg2 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 ;
-(void)removeItem:(id)arg1 fromSection:(id)arg2 ;
-(void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2 ;
-(void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3 ;
-(id)initWithOperationQueue:(id)arg1 ;
-(NSMutableDictionary *)sectionHeadEntryMap;
-(void)_addBranchToEntry:(id)arg1 entries:(id)arg2 ;
-(void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 ;
-(void)_reverseEnumeratorWillStartAtEnd:(id)arg1 ;
-(NSMutableArray *)startEntries;
-(MPSectionedIdentifierListEntry *)endEntry;
-(id)_debugDescriptionWithEnumerator:(id)arg1 ;
-(id)debugDescriptionStartingAtItem:(id)arg1 inSection:(id)arg2 ;
-(void)_insertDataSource:(id)arg1 forSection:(id)arg2 afterEntry:(id)arg3 ;
-(id)_dataSourceInsertItems:(id)arg1 fromSection:(id)arg2 afterEntry:(id)arg3 ;
-(BOOL)automaticallyReversesNonDestructiveDataSourceEdits;
-(id)_dataSourceMoveItem:(id)arg1 inSection:(id)arg2 afterEntry:(id)arg3 ;
-(void)dataSourceMoveItemToHead:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceMoveItem:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)dataSourceMoveItemToTail:(id)arg1 inSection:(id)arg2 ;
-(void)_enqueueDataSourceWorkIfNeeded:(/*^block*/id)arg1 ;
-(void)setAutomaticallyReversesNonDestructiveDataSourceEdits:(BOOL)arg1 ;
@end
