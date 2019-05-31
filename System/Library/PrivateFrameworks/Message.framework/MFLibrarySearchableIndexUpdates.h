/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFLibrarySearchableIndexUpdates : NSObject {

	NSArray* _itemsRequiringIndexing;
	NSArray* _removedIdentifiers;
	NSArray* _removedDomainIdentifiers;

}

@property (nonatomic,copy) NSArray * itemsRequiringIndexing;                //@synthesize itemsRequiringIndexing=_itemsRequiringIndexing - In the implementation block
@property (nonatomic,copy) NSArray * removedIdentifiers;                    //@synthesize removedIdentifiers=_removedIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * removedDomainIdentifiers;              //@synthesize removedDomainIdentifiers=_removedDomainIdentifiers - In the implementation block
+(id)updates;
-(void)dealloc;
-(id)description;
-(NSArray *)itemsRequiringIndexing;
-(NSArray *)removedIdentifiers;
-(NSArray *)removedDomainIdentifiers;
-(void)setItemsRequiringIndexing:(NSArray *)arg1 ;
-(void)setRemovedIdentifiers:(NSArray *)arg1 ;
-(void)setRemovedDomainIdentifiers:(NSArray *)arg1 ;
@end
