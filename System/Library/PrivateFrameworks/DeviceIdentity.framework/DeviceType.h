/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DeviceType : NSObject {

	BOOL _is_fpga;
	BOOL _has_telephony;
	BOOL _should_hactivate;
	NSString* _product_type;
	NSString* _device_class;

}

@property (nonatomic,copy,readonly) NSString * product_type;              //@synthesize product_type=_product_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * device_class;              //@synthesize device_class=_device_class - In the implementation block
@property (nonatomic,readonly) BOOL is_fpga;                              //@synthesize is_fpga=_is_fpga - In the implementation block
@property (nonatomic,readonly) BOOL has_telephony;                        //@synthesize has_telephony=_has_telephony - In the implementation block
@property (nonatomic,readonly) BOOL should_hactivate;                     //@synthesize should_hactivate=_should_hactivate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2 ;
-(id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3 ;
-(NSString *)product_type;
-(NSString *)device_class;
-(BOOL)is_fpga;
-(BOOL)has_telephony;
-(BOOL)should_hactivate;
@end

