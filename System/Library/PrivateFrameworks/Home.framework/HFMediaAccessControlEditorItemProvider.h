/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFStaticItemProvider.h>

@class HMHome, NSArray, HFStaticItem, NSMutableDictionary;

@interface HFMediaAccessControlEditorItemProvider : HFStaticItemProvider {

	HMHome* _home;
	NSArray* _accessControlItems;
	HFStaticItem* _passwordEnableItem;
	HFStaticItem* _passwordItem;
	NSMutableDictionary* _itemForIdentifier;

}

@property (nonatomic,copy) NSArray * accessControlItems;                             //@synthesize accessControlItems=_accessControlItems - In the implementation block
@property (nonatomic,copy) HFStaticItem * passwordEnableItem;                        //@synthesize passwordEnableItem=_passwordEnableItem - In the implementation block
@property (nonatomic,copy) HFStaticItem * passwordItem;                              //@synthesize passwordItem=_passwordItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemForIdentifier;              //@synthesize itemForIdentifier=_itemForIdentifier - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                        //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)accessControlItems;
-(HFStaticItem *)passwordEnableItem;
-(HFStaticItem *)passwordItem;
-(id)_buildItems;
-(NSMutableDictionary *)itemForIdentifier;
-(void)setAccessControlItems:(NSArray *)arg1 ;
-(void)setPasswordEnableItem:(HFStaticItem *)arg1 ;
-(void)setPasswordItem:(HFStaticItem *)arg1 ;
-(id)initWithHome:(id)arg1 ;
@end
