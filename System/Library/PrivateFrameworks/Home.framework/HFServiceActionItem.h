/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@protocol HFServiceLikeItem;
@class HMHome, HFItem, NSSet, NSString;

@interface HFServiceActionItem : HFItem <HFServiceLikeItem> {

	HMHome* _home;
	HFItem*<HFServiceLikeItem> _containingItem;
	NSSet* _actions;
	NSSet* _actionBuilders;

}

@property (nonatomic,readonly) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> containingItem;                //@synthesize containingItem=_containingItem - In the implementation block
@property (nonatomic,retain) NSSet * actions;                                            //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSSet * actionBuilders;                                     //@synthesize actionBuilders=_actionBuilders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
+(id)_percentFormatter;
-(HMHome *)home;
-(id)init;
-(void)setActions:(NSSet *)arg1 ;
-(NSString *)description;
-(NSSet *)actions;
-(void)addAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setActionBuilders:(NSSet *)arg1 ;
-(NSSet *)actionBuilders;
-(HFItem*<HFServiceLikeItem>)containingItem;
-(void)_getDesiredItemDescription:(id*)arg1 controlDescription:(id*)arg2 withSourceItemResults:(id)arg3 ;
-(id)initWithHome:(id)arg1 containingItem:(id)arg2 ;
-(id)_characteristicTypeToTargetValuesMap;
-(void)addActionBuilder:(id)arg1 ;
-(id)serviceActionItemForChildServiceItem:(id)arg1 ;
-(id)accessories;
-(id)services;
@end

