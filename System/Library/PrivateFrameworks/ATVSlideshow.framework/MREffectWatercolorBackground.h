/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {

	MRImageProvider* mPlasmaProvider;

}
-(void)_cleanup;
-(void)setAttributes:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

