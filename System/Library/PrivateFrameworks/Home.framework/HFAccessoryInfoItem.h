/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem {

	HMAccessory* _accessory;
	unsigned long long _infoType;

}

@property (nonatomic,retain) HMAccessory * accessory;                  //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic) unsigned long long infoType;              //@synthesize infoType=_infoType - In the implementation block
-(unsigned long long)infoType;
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2 ;
-(void)setInfoType:(unsigned long long)arg1 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
@end

