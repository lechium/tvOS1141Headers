/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSImage.h>

@interface MPSVirtualImage : MPSImage

@property (nonatomic,readonly) id<MTLTexture> texture; 
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP8)arg5 featureChannelInfo:(SCD_Struct_MP9)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP8)arg4 featureChannelInfo:(SCD_Struct_MP9)arg5 imageIndex:(unsigned long long)arg6 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP8)arg4 featureChannelInfo:(SCD_Struct_MP9)arg5 imageIndex:(unsigned long long)arg6 ;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP8)arg5 featureChannelInfo:(SCD_Struct_MP9)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id<MTLTexture>)texture;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
@end

