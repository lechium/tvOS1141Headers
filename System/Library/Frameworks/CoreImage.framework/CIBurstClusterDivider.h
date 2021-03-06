/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CIBurstClusterDivider : NSObject {

	float dividerScore;
	int trueLocalMaximum;
	int leftImage;
	float actionAmount;
	float noiseThreshold;
	float highNoiseThreshold;

}

@property (assign) float dividerScore; 
@property (assign) int trueLocalMaximum; 
@property (assign) int leftImage; 
@property (assign) float actionAmount; 
@property (assign) float noiseThreshold; 
@property (assign) float highNoiseThreshold; 
-(void)setDividerScore:(float)arg1 ;
-(void)setActionAmount:(float)arg1 ;
-(float)dividerScore;
-(void)setNoiseThreshold:(float)arg1 ;
-(void)setHighNoiseThreshold:(float)arg1 ;
-(float)noiseThreshold;
-(float)highNoiseThreshold;
-(void)setTrueLocalMaximum:(int)arg1 ;
-(long long)compareDividers:(id)arg1 ;
-(long long)compareIndices:(id)arg1 ;
-(float)actionAmount;
-(long long)compareActionAmounts:(id)arg1 ;
-(int)trueLocalMaximum;
-(void)setLeftImage:(int)arg1 ;
-(int)leftImage;
@end

