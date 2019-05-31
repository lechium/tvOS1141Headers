/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@protocol MPSectionedIdentifierListDataSource;
@class NSMutableDictionary, MPSectionedIdentifierListItemEntry, NSString;

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	NSMutableDictionary* _identifiersItemEntryMap;
	MPSectionedIdentifierListItemEntry* _lastItemEntry;
	id<MPSectionedIdentifierListDataSource> _dataSource;

}

@property (nonatomic,readonly) NSMutableDictionary * identifiersItemEntryMap;                 //@synthesize identifiersItemEntryMap=_identifiersItemEntryMap - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * lastItemEntry;              //@synthesize lastItemEntry=_lastItemEntry - In the implementation block
@property (nonatomic,retain) id<MPSectionedIdentifierListDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(id)headEntryWithSectionIdentifier:(id)arg1 ;
-(long long)entryType;
-(void)setDataSource:(id<MPSectionedIdentifierListDataSource>)arg1 ;
-(id<MPSectionedIdentifierListDataSource>)dataSource;
-(MPSectionedIdentifierListItemEntry *)lastItemEntry;
-(NSMutableDictionary *)identifiersItemEntryMap;
-(void)setLastItemEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2 ;
@end

