/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableDictionary, NSMutableArray, FCRFaceDetector;

@interface CIBurstImageFaceAnalysisContext : NSObject {

	NSMutableDictionary* curConfig;
	NSMutableDictionary* faceIdMapping;
	NSMutableDictionary* renameMapping;
	int faceIdCounter;
	NSMutableArray* faceInfoArray;
	int numFramesSinceFullFaceCore;
	int numFramesNoFaces;
	FCRFaceDetector* faceDetector;
	NSMutableArray* faceTimestampArray;
	double latestImageTimestamp;
	int lastFaceIndex;
	BOOL forceFaceDetectionEnable;
	int _version;
	double timeBlinkDetectionDone;
	double timeFaceDetectionDone;
	double latestFaceTimestamp;

}

@property (assign) double timeFaceDetectionDone; 
@property (assign) double timeBlinkDetectionDone; 
@property (assign) BOOL forceFaceDetectionEnable; 
@property (assign) double latestFaceTimestamp; 
@property (assign) int version;                                //@synthesize version=_version - In the implementation block
-(id)initWithVersion:(id)arg1 ;
-(void)setForceFaceDetectionEnable:(BOOL)arg1 ;
-(double)latestFaceTimestamp;
-(void)addFacesToImageStat:(id)arg1 imageSize:(CGSize)arg2 ;
-(int)findFacesInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)setTimeFaceDetectionDone:(double)arg1 ;
-(void)setTimeBlinkDetectionDone:(double)arg1 ;
-(double)timeFaceDetectionDone;
-(double)timeBlinkDetectionDone;
-(void)calculateFaceFocusInImage:(id)arg1 imageStat:(id)arg2 ;
-(void)adjustFaceIdsForImageStat:(id)arg1 ;
-(void)dumpFaceInfoArray;
-(void)extractFacesFromMetadata:(id)arg1 ;
-(void)calcFaceScores:(id)arg1 ;
-(BOOL)forceFaceDetectionEnable;
-(CGRect)padRoiRect:(CGRect)arg1 paddingX:(float)arg2 paddingY:(float)arg3 ;
-(void)setupFaceDetector;
-(CGRect)calculateFaceCoreROI:(id)arg1 imageStat:(id)arg2 needFaceCore:(BOOL*)arg3 ;
-(id)findOverlappingFaceStat:(CGRect)arg1 imageStat:(id)arg2 ;
-(void)addFaceToArray:(id)arg1 ;
-(void)setLatestFaceTimestamp:(double)arg1 ;
-(void)dealloc;
-(void)setVersion:(int)arg1 ;
-(int)version;
@end

