/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVVideoOutputSettings.h>
#import <AVFoundation/AVReencodedVideoSettingsForFig.h>

@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {

	NSDictionary* _adaptedVideoCompressionProperties;
	NSDictionary* _VTPixelAspectRatioDictionary;
	NSDictionary* _VTCleanApertureDictionary;

}

@property (nonatomic,readonly) unsigned videoCodecType; 
@property (nonatomic,readonly) NSDictionary * videoEncoderSpecification; 
@property (nonatomic,readonly) NSDictionary * videoCompressionProperties; 
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
+(BOOL)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id*)arg4 ;
-(BOOL)willYieldCompressedSamples;
-(unsigned)videoCodecType;
-(NSDictionary *)videoEncoderSpecification;
-(NSDictionary *)videoCompressionProperties;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1 ;
-(id)initWithTrustedAVVideoSettingsDictionary:(id)arg1 ;
-(id)pixelAspectRatioDictionary;
-(id)cleanApertureDictionary;
-(id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)dealloc;
-(int)height;
-(int)width;
@end

