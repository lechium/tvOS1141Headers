/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSessionProxy.h>

@protocol FigCaptureSessionPreviewTapDelegate;
@interface FigRecorderProxy : FigCaptureSessionProxy {

	OpaqueFigRecorderRef _recorder;
	long long _identifier;
	BOOL _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}
-(id)initWithFigRecorder:(OpaqueFigRecorderRef)arg1 identifier:(long long)arg2 ;
-(int)openPreviewTapWithDelegate:(id)arg1 ;
-(void)closePreviewTap;
-(void)dealloc;
-(long long)identifier;
@end

