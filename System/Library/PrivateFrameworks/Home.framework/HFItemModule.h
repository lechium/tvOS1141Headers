/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFItemUpdating;
@class NSSet;

@interface HFItemModule : NSObject {

	id<HFItemUpdating> _itemUpdater;

}

@property (nonatomic,readonly) NSSet * itemProviders; 
@property (nonatomic,readonly) NSSet * allItems; 
@property (nonatomic,__weak,readonly) id<HFItemUpdating> itemUpdater;              //@synthesize itemUpdater=_itemUpdater - In the implementation block
-(id)init;
-(NSSet *)itemProviders;
-(NSSet *)allItems;
-(id)initWithItemUpdater:(id)arg1 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFItemUpdating>)itemUpdater;
-(BOOL)containsItem:(id)arg1 ;
@end
