/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSAudioPowerMeter : NSObject {

	int _averagePowerI;
	BOOL _instantaneousMode;
	double _peak;
	double _maxPeak;
	double _decay;
	double _peakDecay;
	double _averagePowerPeak;
	int _peakHoldCount;
	double _sampleRate;
	int _previousBlockSize;
	double _decay1;
	double _peakDecay1;

}
-(void)_reset;
-(void)reset;
-(void)_scaleDecayConstants:(int)arg1 ;
-(void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3 ;
-(double)_linearToDB:(double)arg1 ;
-(double)_ampToDB:(double)arg1 ;
-(void)process:(const short*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3 ;
-(double)getPeakPowerDB;
-(double)getAveragePowerDB;
-(id)initWithSampleRate:(float)arg1 ;
@end
