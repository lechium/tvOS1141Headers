/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray, NSNumber;

@interface PLPhotoEditModel : NSObject <NSCopying> {

	NSString* _effectFilterName;
	long long _effectFilterVersion;
	BOOL _smartToneEnabled;
	double _smartToneLevel;
	double _autoSmartToneLevel;
	NSString* _autoSmartToneIdentifier;
	double _brightnessLevelOffset;
	double _contrastLevelOffset;
	double _exposureLevelOffset;
	double _shadowsLevelOffset;
	double _blackPointLevelOffset;
	double _localLightLevelOffset;
	double _highlightsLevelOffset;
	BOOL _smartColorEnabled;
	double _autoSmartColorLevel;
	NSString* _autoSmartColorIdentifier;
	double _smartColorLevel;
	double _colorContrastLevelOffset;
	double _colorVibrancyLevelOffset;
	double _colorCastLevelOffset;
	BOOL _smartBWEnabled;
	double _smartBWLevel;
	double _bwStrengthLevelOffset;
	double _bwNeutralGammaLevelOffset;
	double _bwToneLevelOffset;
	double _bwHueLevelOffset;
	double _bwGrainLevelOffset;
	BOOL _whiteBalanceEnabled;
	double _whiteBalanceFaceI;
	double _whiteBalanceFaceQ;
	double _whiteBalanceFaceStrength;
	double _whiteBalanceFaceWarmth;
	double _straightenAngleRadiansCW;
	CGRect _cropRect;
	long long _cropConstraintWidth;
	long long _cropConstraintHeight;
	long long _userOrientation;
	BOOL _autoCropped;
	NSDictionary* _smartToneStatistics;
	NSDictionary* _smartColorStatistics;
	NSDictionary* _smartBWStatistics;
	NSDictionary* _autoWhiteBalanceSettings;
	NSString* _autoWhiteBalanceIdentifier;
	NSArray* _redEyeCorrections;
	NSArray* _autoRedEyeCorrections;
	NSArray* _legacyAutoEnhanceFilters;
	BOOL _legacyAutoEnhanceIsOn;
	BOOL _trimEnabled;
	SCD_Struct_PL26 _trimStartTime;
	SCD_Struct_PL26 _trimEndTime;
	SCD_Struct_PL26 _stillPhotoTime;
	NSNumber* _muted;
	BOOL _autoLoopEnabled;
	NSDictionary* _autoLoopRecipe;
	NSString* _autoLoopFlavor;
	BOOL _fusionEnabled;
	NSDictionary* _fusionParameters;
	BOOL _depthEffectEnabled;
	NSDictionary* _depthEffectSettings;
	BOOL _portraitEffectEnabled;
	NSDictionary* _portraitEffectSettings;
	NSString* _portraitEffectFilterName;
	long long _portraitEffectFilterVersion;
	long long _inputOrientation;
	CGSize _inputSize;
	BOOL _canRenderPortraitEffect;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSString * effectFilterName;                                       //@synthesize effectFilterName=_effectFilterName - In the implementation block
@property (nonatomic,readonly) long long effectFilterVersion;                                          //@synthesize effectFilterVersion=_effectFilterVersion - In the implementation block
@property (getter=isSmartToneEnabled,nonatomic,readonly) BOOL smartToneEnabled;                        //@synthesize smartToneEnabled=_smartToneEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartToneStatistics;                                //@synthesize smartToneStatistics=_smartToneStatistics - In the implementation block
@property (nonatomic,readonly) double autoSmartToneLevel;                                              //@synthesize autoSmartToneLevel=_autoSmartToneLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoSmartToneIdentifier;                                //@synthesize autoSmartToneIdentifier=_autoSmartToneIdentifier - In the implementation block
@property (nonatomic,readonly) double smartToneLevel;                                                  //@synthesize smartToneLevel=_smartToneLevel - In the implementation block
@property (nonatomic,readonly) double brightnessLevelOffset;                                           //@synthesize brightnessLevelOffset=_brightnessLevelOffset - In the implementation block
@property (nonatomic,readonly) double contrastLevelOffset;                                             //@synthesize contrastLevelOffset=_contrastLevelOffset - In the implementation block
@property (nonatomic,readonly) double exposureLevelOffset;                                             //@synthesize exposureLevelOffset=_exposureLevelOffset - In the implementation block
@property (nonatomic,readonly) double highlightsLevelOffset;                                           //@synthesize highlightsLevelOffset=_highlightsLevelOffset - In the implementation block
@property (nonatomic,readonly) double shadowsLevelOffset;                                              //@synthesize shadowsLevelOffset=_shadowsLevelOffset - In the implementation block
@property (nonatomic,readonly) double blackPointLevelOffset;                                           //@synthesize blackPointLevelOffset=_blackPointLevelOffset - In the implementation block
@property (nonatomic,readonly) double localLightLevelOffset;                                           //@synthesize localLightLevelOffset=_localLightLevelOffset - In the implementation block
@property (getter=isSmartColorEnabled,nonatomic,readonly) BOOL smartColorEnabled;                      //@synthesize smartColorEnabled=_smartColorEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartColorStatistics;                               //@synthesize smartColorStatistics=_smartColorStatistics - In the implementation block
@property (nonatomic,readonly) double autoSmartColorLevel;                                             //@synthesize autoSmartColorLevel=_autoSmartColorLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoSmartColorIdentifier;                               //@synthesize autoSmartColorIdentifier=_autoSmartColorIdentifier - In the implementation block
@property (nonatomic,readonly) double smartColorLevel;                                                 //@synthesize smartColorLevel=_smartColorLevel - In the implementation block
@property (nonatomic,readonly) double colorContrastLevelOffset;                                        //@synthesize colorContrastLevelOffset=_colorContrastLevelOffset - In the implementation block
@property (nonatomic,readonly) double colorVibrancyLevelOffset;                                        //@synthesize colorVibrancyLevelOffset=_colorVibrancyLevelOffset - In the implementation block
@property (nonatomic,readonly) double colorCastLevelOffset;                                            //@synthesize colorCastLevelOffset=_colorCastLevelOffset - In the implementation block
@property (getter=isSmartBWEnabled,nonatomic,readonly) BOOL smartBWEnabled;                            //@synthesize smartBWEnabled=_smartBWEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartBWStatistics;                                  //@synthesize smartBWStatistics=_smartBWStatistics - In the implementation block
@property (nonatomic,readonly) double smartBWLevel;                                                    //@synthesize smartBWLevel=_smartBWLevel - In the implementation block
@property (nonatomic,readonly) double bwStrengthLevelOffset;                                           //@synthesize bwStrengthLevelOffset=_bwStrengthLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwNeutralGammaLevelOffset;                                       //@synthesize bwNeutralGammaLevelOffset=_bwNeutralGammaLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwToneLevelOffset;                                               //@synthesize bwToneLevelOffset=_bwToneLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwHueLevelOffset;                                                //@synthesize bwHueLevelOffset=_bwHueLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwGrainLevelOffset;                                              //@synthesize bwGrainLevelOffset=_bwGrainLevelOffset - In the implementation block
@property (getter=isWhiteBalanceEnabled,nonatomic,readonly) BOOL whiteBalanceEnabled;                  //@synthesize whiteBalanceEnabled=_whiteBalanceEnabled - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceI;                                               //@synthesize whiteBalanceFaceI=_whiteBalanceFaceI - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceQ;                                               //@synthesize whiteBalanceFaceQ=_whiteBalanceFaceQ - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceStrength;                                        //@synthesize whiteBalanceFaceStrength=_whiteBalanceFaceStrength - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceWarmth;                                          //@synthesize whiteBalanceFaceWarmth=_whiteBalanceFaceWarmth - In the implementation block
@property (nonatomic,readonly) long long userOrientation;                                              //@synthesize userOrientation=_userOrientation - In the implementation block
@property (nonatomic,readonly) CGRect cropRect;                                                        //@synthesize cropRect=_cropRect - In the implementation block
@property (getter=isCropConstrained,nonatomic,readonly) BOOL cropConstrained; 
@property (nonatomic,readonly) long long cropConstraintWidth;                                          //@synthesize cropConstraintWidth=_cropConstraintWidth - In the implementation block
@property (nonatomic,readonly) long long cropConstraintHeight;                                         //@synthesize cropConstraintHeight=_cropConstraintHeight - In the implementation block
@property (nonatomic,readonly) double straightenAngleRadiansCW;                                        //@synthesize straightenAngleRadiansCW=_straightenAngleRadiansCW - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentityCrop; 
@property (getter=isAutoCropped,nonatomic,readonly) BOOL autoCropped;                                  //@synthesize autoCropped=_autoCropped - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * autoWhiteBalanceSettings;                           //@synthesize autoWhiteBalanceSettings=_autoWhiteBalanceSettings - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoWhiteBalanceIdentifier;                             //@synthesize autoWhiteBalanceIdentifier=_autoWhiteBalanceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * redEyeCorrections;                                       //@synthesize redEyeCorrections=_redEyeCorrections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * autoRedEyeCorrections;                                   //@synthesize autoRedEyeCorrections=_autoRedEyeCorrections - In the implementation block
@property (nonatomic,readonly) BOOL hasRedEyeCorrections; 
@property (nonatomic,readonly) BOOL hasAnyAutoEnhancement; 
@property (nonatomic,copy,readonly) NSArray * legacyAutoEnhanceFilters;                                //@synthesize legacyAutoEnhanceFilters=_legacyAutoEnhanceFilters - In the implementation block
@property (nonatomic,readonly) BOOL legacyAutoEnhanceIsOn;                                             //@synthesize legacyAutoEnhanceIsOn=_legacyAutoEnhanceIsOn - In the implementation block
@property (getter=isAutoLoopEnabled,nonatomic,readonly) BOOL autoLoopEnabled;                          //@synthesize autoLoopEnabled=_autoLoopEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * autoLoopRecipe;                                          //@synthesize autoLoopRecipe=_autoLoopRecipe - In the implementation block
@property (nonatomic,readonly) NSString * autoLoopFlavor;                                              //@synthesize autoLoopFlavor=_autoLoopFlavor - In the implementation block
@property (getter=isTrimEnabled,nonatomic,readonly) BOOL trimEnabled;                                  //@synthesize trimEnabled=_trimEnabled - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL26 trimStartTime;                                          //@synthesize trimStartTime=_trimStartTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL26 trimEndTime;                                            //@synthesize trimEndTime=_trimEndTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PL26 stillPhotoTime;                                         //@synthesize stillPhotoTime=_stillPhotoTime - In the implementation block
@property (nonatomic,readonly) BOOL hasStillPhotoTime; 
@property (nonatomic,readonly) NSNumber * muted;                                                       //@synthesize muted=_muted - In the implementation block
@property (getter=isFusionEnabled,nonatomic,readonly) BOOL fusionEnabled;                              //@synthesize fusionEnabled=_fusionEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * fusionParameters;                                        //@synthesize fusionParameters=_fusionParameters - In the implementation block
@property (getter=canRenderDepth,nonatomic,readonly) BOOL canRenderDepth; 
@property (getter=isDepthEffectEnabled,nonatomic,readonly) BOOL depthEffectEnabled;                    //@synthesize depthEffectEnabled=_depthEffectEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * depthEffectSettings;                                     //@synthesize depthEffectSettings=_depthEffectSettings - In the implementation block
@property (nonatomic,readonly) BOOL canRenderPortraitEffect;                                           //@synthesize canRenderPortraitEffect=_canRenderPortraitEffect - In the implementation block
@property (getter=isPortraitEffectEnabled,nonatomic,readonly) BOOL portraitEffectEnabled;              //@synthesize portraitEffectEnabled=_portraitEffectEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * portraitEffectSettings;                                  //@synthesize portraitEffectSettings=_portraitEffectSettings - In the implementation block
@property (nonatomic,readonly) NSString * portraitEffectFilterName;                                    //@synthesize portraitEffectFilterName=_portraitEffectFilterName - In the implementation block
@property (nonatomic,readonly) long long portraitEffectFilterVersion;                                  //@synthesize portraitEffectFilterVersion=_portraitEffectFilterVersion - In the implementation block
@property (nonatomic,readonly) long long inputOrientation;                                             //@synthesize inputOrientation=_inputOrientation - In the implementation block
@property (nonatomic,readonly) CGSize inputSize;                                                       //@synthesize inputSize=_inputSize - In the implementation block
+(double)referenceSmartToneLevelOfType:(long long)arg1 ;
+(double)referenceSmartColorLevelOfType:(long long)arg1 ;
+(double)referenceSmartBWLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceILevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceQLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceStrengthLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceWarmthLevelOfType:(long long)arg1 ;
+(double)referenceStraightenAngleOfType:(long long)arg1 ;
+(long long)identityCropConstraint;
+(long long)identityOrientation;
+(void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(/*function pointer*/void**)arg3 ;
+(void)_loadSubfilterReferenceLevelsIfNeeded;
+(double)_referenceValueOfType:(long long)arg1 fromLevels:(SCD_Struct_PL27)arg2 ;
+(double)referenceBrightnessLevelOfType:(long long)arg1 ;
+(double)referenceContrastLevelOfType:(long long)arg1 ;
+(double)referenceExposureLevelOfType:(long long)arg1 ;
+(double)referenceHighlightsLevelOfType:(long long)arg1 ;
+(double)referenceShadowsLevelOfType:(long long)arg1 ;
+(double)referenceBlackPointLevelOfType:(long long)arg1 ;
+(double)referenceLocalLightLevelOfType:(long long)arg1 ;
+(double)referenceColorContrastLevelOfType:(long long)arg1 ;
+(double)referenceColorVibrancyLevelOfType:(long long)arg1 ;
+(double)referenceColorCastLevelOfType:(long long)arg1 ;
+(double)referenceBWStrengthLevelOfType:(long long)arg1 ;
+(double)referenceBWNeutralGammaLevelOfType:(long long)arg1 ;
+(double)referenceBWToneLevelOfType:(long long)arg1 ;
+(double)referenceBWHueLevelOfType:(long long)arg1 ;
+(double)referenceBWGrainLevelOfType:(long long)arg1 ;
+(id)identityModel;
-(id)init;
-(id)description;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSDictionary *)portraitEffectSettings;
-(long long)inputOrientation;
-(void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(double)arg3 ;
-(BOOL)isSmartToneEnabled;
-(double)autoSmartToneLevel;
-(double)smartToneLevel;
-(double)brightnessLevelOffset;
-(double)contrastLevelOffset;
-(double)exposureLevelOffset;
-(double)shadowsLevelOffset;
-(double)blackPointLevelOffset;
-(double)localLightLevelOffset;
-(double)highlightsLevelOffset;
-(BOOL)isSmartColorEnabled;
-(double)autoSmartColorLevel;
-(double)smartColorLevel;
-(double)colorContrastLevelOffset;
-(double)colorVibrancyLevelOffset;
-(double)colorCastLevelOffset;
-(BOOL)isSmartBWEnabled;
-(double)smartBWLevel;
-(double)bwStrengthLevelOffset;
-(double)bwNeutralGammaLevelOffset;
-(double)bwToneLevelOffset;
-(double)bwHueLevelOffset;
-(double)bwGrainLevelOffset;
-(BOOL)isWhiteBalanceEnabled;
-(double)whiteBalanceFaceI;
-(double)whiteBalanceFaceQ;
-(double)whiteBalanceFaceStrength;
-(double)whiteBalanceFaceWarmth;
-(NSString *)effectFilterName;
-(long long)effectFilterVersion;
-(NSString *)autoSmartToneIdentifier;
-(NSString *)autoSmartColorIdentifier;
-(NSDictionary *)smartToneStatistics;
-(NSDictionary *)smartColorStatistics;
-(NSDictionary *)smartBWStatistics;
-(NSDictionary *)autoWhiteBalanceSettings;
-(NSString *)autoWhiteBalanceIdentifier;
-(NSArray *)redEyeCorrections;
-(NSArray *)autoRedEyeCorrections;
-(NSArray *)legacyAutoEnhanceFilters;
-(BOOL)legacyAutoEnhanceIsOn;
-(BOOL)isAutoLoopEnabled;
-(NSDictionary *)autoLoopRecipe;
-(BOOL)isFusionEnabled;
-(NSDictionary *)fusionParameters;
-(BOOL)isTrimEnabled;
-(SCD_Struct_PL26)trimStartTime;
-(SCD_Struct_PL26)trimEndTime;
-(BOOL)isPortraitEffectEnabled;
-(NSString *)portraitEffectFilterName;
-(long long)portraitEffectFilterVersion;
-(BOOL)hasStillPhotoTime;
-(SCD_Struct_PL26)stillPhotoTime;
-(NSNumber *)muted;
-(BOOL)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(BOOL*)arg2 ;
-(BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1 excludingTimesAndMute:(BOOL)arg2 ;
-(BOOL)isEffectFilterEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isGeometryEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isTrimEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isDepthEffectEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isPortraitEffectEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isFilterName:(id)arg1 equalToOtherFilterName:(id)arg2 ;
-(BOOL)isCropConstrained;
-(BOOL)isDictionary:(id)arg1 equalToOtherDictionary:(id)arg2 ;
-(BOOL)isEqualToPhotoEditModel:(id)arg1 ;
-(id)loggableDictionaryRepresentation;
-(BOOL)isVisuallyEqualToPhotoEditModelExcludingVariations:(id)arg1 ;
-(BOOL)isCropConstraintEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isGeometryIdentity;
-(CGRect)inputImageExtent;
-(BOOL)hasIdentityCrop;
-(BOOL)hasRedEyeCorrections;
-(BOOL)hasAnyAutoEnhancement;
-(BOOL)canRenderDepth;
-(BOOL)canRenderPortraitEffect;
-(id)pl_aggregateNameForEffectFilter;
-(id)pl_aggregateNameForPortraitFilter;
-(id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1 ;
-(NSString *)autoLoopFlavor;
-(BOOL)isIdentityModel;
-(BOOL)isDepthEffectEnabled;
-(NSDictionary *)depthEffectSettings;
-(CGSize)inputSize;
-(double)straightenAngleRadiansCW;
-(CGRect)cropRect;
-(long long)cropConstraintWidth;
-(long long)cropConstraintHeight;
-(BOOL)isAutoCropped;
-(long long)userOrientation;
@end
