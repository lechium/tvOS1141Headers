/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPMetaSegment : NSObject {

	unsigned long long _numOfFrames;
	SCD_Struct_VC9 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_VC9 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;              //@synthesize numOfFrames=_numOfFrames - In the implementation block
-(SCD_Struct_VC9)timeRange;
-(id)init;
-(unsigned long long)numOfFrames;
-(void)updateSegment:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(SCD_Struct_VC6)arg1 ;
-(void)mergeSegment:(id)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
@end

