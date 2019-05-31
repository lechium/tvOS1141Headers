/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@class HFDiscoveredAccessory, NSString;

@interface HFDiscoveredAccessoryItem : HFItem <HFHomeKitItemProtocol> {

	HFDiscoveredAccessory* _discoveredAccessory;

}

@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessory;              //@synthesize discoveredAccessory=_discoveredAccessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithDiscoveredAccessory:(id)arg1 ;
-(HFDiscoveredAccessory *)discoveredAccessory;
@end

