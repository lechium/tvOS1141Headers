/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface LightingFacePoints : NSObject {

	CGRect faceRect;

}

@property (assign) CGRect faceRect; 
-(id)initWithFaceLandmarkDictionary:(id)arg1 forImageRect:(CGRect)arg2 ;
-(CGPoint*)leftKickLights;
-(CGPoint*)rightKickLights;
-(float)faceWidth;
-(CGPoint)centerNose;
-(CGPoint)bottomShadow;
-(float)faceHeight;
-(CGPoint)centerChin;
-(CGPoint*)noseStrobe;
-(CGPoint*)leftContour;
-(CGPoint*)rightContour;
-(CGPoint*)leftNose;
-(CGPoint*)rightNose;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(CGPoint)leftEye;
-(CGPoint)rightEye;
@end

