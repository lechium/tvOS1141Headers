/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFResidentDeviceItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _residentDeviceItems;

}

@property (nonatomic,retain) NSMutableSet * residentDeviceItems;              //@synthesize residentDeviceItems=_residentDeviceItems - In the implementation block
@property (nonatomic,copy) id filter;                                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                 //@synthesize home=_home - In the implementation block
-(HMHome *)home;
-(id)init;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(NSMutableSet *)residentDeviceItems;
-(id)invalidationReasons;
-(id)reloadItems;
-(void)setResidentDeviceItems:(NSMutableSet *)arg1 ;
-(id)initWithHome:(id)arg1 ;
@end

