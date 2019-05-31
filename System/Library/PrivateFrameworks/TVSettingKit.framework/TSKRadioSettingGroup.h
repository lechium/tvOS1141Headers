/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKSettingGroup.h>

@class NSArray;

@interface TSKRadioSettingGroup : TSKSettingGroup {

	NSArray* _cachedAvailableValues;
	/*^block*/id _itemUpdateBlock;

}

@property (nonatomic,copy) id itemUpdateBlock;              //@synthesize itemUpdateBlock=_itemUpdateBlock - In the implementation block
+(id)radioGroupWithTitle:(id)arg1 representedObject:(id)arg2 keyPath:(id)arg3 availableValues:(id)arg4 ;
-(void)_itemSelected:(id)arg1 ;
-(id)_itemsFromInputValues:(id)arg1 currentValue:(id)arg2 ;
-(void)_prepareSettingItems;
-(void)_updateCheckmarkForItem:(id)arg1 value:(id)arg2 ;
-(void)_updateSettingItemsWithValue:(id)arg1 ;
-(id)itemUpdateBlock;
-(id)initWithTitle:(id)arg1 representedObject:(id)arg2 keyPath:(id)arg3 availableValues:(id)arg4 ;
-(id)settingItemForValue:(id)arg1 ;
-(void)setItemUpdateBlock:(id)arg1 ;
@end

