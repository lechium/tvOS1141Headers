/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCapturePhotoSettingsInternal, NSDictionary, NSString, NSURL, NSArray;

@interface AVCapturePhotoSettings : NSObject <NSCopying> {

	AVCapturePhotoSettingsInternal* _internal;

}

@property (readonly) long long uniqueID; 
@property (copy,readonly) NSDictionary * format; 
@property (readonly) NSString * processedFileType; 
@property (readonly) unsigned rawPhotoPixelFormatType; 
@property (readonly) NSString * rawFileType; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,getter=isAutoStillImageStabilizationEnabled,nonatomic) BOOL autoStillImageStabilizationEnabled; 
@property (assign,getter=isAutoDualCameraFusionEnabled,nonatomic) BOOL autoDualCameraFusionEnabled; 
@property (assign,getter=isDualCameraDualPhotoDeliveryEnabled,nonatomic) BOOL dualCameraDualPhotoDeliveryEnabled; 
@property (assign,getter=isHighResolutionPhotoEnabled,nonatomic) BOOL highResolutionPhotoEnabled; 
@property (assign,getter=isDepthDataDeliveryEnabled,nonatomic) BOOL depthDataDeliveryEnabled; 
@property (assign,nonatomic) BOOL embedsDepthDataInPhoto; 
@property (assign,getter=isDepthDataFiltered,nonatomic) BOOL depthDataFiltered; 
@property (assign,getter=isCameraCalibrationDataDeliveryEnabled,nonatomic) BOOL cameraCalibrationDataDeliveryEnabled; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSURL * livePhotoMovieFileURL; 
@property (nonatomic,copy) NSString * livePhotoVideoCodecType; 
@property (nonatomic,copy) NSArray * livePhotoMovieMetadata; 
@property (nonatomic,readonly) NSArray * availablePreviewPhotoPixelFormatTypes; 
@property (nonatomic,copy) NSDictionary * previewPhotoFormat; 
@property (nonatomic,readonly) NSArray * availableEmbeddedThumbnailPhotoCodecTypes; 
@property (nonatomic,copy) NSDictionary * embeddedThumbnailPhotoFormat; 
+(id)photoSettings;
+(id)photoSettingsWithFormat:(id)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 processedFormat:(id)arg2 ;
+(id)photoSettingsWithRawPixelFormatType:(unsigned)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4 ;
+(id)burstQualityPhotoSettings;
+(id)photoSettingsFromPhotoSettings:(id)arg1 ;
+(long long)uniqueID;
-(unsigned)formatFourCC;
-(unsigned)rawPhotoPixelFormatType;
-(BOOL)isDepthDataDeliveryEnabled;
-(BOOL)embedsDepthDataInPhoto;
-(BOOL)isDepthDataFiltered;
-(BOOL)isBurstQualityCaptureEnabled;
-(long long)HDRMode;
-(BOOL)isEV0PhotoDeliveryEnabled;
-(BOOL)isDualCameraDualPhotoDeliveryEnabled;
-(id)photoFilters;
-(id)adjustedPhotoFilters;
-(NSString *)processedFileType;
-(NSString *)rawFileType;
-(long long)flashMode;
-(NSURL *)livePhotoMovieFileURL;
-(id)livePhotoMovieFileURLForOriginalPhoto;
-(NSString *)livePhotoVideoCodecType;
-(NSArray *)livePhotoMovieMetadata;
-(id)livePhotoMovieMetadataForOriginalPhoto;
-(NSDictionary *)previewPhotoFormat;
-(NSDictionary *)embeddedThumbnailPhotoFormat;
-(unsigned)shutterSound;
-(unsigned long long)userInitiatedPhotoRequestTime;
-(id)livePhotoContentIdentifier;
-(id)livePhotoContentIdentifierForOriginalPhoto;
-(id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(BOOL)arg5 uniqueID:(long long)arg6 exceptionReason:(id*)arg7 ;
-(void)setAutoStillImageStabilizationEnabled:(BOOL)arg1 ;
-(void)setAutoDualCameraFusionEnabled:(BOOL)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)setDualCameraDualPhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setHighResolutionPhotoEnabled:(BOOL)arg1 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setEmbedsDepthDataInPhoto:(BOOL)arg1 ;
-(void)setDepthDataFiltered:(BOOL)arg1 ;
-(void)setCameraCalibrationDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURL:(NSURL *)arg1 ;
-(void)setLivePhotoVideoCodecType:(NSString *)arg1 ;
-(void)setLivePhotoMovieMetadata:(NSArray *)arg1 ;
-(void)setPreviewPhotoFormat:(NSDictionary *)arg1 ;
-(void)setEmbeddedThumbnailPhotoFormat:(NSDictionary *)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(void)setEV0PhotoDeliveryEnabled:(BOOL)arg1 ;
-(void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1 ;
-(void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1 ;
-(void)setPhotoFilters:(id)arg1 ;
-(void)setAdjustedPhotoFilters:(id)arg1 ;
-(void)setSquareCropEnabled:(BOOL)arg1 ;
-(void)setTurboModeEnabled:(BOOL)arg1 ;
-(void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1 ;
-(void)setLivePhotoContentIdentifier:(id)arg1 ;
-(void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSArray *)availablePreviewPhotoPixelFormatTypes;
-(NSArray *)availableEmbeddedThumbnailPhotoCodecTypes;
-(BOOL)isTurboModeEnabled;
-(BOOL)isAutoStillImageStabilizationEnabled;
-(BOOL)isAutoDualCameraFusionEnabled;
-(BOOL)isHighResolutionPhotoEnabled;
-(BOOL)isCameraCalibrationDataDeliveryEnabled;
-(BOOL)isSquareCropEnabled;
-(unsigned)previewFormatFourCC;
-(CGSize)previewCGSize;
-(unsigned)embeddedThumbnailFormatFourCC;
-(CGSize)embeddedThumbnailCGSize;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(long long)uniqueID;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)format;
@end

