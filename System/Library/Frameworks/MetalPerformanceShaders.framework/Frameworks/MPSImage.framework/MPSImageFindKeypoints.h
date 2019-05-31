/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSImageHistogram;

@interface MPSImageFindKeypoints : MPSKernel {

	SCD_Struct_MP12 _keypointRangeInfo;
	MPSImageHistogram* histogramKernel;

}

@property (nonatomic,readonly) SCD_Struct_MP12 keypointRangeInfo; 
+(const MPSLibraryInfo*)libraryInfo;
-(SCD_Struct_MP12)keypointRangeInfo;
-(id)initWithDevice:(id)arg1 info:(const SCD_Struct_MP12*)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 regions:(const SCD_Struct_MP3*)arg3 numberOfRegions:(unsigned long long)arg4 keypointCountBuffer:(id)arg5 keypointCountBufferOffset:(unsigned long long)arg6 keypointDataBuffer:(id)arg7 keypointDataBufferOffset:(unsigned long long)arg8 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
@end
