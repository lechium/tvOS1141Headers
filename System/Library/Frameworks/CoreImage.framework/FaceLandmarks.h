/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class ComputedFaceData, Polyline, PolylinePair;

@interface FaceLandmarks : NSObject {

	CGPoint eyebrowLeft[4];
	CGPoint eyebrowRight[4];
	CGPoint mouthTop[7];
	CGPoint mouthBottom[5];
	CGPoint upperLipBottom[5];
	CGPoint lowerLipTop[5];
	CGPoint leftEyeUpper[5];
	CGPoint rightEyeUpper[5];
	CGPoint leftEyeLowerR2L[5];
	CGPoint rightEyeLowerR2L[5];
	CGPoint leftSideFace[6];
	CGPoint rightSideFace[6];
	CGPoint leftTopFace[6];
	CGPoint rightTopFace[6];
	CGPoint topFace[11];
	CGPoint bottomFace[11];
	CGPoint noseOutline[9];
	CGPoint noseRightSide[6];
	CGPoint noseLeftSide[6];
	CGPoint noseCenterline[3];
	CGPoint noseTip[7];
	CGPoint leftEye;
	CGPoint rightEye;
	float iOD;
	float polylineDelta;
	ComputedFaceData* _faceData;
	Polyline* _eyebrowRightTopLine;
	Polyline* _eyebrowLeftTopLine;
	Polyline* _mouthTopLine;
	Polyline* _mouthBottomLine;
	PolylinePair* _leftEyePair;
	PolylinePair* _rightEyePair;
	PolylinePair* _mouthPerimeterLinePair;
	PolylinePair* _headPerimeterLinePair;
	PolylinePair* _teethPair;
	PolylinePair* _nosePair;
	CGPathRef _noseTipPerimeterPath;
	CGPathRef _headPerimeter;
	CGPoint _leftToRightVec;
	CGPoint _upVec;
	CGRect _imageRect;

}

@property (assign) CGRect imageRect;                                   //@synthesize imageRect=_imageRect - In the implementation block
@property (retain) ComputedFaceData * faceData;                        //@synthesize faceData=_faceData - In the implementation block
@property (retain) Polyline * eyebrowRightTopLine;                     //@synthesize eyebrowRightTopLine=_eyebrowRightTopLine - In the implementation block
@property (retain) Polyline * eyebrowLeftTopLine;                      //@synthesize eyebrowLeftTopLine=_eyebrowLeftTopLine - In the implementation block
@property (retain) Polyline * mouthTopLine;                            //@synthesize mouthTopLine=_mouthTopLine - In the implementation block
@property (retain) Polyline * mouthBottomLine;                         //@synthesize mouthBottomLine=_mouthBottomLine - In the implementation block
@property (retain) PolylinePair * leftEyePair;                         //@synthesize leftEyePair=_leftEyePair - In the implementation block
@property (retain) PolylinePair * rightEyePair;                        //@synthesize rightEyePair=_rightEyePair - In the implementation block
@property (retain) PolylinePair * mouthPerimeterLinePair;              //@synthesize mouthPerimeterLinePair=_mouthPerimeterLinePair - In the implementation block
@property (retain) PolylinePair * headPerimeterLinePair;               //@synthesize headPerimeterLinePair=_headPerimeterLinePair - In the implementation block
@property (retain) PolylinePair * teethPair;                           //@synthesize teethPair=_teethPair - In the implementation block
@property (retain) PolylinePair * nosePair;                            //@synthesize nosePair=_nosePair - In the implementation block
@property (assign) CGPathRef noseTipPerimeterPath;                     //@synthesize noseTipPerimeterPath=_noseTipPerimeterPath - In the implementation block
@property (assign) CGPathRef headPerimeter;                            //@synthesize headPerimeter=_headPerimeter - In the implementation block
@property (assign) CGPoint leftToRightVec;                             //@synthesize leftToRightVec=_leftToRightVec - In the implementation block
@property (assign) CGPoint upVec;                                      //@synthesize upVec=_upVec - In the implementation block
-(void)setFaceData:(ComputedFaceData *)arg1 ;
-(void)setLeftToRightVec:(CGPoint)arg1 ;
-(CGPoint)leftToRightVec;
-(void)setUpVec:(CGPoint)arg1 ;
-(ComputedFaceData *)faceData;
-(void)setNoseTipPerimeterPath:(CGPathRef)arg1 ;
-(void)setHeadPerimeter:(CGPathRef)arg1 ;
-(void)setMouthPerimeterLinePair:(PolylinePair *)arg1 ;
-(PolylinePair *)mouthPerimeterLinePair;
-(void)setHeadPerimeterLinePair:(PolylinePair *)arg1 ;
-(PolylinePair *)headPerimeterLinePair;
-(void)setLeftEyePair:(PolylinePair *)arg1 ;
-(PolylinePair *)leftEyePair;
-(void)setRightEyePair:(PolylinePair *)arg1 ;
-(PolylinePair *)rightEyePair;
-(void)setTeethPair:(PolylinePair *)arg1 ;
-(PolylinePair *)teethPair;
-(void)setNosePair:(PolylinePair *)arg1 ;
-(PolylinePair *)nosePair;
-(void)setEyebrowRightTopLine:(Polyline *)arg1 ;
-(void)setEyebrowLeftTopLine:(Polyline *)arg1 ;
-(void)setMouthTopLine:(Polyline *)arg1 ;
-(void)setMouthBottomLine:(Polyline *)arg1 ;
-(id)initWithFaceLandmarks:(id)arg1 forImageRect:(CGRect)arg2 ;
-(Polyline *)eyebrowRightTopLine;
-(Polyline *)eyebrowLeftTopLine;
-(Polyline *)mouthTopLine;
-(Polyline *)mouthBottomLine;
-(CGPathRef)noseTipPerimeterPath;
-(CGPathRef)headPerimeter;
-(CGPoint)upVec;
-(void)dealloc;
-(CGRect)imageRect;
-(void)setImageRect:(CGRect)arg1 ;
@end

