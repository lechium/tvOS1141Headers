/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class NSArray;

@interface HFSimpleModuleItemManager : HFItemManager {

	NSArray* _modules;

}

@property (nonatomic,copy,readonly) NSArray * modules;              //@synthesize modules=_modules - In the implementation block
-(NSArray *)modules;
-(id)initWithDelegate:(id)arg1 moduleBuilder:(/*^block*/id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
@end

