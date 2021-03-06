/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CVMLRequestHandler;

@interface PVCVMLHelper : NSObject {

	CVMLRequestHandler* _requestHandler;

}

@property (nonatomic,retain) CVMLRequestHandler * requestHandler;              //@synthesize requestHandler=_requestHandler - In the implementation block
-(void)setRequestHandler:(CVMLRequestHandler *)arg1 ;
-(CVMLRequestHandler *)requestHandler;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(float)distanceBetweenFaceObservation:(id)arg1 andFaceObservation:(id)arg2 error:(id*)arg3 ;
-(id)faceObservationFromFace:(id)arg1 ;
-(id)representativenessFromFaceObservations:(id)arg1 error:(id*)arg2 ;
@end

