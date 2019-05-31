/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet;

@interface HMDStreamingCapabilities : HMFObject <NSSecureCoding> {

	BOOL _supportsComfortNoise;
	NSDictionary* _supportedAudioCodecs;
	NSSet* _supportedVideoCodecs;
	NSSet* _supportedVideoResolutions;
	NSSet* _supportedH264Profiles;
	NSSet* _supportedH264Levels;
	NSSet* _supportedPacketizationModes;
	NSSet* _supportedBitRateSettings;
	NSSet* _supportedAudioSampleRates;
	unsigned long long _streamingTierType;

}

@property (nonatomic,readonly) NSDictionary * supportedAudioCodecs;              //@synthesize supportedAudioCodecs=_supportedAudioCodecs - In the implementation block
@property (nonatomic,readonly) NSSet * supportedVideoCodecs;                     //@synthesize supportedVideoCodecs=_supportedVideoCodecs - In the implementation block
@property (nonatomic,readonly) NSSet * supportedVideoResolutions;                //@synthesize supportedVideoResolutions=_supportedVideoResolutions - In the implementation block
@property (nonatomic,readonly) NSSet * supportedH264Profiles;                    //@synthesize supportedH264Profiles=_supportedH264Profiles - In the implementation block
@property (nonatomic,readonly) NSSet * supportedH264Levels;                      //@synthesize supportedH264Levels=_supportedH264Levels - In the implementation block
@property (nonatomic,readonly) NSSet * supportedPacketizationModes;              //@synthesize supportedPacketizationModes=_supportedPacketizationModes - In the implementation block
@property (nonatomic,readonly) NSSet * supportedBitRateSettings;                 //@synthesize supportedBitRateSettings=_supportedBitRateSettings - In the implementation block
@property (nonatomic,readonly) NSSet * supportedAudioSampleRates;                //@synthesize supportedAudioSampleRates=_supportedAudioSampleRates - In the implementation block
@property (assign,nonatomic) unsigned long long streamingTierType;               //@synthesize streamingTierType=_streamingTierType - In the implementation block
@property (assign,nonatomic) BOOL supportsComfortNoise;                          //@synthesize supportsComfortNoise=_supportsComfortNoise - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)translateCapabilities:(id)arg1 ;
+(BOOL)is4x3Resolution:(id)arg1 ;
+(BOOL)is16x9Resolution:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)supportsComfortNoise;
-(NSDictionary *)supportedAudioCodecs;
-(unsigned long long)streamingTierType;
-(NSSet *)supportedVideoCodecs;
-(NSSet *)supportedVideoResolutions;
-(void)_updateWithStreamPreference:(id)arg1 ;
-(NSSet *)supportedH264Profiles;
-(NSSet *)supportedH264Levels;
-(NSSet *)supportedPacketizationModes;
-(NSSet *)supportedBitRateSettings;
-(NSSet *)supportedAudioSampleRates;
-(void)setSupportsComfortNoise:(BOOL)arg1 ;
-(id)initWithStreamPreference:(id)arg1 ;
-(void)updateWithRemoteSettings:(id)arg1 ;
-(void)setStreamingTierType:(unsigned long long)arg1 ;
@end

