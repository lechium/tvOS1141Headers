/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>
#import <libobjc.A.dylib/PFPhotosFaceRepresentation.h>

@class NSString, PVFaceprint;

@interface PVFace : PVObject <PFPhotosFaceRepresentation> {

	BOOL _hidden;
	BOOL _isInTrash;
	BOOL _manual;
	BOOL _isTooSmall;
	BOOL _hasSmile;
	BOOL _isLeftEyeClosed;
	BOOL _isRightEyeClosed;
	int _trainingType;
	unsigned _faceAlgorithmVersion;
	NSString* _personLocalIdentifier;
	long long _sourceWidth;
	long long _sourceHeight;
	double _centerX;
	double _centerY;
	double _size;
	double _leftEyeX;
	double _leftEyeY;
	double _rightEyeX;
	double _rightEyeY;
	double _mouthX;
	double _mouthY;
	double _blurScore;
	double _exposureScore;
	NSString* _adjustmentVersion;
	long long _nameSource;
	double _poseRoll;
	double _poseYaw;
	double _posePitch;
	double _expressionConfidence;
	long long _expressionType1;
	long long _expressionType2;
	long long _expressionType3;
	double _expressionScore1;
	double _expressionScore2;
	double _expressionScore3;
	long long _clusterSequenceNumber;
	long long _qualityMeasure;
	PVFaceprint* _faceprint;

}

@property (nonatomic,copy) NSString * personLocalIdentifier;               //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (assign,nonatomic) long long sourceWidth;                        //@synthesize sourceWidth=_sourceWidth - In the implementation block
@property (assign,nonatomic) long long sourceHeight;                       //@synthesize sourceHeight=_sourceHeight - In the implementation block
@property (assign,nonatomic) double centerX;                               //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) double centerY;                               //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) double size;                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double leftEyeX;                              //@synthesize leftEyeX=_leftEyeX - In the implementation block
@property (assign,nonatomic) double leftEyeY;                              //@synthesize leftEyeY=_leftEyeY - In the implementation block
@property (assign,nonatomic) double rightEyeX;                             //@synthesize rightEyeX=_rightEyeX - In the implementation block
@property (assign,nonatomic) double rightEyeY;                             //@synthesize rightEyeY=_rightEyeY - In the implementation block
@property (assign,nonatomic) double mouthX;                                //@synthesize mouthX=_mouthX - In the implementation block
@property (assign,nonatomic) double mouthY;                                //@synthesize mouthY=_mouthY - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                  //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) BOOL isInTrash;                               //@synthesize isInTrash=_isInTrash - In the implementation block
@property (assign,nonatomic) BOOL manual;                                  //@synthesize manual=_manual - In the implementation block
@property (assign,nonatomic) BOOL isTooSmall;                              //@synthesize isTooSmall=_isTooSmall - In the implementation block
@property (assign,nonatomic) BOOL hasSmile;                                //@synthesize hasSmile=_hasSmile - In the implementation block
@property (assign,nonatomic) double blurScore;                             //@synthesize blurScore=_blurScore - In the implementation block
@property (assign,nonatomic) double exposureScore;                         //@synthesize exposureScore=_exposureScore - In the implementation block
@property (assign,nonatomic) BOOL isLeftEyeClosed;                         //@synthesize isLeftEyeClosed=_isLeftEyeClosed - In the implementation block
@property (assign,nonatomic) BOOL isRightEyeClosed;                        //@synthesize isRightEyeClosed=_isRightEyeClosed - In the implementation block
@property (nonatomic,copy) NSString * adjustmentVersion;                   //@synthesize adjustmentVersion=_adjustmentVersion - In the implementation block
@property (assign,nonatomic) long long nameSource;                         //@synthesize nameSource=_nameSource - In the implementation block
@property (assign,nonatomic) int trainingType;                             //@synthesize trainingType=_trainingType - In the implementation block
@property (assign,nonatomic) double poseRoll;                              //@synthesize poseRoll=_poseRoll - In the implementation block
@property (assign,nonatomic) double poseYaw;                               //@synthesize poseYaw=_poseYaw - In the implementation block
@property (assign,nonatomic) double posePitch;                             //@synthesize posePitch=_posePitch - In the implementation block
@property (assign,nonatomic) unsigned faceAlgorithmVersion;                //@synthesize faceAlgorithmVersion=_faceAlgorithmVersion - In the implementation block
@property (assign,nonatomic) double expressionConfidence;                  //@synthesize expressionConfidence=_expressionConfidence - In the implementation block
@property (assign,nonatomic) long long expressionType1;                    //@synthesize expressionType1=_expressionType1 - In the implementation block
@property (assign,nonatomic) long long expressionType2;                    //@synthesize expressionType2=_expressionType2 - In the implementation block
@property (assign,nonatomic) long long expressionType3;                    //@synthesize expressionType3=_expressionType3 - In the implementation block
@property (assign,nonatomic) double expressionScore1;                      //@synthesize expressionScore1=_expressionScore1 - In the implementation block
@property (assign,nonatomic) double expressionScore2;                      //@synthesize expressionScore2=_expressionScore2 - In the implementation block
@property (assign,nonatomic) double expressionScore3;                      //@synthesize expressionScore3=_expressionScore3 - In the implementation block
@property (assign,nonatomic) long long clusterSequenceNumber;              //@synthesize clusterSequenceNumber=_clusterSequenceNumber - In the implementation block
@property (assign,nonatomic) long long qualityMeasure;                     //@synthesize qualityMeasure=_qualityMeasure - In the implementation block
@property (nonatomic,retain) PVFaceprint * faceprint;                      //@synthesize faceprint=_faceprint - In the implementation block
+(id)faceForCVMLFaceObservation:(id)arg1 fromImage:(id)arg2 error:(id*)arg3 ;
+(id)faceWithFace:(id)arg1 copyPropertiesOption:(long long)arg2 ;
+(id)faceForCVMLFaceObservation:(id)arg1 fromImageWithPixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 error:(id*)arg4 ;
-(CGRect)normalizedFaceRect;
-(void)setHidden:(BOOL)arg1 ;
-(double)size;
-(void)setSize:(double)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hidden;
-(BOOL)isInTrash;
-(long long)nameSource;
-(void)setNameSource:(long long)arg1 ;
-(int)trainingType;
-(PVFaceprint *)faceprint;
-(BOOL)manual;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(unsigned)faceAlgorithmVersion;
-(void)setTrainingType:(int)arg1 ;
-(void)setFaceAlgorithmVersion:(unsigned)arg1 ;
-(void)setSourceWidth:(long long)arg1 ;
-(void)setSourceHeight:(long long)arg1 ;
-(double)blurScore;
-(BOOL)hasSmile;
-(BOOL)isLeftEyeClosed;
-(BOOL)isRightEyeClosed;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(long long)photosFaceRepresentationSourceWidth;
-(long long)photosFaceRepresentationSourceHeight;
-(double)photosFaceRepresentationCenterX;
-(double)photosFaceRepresentationCenterY;
-(double)photosFaceRepresentationSize;
-(double)photosFaceRepresentationBlurScore;
-(BOOL)photosFaceRepresentationHasSmile;
-(BOOL)photosFaceRepresentationIsLeftEyeClosed;
-(BOOL)photosFaceRepresentationIsRightEyeClosed;
-(long long)photosFaceRepresentationQualityMeasure;
-(long long)photosFaceRepresentationClusterSequenceNumber;
-(id)photosFaceRepresentationLocalIdentifier;
-(void)setAdjustmentVersion:(NSString *)arg1 ;
-(void)setClusterSequenceNumber:(long long)arg1 ;
-(void)setFaceprint:(PVFaceprint *)arg1 ;
-(double)leftEyeX;
-(void)setLeftEyeX:(double)arg1 ;
-(double)leftEyeY;
-(void)setLeftEyeY:(double)arg1 ;
-(double)rightEyeX;
-(void)setRightEyeX:(double)arg1 ;
-(double)rightEyeY;
-(void)setRightEyeY:(double)arg1 ;
-(double)mouthX;
-(void)setMouthX:(double)arg1 ;
-(double)mouthY;
-(void)setMouthY:(double)arg1 ;
-(void)setHasSmile:(BOOL)arg1 ;
-(void)setBlurScore:(double)arg1 ;
-(double)expressionConfidence;
-(void)setExpressionConfidence:(double)arg1 ;
-(long long)expressionType1;
-(void)setExpressionType1:(long long)arg1 ;
-(long long)expressionType2;
-(void)setExpressionType2:(long long)arg1 ;
-(long long)expressionType3;
-(void)setExpressionType3:(long long)arg1 ;
-(double)expressionScore1;
-(void)setExpressionScore1:(double)arg1 ;
-(double)expressionScore2;
-(void)setExpressionScore2:(double)arg1 ;
-(double)expressionScore3;
-(void)setExpressionScore3:(double)arg1 ;
-(double)poseRoll;
-(void)setPoseRoll:(double)arg1 ;
-(double)poseYaw;
-(void)setPoseYaw:(double)arg1 ;
-(double)posePitch;
-(void)setPosePitch:(double)arg1 ;
-(void)setQualityMeasure:(long long)arg1 ;
-(void)setExposureScore:(double)arg1 ;
-(double)exposureScore;
-(NSString *)personLocalIdentifier;
-(double)centerX;
-(double)centerY;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(NSString *)adjustmentVersion;
-(void)setIsTooSmall:(BOOL)arg1 ;
-(void)_copyPropertiesFrom:(id)arg1 copyPropertiesOption:(long long)arg2 ;
-(void)setCoordinatesAndFeaturesFromFace:(id)arg1 ;
-(BOOL)isTooSmall;
-(BOOL)setCenterAndSizeFromNormalizedFaceRect:(CGRect)arg1 ;
-(CGRect)absoluteFaceRect;
-(CGRect)absoluteFaceRectForImageSize:(CGSize)arg1 ;
-(void)setPersonLocalIdentifier:(NSString *)arg1 ;
-(void)setIsLeftEyeClosed:(BOOL)arg1 ;
-(void)setIsRightEyeClosed:(BOOL)arg1 ;
-(void)setIsInTrash:(BOOL)arg1 ;
@end
