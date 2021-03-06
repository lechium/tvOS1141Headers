/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigSmartcamClassifier;
#import <Celestial/Celestial-Structs.h>
@class NSLock;

@interface FigSmartcam : NSObject {

	SCD_Struct_Fi72 _hints;
	NSLock* _hintsLock;
	id<FigSmartcamClassifier> _imageClassifier;
	OpaqueFigCaptureISPProcessingSessionRef _ispProcessingSession;
	int _inputImageWidth;
	int _inputImageHeight;
	unsigned _inputImagePixelFormat;

}

@property (readonly) int inputImageWidth;                         //@synthesize inputImageWidth=_inputImageWidth - In the implementation block
@property (readonly) int inputImageHeight;                        //@synthesize inputImageHeight=_inputImageHeight - In the implementation block
@property (readonly) unsigned inputImagePixelFormat;              //@synthesize inputImagePixelFormat=_inputImagePixelFormat - In the implementation block
-(SCD_Struct_Fi71)classifierVersion;
-(id)initWithProcessingType:(int)arg1 ispProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg2 ;
-(id)initWithProcessingType:(int)arg1 ispProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg2 inputImageWidth:(int)arg3 inputImageHeight:(int)arg4 inputImageFormat:(unsigned)arg5 ;
-(BOOL)sceneClassifierWith:(CVBufferRef)arg1 result:(float*)arg2 ;
-(void)sceneHints:(SCD_Struct_Fi72*)arg1 ;
-(BOOL)inputImage:(opaqueCMSampleBufferRef)arg1 ;
-(int)inputImageWidth;
-(int)inputImageHeight;
-(unsigned)inputImagePixelFormat;
-(void)dealloc;
@end

