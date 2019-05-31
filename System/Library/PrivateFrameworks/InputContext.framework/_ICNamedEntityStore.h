/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSMutableOrderedSet, _ICTransientLexicon, NSArray;

@interface _ICNamedEntityStore : NSObject {

	NSMutableOrderedSet* _recentNamedEntityQueue;
	_ICTransientLexicon* _wordLexicon;
	_ICTransientLexicon* _phraseLexicon;
	NSArray* _lexicons;
	/*^block*/id _wordFilteringBlock;
	/*^block*/id _filteringBlock;

}

@property (nonatomic,copy) id filteringBlock;                 //@synthesize filteringBlock=_filteringBlock - In the implementation block
@property (nonatomic,retain) NSArray * lexicons;              //@synthesize lexicons=_lexicons - In the implementation block
+(id)tokenize:(id)arg1 ;
-(void)removeAllEntries;
-(id)init;
-(id)filterWord:(id)arg1 ;
-(void)removeEntry:(id)arg1 tokenizedNewEntity:(id)arg2 ;
-(USetRef)exemplarSetForSupportedLocales;
-(BOOL)areStringCharactersWhitelisted:(id)arg1 ;
-(BOOL)isValidNamedEntity:(id)arg1 explanation:(id*)arg2 ;
-(void)updateQueue:(id)arg1 newEntity:(id)arg2 ;
-(void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2 ;
-(BOOL)isFirstCandidateBetter:(id)arg1 than:(id)arg2 ;
-(void)addEntity:(id)arg1 isDurable:(BOOL)arg2 ;
-(void)reloadRecents;
-(id)filteringBlock;
-(void)setFilteringBlock:(id)arg1 ;
-(NSArray *)lexicons;
-(void)setLexicons:(NSArray *)arg1 ;
@end

