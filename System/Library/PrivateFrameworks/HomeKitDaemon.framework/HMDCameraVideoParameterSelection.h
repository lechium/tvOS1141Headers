/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraParameterSelectionBase.h>

@class HMDSupportedVideoStreamConfiguration, HMDSupportedRTPConfiguration, NSNumber, HMDSelectedVideoParameters, HMDStreamingCapabilities, NSArray, HMDCameraVideoTierParameters, HMDH264Profile, HMDH264Level, HMDPacketizationMode, HMDCameraVideoTier, HMDVideoCodec;

@interface HMDCameraVideoParameterSelection : HMDCameraParameterSelectionBase {

	HMDSupportedVideoStreamConfiguration* _supportedVideoStreamConfiguration;
	HMDSupportedRTPConfiguration* _rtpConfiguration;
	NSNumber* _syncSource;
	HMDSelectedVideoParameters* _selectedVideoParameters;
	HMDStreamingCapabilities* _streamingCapabilities;
	NSArray* _videoCodecsPreference;
	NSArray* _h264ProfilesPreference;
	NSArray* _h264LevelsPreference;
	NSArray* _h264PacketizationPreference;
	NSArray* _videoResolutionsPreference;
	NSArray* _validVideoParameterCombinations;
	HMDCameraVideoTierParameters* _videoTierParameters;
	HMDH264Profile* _selectedProfile;
	HMDH264Level* _selectedLevel;
	HMDPacketizationMode* _selectedPacketizationMode;
	NSNumber* _selectedFramerate;
	HMDCameraVideoTier* _selectedVideoTier;
	HMDVideoCodec* _selectedCodecType;

}

@property (nonatomic,readonly) HMDSupportedVideoStreamConfiguration * supportedVideoStreamConfiguration;              //@synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration - In the implementation block
@property (nonatomic,readonly) HMDSupportedRTPConfiguration * rtpConfiguration;                                       //@synthesize rtpConfiguration=_rtpConfiguration - In the implementation block
@property (nonatomic,readonly) NSNumber * syncSource;                                                                 //@synthesize syncSource=_syncSource - In the implementation block
@property (nonatomic,retain) HMDSelectedVideoParameters * selectedVideoParameters;                                    //@synthesize selectedVideoParameters=_selectedVideoParameters - In the implementation block
@property (nonatomic,readonly) HMDStreamingCapabilities * streamingCapabilities;                                      //@synthesize streamingCapabilities=_streamingCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * videoCodecsPreference;                                                       //@synthesize videoCodecsPreference=_videoCodecsPreference - In the implementation block
@property (nonatomic,readonly) NSArray * h264ProfilesPreference;                                                      //@synthesize h264ProfilesPreference=_h264ProfilesPreference - In the implementation block
@property (nonatomic,readonly) NSArray * h264LevelsPreference;                                                        //@synthesize h264LevelsPreference=_h264LevelsPreference - In the implementation block
@property (nonatomic,readonly) NSArray * h264PacketizationPreference;                                                 //@synthesize h264PacketizationPreference=_h264PacketizationPreference - In the implementation block
@property (nonatomic,readonly) NSArray * videoResolutionsPreference;                                                  //@synthesize videoResolutionsPreference=_videoResolutionsPreference - In the implementation block
@property (nonatomic,readonly) NSArray * validVideoParameterCombinations;                                             //@synthesize validVideoParameterCombinations=_validVideoParameterCombinations - In the implementation block
@property (nonatomic,readonly) HMDCameraVideoTierParameters * videoTierParameters;                                    //@synthesize videoTierParameters=_videoTierParameters - In the implementation block
@property (nonatomic,retain) HMDH264Profile * selectedProfile;                                                        //@synthesize selectedProfile=_selectedProfile - In the implementation block
@property (nonatomic,retain) HMDH264Level * selectedLevel;                                                            //@synthesize selectedLevel=_selectedLevel - In the implementation block
@property (nonatomic,retain) HMDPacketizationMode * selectedPacketizationMode;                                        //@synthesize selectedPacketizationMode=_selectedPacketizationMode - In the implementation block
@property (nonatomic,retain) NSNumber * selectedFramerate;                                                            //@synthesize selectedFramerate=_selectedFramerate - In the implementation block
@property (nonatomic,retain) HMDCameraVideoTier * selectedVideoTier;                                                  //@synthesize selectedVideoTier=_selectedVideoTier - In the implementation block
@property (nonatomic,retain) HMDVideoCodec * selectedCodecType;                                                       //@synthesize selectedCodecType=_selectedCodecType - In the implementation block
+(id)logCategory;
-(id)logIdentifier;
-(HMDStreamingCapabilities *)streamingCapabilities;
-(HMDSupportedRTPConfiguration *)rtpConfiguration;
-(id)createSRTPParamters;
-(NSNumber *)syncSource;
-(HMDCameraVideoTierParameters *)videoTierParameters;
-(HMDSupportedVideoStreamConfiguration *)supportedVideoStreamConfiguration;
-(void)_generateAllCombinations;
-(void)_setVideoResolutionPreference;
-(NSArray *)videoCodecsPreference;
-(NSArray *)h264ProfilesPreference;
-(NSArray *)h264LevelsPreference;
-(NSArray *)h264PacketizationPreference;
-(NSArray *)videoResolutionsPreference;
-(BOOL)_selectParametersFromCodec:(id)arg1 profiles:(id)arg2 levels:(id)arg3 packetizationModes:(id)arg4 videoAttributes:(id)arg5 ;
-(NSArray *)validVideoParameterCombinations;
-(void)setSelectedCodecType:(HMDVideoCodec *)arg1 ;
-(void)setSelectedProfile:(HMDH264Profile *)arg1 ;
-(void)setSelectedLevel:(HMDH264Level *)arg1 ;
-(void)setSelectedVideoTier:(HMDCameraVideoTier *)arg1 ;
-(void)setSelectedFramerate:(NSNumber *)arg1 ;
-(void)setSelectedPacketizationMode:(HMDPacketizationMode *)arg1 ;
-(HMDCameraVideoTier *)selectedVideoTier;
-(HMDH264Profile *)selectedProfile;
-(HMDH264Level *)selectedLevel;
-(HMDPacketizationMode *)selectedPacketizationMode;
-(HMDVideoCodec *)selectedCodecType;
-(id)initWithSessionID:(id)arg1 videoTierParameters:(id)arg2 supportedVideoConfiguration:(id)arg3 supportedRTPConfiguration:(id)arg4 streamingCapabilities:(id)arg5 ;
-(BOOL)selectVideoParameters;
-(id)createSelectedVideoParameters;
-(id)createReselectedVideoParameters:(id)arg1 ;
-(HMDSelectedVideoParameters *)selectedVideoParameters;
-(void)setSelectedVideoParameters:(HMDSelectedVideoParameters *)arg1 ;
-(NSNumber *)selectedFramerate;
@end

