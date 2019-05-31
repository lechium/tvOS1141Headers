/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRTextRenderer, MRImage;

@interface MREffectCalendar : MREffect {

	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	CGSize mStride;
	CGSize mImageSize;
	CGSize mTextSize;
	CGPoint mBaseImagePosition;
	CGPoint mBaseTextPosition;
	unsigned char mFirstDayWeekday;
	unsigned char mNumberOfDays;
	BOOL mTextWasUpdatedSinceLastRendering;

}
-(id)init;
-(void)setAttributes:(id)arg1 ;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

