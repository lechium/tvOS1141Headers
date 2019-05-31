/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSSet, HMHome, NSMutableSet;

@interface HFConditionItemProvider : HFItemProvider {

	NSSet* _conditions;
	HMHome* _home;
	NSMutableSet* _conditionItems;

}

@property (nonatomic,readonly) NSMutableSet * conditionItems;              //@synthesize conditionItems=_conditionItems - In the implementation block
@property (nonatomic,retain) NSSet * conditions;                           //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)init;
-(id)items;
-(id)reloadItems;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
-(NSMutableSet *)conditionItems;
-(NSSet *)conditions;
-(void)setConditions:(NSSet *)arg1 ;
@end
