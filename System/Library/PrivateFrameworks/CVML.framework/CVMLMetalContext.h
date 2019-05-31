/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSDictionary;

@interface CVMLMetalContext : NSObject {

	BOOL _useGPU;
	id<MTLDevice> _metalDevice;
	NSDictionary* _wisdomParams;

}

@property (readonly) id<MTLDevice> metalDevice;                //@synthesize metalDevice=_metalDevice - In the implementation block
@property (readonly) NSDictionary * wisdomParams;              //@synthesize wisdomParams=_wisdomParams - In the implementation block
@property (readonly) BOOL useGPU;                              //@synthesize useGPU=_useGPU - In the implementation block
+(id)mapMetalDeviceNameToWisdomParams;
-(void)setMetalDevice:(id<MTLDevice>)arg1 ;
-(void)initWisdomParams;
-(id)initWithMetalDevice:(id)arg1 ;
-(NSDictionary *)wisdomParams;
-(BOOL)useGPU;
-(id<MTLDevice>)metalDevice;
@end

