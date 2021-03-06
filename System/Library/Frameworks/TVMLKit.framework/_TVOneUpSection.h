/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVOneUpSection
@property (nonatomic,readonly) long long autoHighlightIndex; 
@required
-(long long)numberOfItems;
-(void)loadIndex:(long long)arg1;
-(id)elementForItemAtIndex:(long long)arg1;
-(void)unloadIndex:(long long)arg1;
-(long long)autoHighlightIndex;
-(void)resetAutoHighlightIndex;
-(void)configureItemsChangeSetWithSection:(id)arg1;
-(long long)newItemIndexForOldItemIndex:(long long)arg1;
-(BOOL)itemsChangeSetContainsMovedAddedOrRemovedItems;

@end

