/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFSlowMotionRampConfiguration : NSObject {

	float _playbackRampCurveExponent;
	float _exportRampCurveExponent;
	double _rampTime;
	double _introTime;
	double _outroTime;
	double _volumeSuppressionIntroTime;
	double _volumeSuppressionOutroTime;
	unsigned long long _playbackNumIntermediateSteps;
	unsigned long long _exportNumIntermediateSteps;

}

@property (nonatomic,readonly) double rampTime;                                              //@synthesize rampTime=_rampTime - In the implementation block
@property (nonatomic,readonly) double introTime;                                             //@synthesize introTime=_introTime - In the implementation block
@property (nonatomic,readonly) double outroTime;                                             //@synthesize outroTime=_outroTime - In the implementation block
@property (nonatomic,readonly) double volumeSuppressionIntroTime;                            //@synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime - In the implementation block
@property (nonatomic,readonly) double volumeSuppressionOutroTime;                            //@synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime - In the implementation block
@property (nonatomic,readonly) unsigned long long playbackNumIntermediateSteps;              //@synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps - In the implementation block
@property (nonatomic,readonly) unsigned long long exportNumIntermediateSteps;                //@synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps - In the implementation block
@property (nonatomic,readonly) float playbackRampCurveExponent;                              //@synthesize playbackRampCurveExponent=_playbackRampCurveExponent - In the implementation block
@property (nonatomic,readonly) float exportRampCurveExponent;                                //@synthesize exportRampCurveExponent=_exportRampCurveExponent - In the implementation block
-(id)init;
-(unsigned long long)exportNumIntermediateSteps;
-(unsigned long long)playbackNumIntermediateSteps;
-(double)rampTime;
-(double)introTime;
-(double)outroTime;
-(float)exportRampCurveExponent;
-(float)playbackRampCurveExponent;
-(id)initForRampDown:(BOOL)arg1 ;
-(double)volumeSuppressionIntroTime;
-(double)volumeSuppressionOutroTime;
-(void)computeRampToTargetRate:(float)arg1 forExport:(BOOL)arg2 outTimeSteps:(id*)arg3 outIntermediateRates:(id*)arg4 ;
@end

