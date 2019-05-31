/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMHome, HMRoom, NSMutableSet;

@interface HFActionSetItemProvider : HFItemProvider {

	BOOL _onlyShowsFavorites;
	HMHome* _home;
	HMRoom* _room;
	/*^block*/id _filter;
	unsigned long long _actionSetItemStyle;
	NSMutableSet* _actionSetItems;
	id<HFCharacteristicValueSource> _overrideValueSource;

}

@property (nonatomic,retain) NSMutableSet * actionSetItems;                                    //@synthesize actionSetItems=_actionSetItems - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> overrideValueSource;              //@synthesize overrideValueSource=_overrideValueSource - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMRoom * room;                                                    //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                                          //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long actionSetItemStyle;                          //@synthesize actionSetItemStyle=_actionSetItemStyle - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource; 
-(HMHome *)home;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)reloadItems;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 ;
-(unsigned long long)actionSetItemStyle;
-(/*^block*/id)_roomFilter;
-(/*^block*/id)_favoriteFilter;
-(NSMutableSet *)actionSetItems;
-(id<HFCharacteristicValueSource>)overrideValueSource;
-(void)setOverrideValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(void)setActionSetItems:(NSMutableSet *)arg1 ;
-(HMRoom *)room;
-(id)initWithHome:(id)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
@end

