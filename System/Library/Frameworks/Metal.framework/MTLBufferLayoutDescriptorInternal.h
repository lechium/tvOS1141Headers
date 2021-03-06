/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLBufferLayoutDescriptor.h>

@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(void)setStride:(unsigned long long)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepRate:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
@end

