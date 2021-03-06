/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigSmartcam.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface FigSmartcamAsync : FigSmartcam {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _inputImageRunning;
	BOOL _inputImageReady;
	BOOL _hasValidHints;
	opaqueCMSampleBufferRef _localSampleBuffer;

}
-(BOOL)inputImage:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)hasValidHints;
-(id)initWithQueue:(id)arg1 ;
@end

