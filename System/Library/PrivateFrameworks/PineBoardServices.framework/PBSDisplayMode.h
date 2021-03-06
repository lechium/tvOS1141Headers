/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PBSDisplayMode : NSObject <NSCopying, NSSecureCoding> {

	BOOL _canBeUsedToEstablishDisplayOnNextWake;
	BOOL _promotedToReal;
	BOOL _caModeIsVirtual;
	double _refreshRate;
	long long _SDRColorMapping;
	long long _HDR10ChromaSubsampling;
	long long _SDRChromaSubsampling;
	long long _dynamicRange;
	long long _colorGamut;
	double _scale;
	SCD_Struct_PB1 _resolution;

}

@property (assign,nonatomic) SCD_Struct_PB1 resolution;                                                  //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) double refreshRate;                                                         //@synthesize refreshRate=_refreshRate - In the implementation block
@property (assign,setter=DRColorMapping,nonatomic) long long SDRColorMapping;                            //@synthesize SDRColorMapping=_SDRColorMapping - In the implementation block
@property (assign,nonatomic) long long HDR10ChromaSubsampling;                                           //@synthesize HDR10ChromaSubsampling=_HDR10ChromaSubsampling - In the implementation block
@property (assign,setter=DRChromaSubsampling,nonatomic) long long SDRChromaSubsampling;                  //@synthesize SDRChromaSubsampling=_SDRChromaSubsampling - In the implementation block
@property (assign,nonatomic) long long dynamicRange;                                                     //@synthesize dynamicRange=_dynamicRange - In the implementation block
@property (assign,nonatomic) long long colorGamut;                                                       //@synthesize colorGamut=_colorGamut - In the implementation block
@property (assign,nonatomic) double scale;                                                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL canBeUsedToEstablishDisplayOnNextWake;                                 //@synthesize canBeUsedToEstablishDisplayOnNextWake=_canBeUsedToEstablishDisplayOnNextWake - In the implementation block
@property (assign,nonatomic) BOOL promotedToReal;                                                        //@synthesize promotedToReal=_promotedToReal - In the implementation block
@property (assign,nonatomic) BOOL caModeIsVirtual;                                                       //@synthesize caModeIsVirtual=_caModeIsVirtual - In the implementation block
@property (nonatomic,readonly) BOOL isValidBlackScreenRecoveryMode; 
@property (getter=isAboveBandwithThreshold,nonatomic,readonly) BOOL aboveBandwithThreshold; 
@property (nonatomic,readonly) BOOL isVirtual; 
@property (nonatomic,readonly) CGSize pointSize; 
@property (nonatomic,readonly) NSString * localizedDisplayString; 
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
+(BOOL)allModesAllowed;
-(BOOL)isVirtual;
-(id)init;
-(double)scale;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(BOOL)isValid;
-(void)setScale:(double)arg1 ;
-(CGSize)pointSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)refreshRate;
-(long long)colorGamut;
-(SCD_Struct_PB1)resolution;
-(void)setResolution:(SCD_Struct_PB1)arg1 ;
-(long long)aspectRatio;
-(long long)dynamicRange;
-(long long)HDR10ChromaSubsampling;
-(void)setRefreshRate:(double)arg1 ;
-(BOOL)isEqualToPBSDisplayMode:(id)arg1 enforceVirtualCheck:(BOOL)arg2 ;
-(void)_updateColorModeFromCAModeString:(id)arg1 ;
-(void)_updateColorGamutFromCAGamutString:(id)arg1 ;
-(id)encodedString;
-(BOOL)_conformsToPineBoardPolicy;
-(long long)SDRColorMapping;
-(long long)SDRChromaSubsampling;
-(BOOL)promotedToReal;
-(BOOL)caModeIsVirtual;
-(id)_SDRColorMappingDescription;
-(id)_chromaSubsamplingDescriptionForChroma:(long long)arg1 ;
-(id)_dynamicRangeDescription;
-(id)initWithEncodedString:(id)arg1 ;
-(void)setSDRColorMapping:(long long)arg1 ;
-(void)setDynamicRange:(long long)arg1 ;
-(void)setSDRChromaSubsampling:(long long)arg1 ;
-(void)setHDR10ChromaSubsampling:(long long)arg1 ;
-(void)setColorGamut:(long long)arg1 ;
-(id)initWithCADisplayMode:(id)arg1 usePineBoardPolicy:(BOOL)arg2 encodedPromotedModes:(id)arg3 ;
-(BOOL)isAboveBandwithThreshold;
-(BOOL)isValidBlackScreenRecoveryMode;
-(BOOL)canBeUsedToEstablishDisplayOnNextWake;
-(void)setCanBeUsedToEstablishDisplayOnNextWake:(BOOL)arg1 ;
-(void)setPromotedToReal:(BOOL)arg1 ;
-(void)setCaModeIsVirtual:(BOOL)arg1 ;
-(id)_parseVersionAorBorC:(const char*)arg1 ;
-(NSString *)localizedDisplayString;
@end

