/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class OFPageViewController;

@interface _OFPageViewControllerContentViewLayer : CALayer {

	OFPageViewController* _progressReportDelegate;
	double _progress;

}

@property (assign,nonatomic) OFPageViewController * progressReportDelegate;              //@synthesize progressReportDelegate=_progressReportDelegate - In the implementation block
@property (assign,nonatomic) double progress;                                            //@synthesize progress=_progress - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(id)initWithLayer:(id)arg1 ;
-(void)setProgressReportDelegate:(OFPageViewController *)arg1 ;
-(OFPageViewController *)progressReportDelegate;
@end

