/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {

	AVMutableAudioMixInputParametersInternal* _mutableInputParameters;

}

@property (assign,nonatomic) int trackID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
+(id)audioMixInputParameters;
+(id)audioMixInputParametersWithTrack:(id)arg1 ;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV2)arg2 ;
-(int)trackID;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV3)arg3 ;
-(void)setTrackID:(int)arg1 ;
@end
