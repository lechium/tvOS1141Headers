/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {

	NSArray* _identifiersToIndex;

}

@property (nonatomic,copy) NSArray * identifiersToIndex;              //@synthesize identifiersToIndex=_identifiersToIndex - In the implementation block
-(id)objectIDsToIndexFromDataSource:(id)arg1 ;
-(id)searchableItemIdentifiersToDeleteFromDataSource:(id)arg1 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 identifiersToIndex:(id)arg3 ;
-(void)setIdentifiersToIndex:(NSArray *)arg1 ;
-(NSArray *)identifiersToIndex;
@end
