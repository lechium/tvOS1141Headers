/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRTransition.h>

@class MRCAMLBezierData, MRImageProvider;

@interface MRTransitionFlatPageFlip : MRTransition {

	MRCAMLBezierData* mCurves[2];
	MRImageProvider* mPortraitShadow;

}
-(void)unload;
-(void)cleanup;
-(id)initWithTransitionID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

