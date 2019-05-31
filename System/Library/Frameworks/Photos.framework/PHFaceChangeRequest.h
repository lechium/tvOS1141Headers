/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, PHFaceprint, PHChangeRequestHelper, PHObjectPlaceholder, NSManagedObjectID;

@interface PHFaceChangeRequest : NSObject <PHInsertChangeRequest, PHUpdateChangeRequest> {

	BOOL _clientEntitled;
	NSString* _clientName;
	int _clientProcessID;
	PHFaceprint* _faceprint;
	BOOL _didSetFaceprint;
	BOOL _shouldClearFaceCropGenerationState;
	PHChangeRequestHelper* _helper;

}

@property (assign,nonatomic) BOOL shouldClearFaceCropGenerationState;                        //@synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFace; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (assign,nonatomic) double leftEyeX; 
@property (assign,nonatomic) double leftEyeY; 
@property (assign,nonatomic) double rightEyeX; 
@property (assign,nonatomic) double rightEyeY; 
@property (assign,nonatomic) double mouthX; 
@property (assign,nonatomic) double mouthY; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hasSmile; 
@property (assign,nonatomic) double blurScore; 
@property (assign,getter=isLeftEyeClosed,nonatomic) BOOL leftEyeClosed; 
@property (assign,getter=isRightEyeClosed,nonatomic) BOOL rightEyeClosed; 
@property (nonatomic,copy) id adjustmentVersion; 
@property (assign,nonatomic) long long nameSource; 
@property (assign,nonatomic) long long faceAlgorithmVersion; 
@property (assign,nonatomic) double expressionConfidence; 
@property (assign,nonatomic) long long expressionType1; 
@property (assign,nonatomic) long long expressionType2; 
@property (assign,nonatomic) long long expressionType3; 
@property (assign,nonatomic) double expressionScore1; 
@property (assign,nonatomic) double expressionScore2; 
@property (assign,nonatomic) double expressionScore3; 
@property (assign,nonatomic) double poseRoll; 
@property (assign,nonatomic) double poseYaw; 
@property (assign,nonatomic) double posePitch; 
@property (nonatomic,retain) PHFaceprint * faceprint; 
@property (assign,nonatomic) long long clusterSequenceNumber; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled;                  //@synthesize clientEntitled=_clientEntitled - In the implementation block
@property (nonatomic,readonly) NSString * clientName;                                        //@synthesize clientName=_clientName - In the implementation block
@property (nonatomic,readonly) int clientProcessID;                                          //@synthesize clientProcessID=_clientProcessID - In the implementation block
@property (getter=isNew,readonly) BOOL new; 
@property (nonatomic,readonly) PHChangeRequestHelper * helper;                               //@synthesize helper=_helper - In the implementation block
@property (getter=isMutated,readonly) BOOL mutated; 
+(void)deleteFaces:(id)arg1 ;
+(BOOL)canGenerateUUIDWithoutEntitlements;
+(id)changeRequestForFace:(id)arg1 ;
+(id)creationRequestForFace;
-(void)setHidden:(BOOL)arg1 ;
-(double)size;
-(void)setSize:(double)arg1 ;
-(BOOL)isHidden;
-(NSString *)uuid;
-(BOOL)isNew;
-(BOOL)isInTrash;
-(long long)nameSource;
-(void)setNameSource:(long long)arg1 ;
-(PHFaceprint *)faceprint;
-(BOOL)manual;
-(void)setInTrash:(BOOL)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setManual:(BOOL)arg1 ;
-(long long)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(long long)arg1 ;
-(void)setSourceWidth:(long long)arg1 ;
-(void)setSourceHeight:(long long)arg1 ;
-(double)blurScore;
-(BOOL)hasSmile;
-(BOOL)isLeftEyeClosed;
-(BOOL)isRightEyeClosed;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(void)setAdjustmentVersion:(id)arg1 ;
-(void)setClusterSequenceNumber:(long long)arg1 ;
-(NSString *)managedEntityName;
-(BOOL)isClientEntitled;
-(int)clientProcessID;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(id)initWithXPCDict:(id)arg1 clientEntitlements:(id)arg2 clientName:(id)arg3 clientBundleID:(id)arg4 clientProcessID:(int)arg5 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(BOOL)prepareForServicePreflightCheck:(id*)arg1 ;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1 ;
-(PHChangeRequestHelper *)helper;
-(BOOL)validateMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(void)didMutate;
-(BOOL)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)isMutated;
-(void)setShouldClearFaceCropGenerationState:(BOOL)arg1 ;
-(void)setFaceprint:(PHFaceprint *)arg1 ;
-(PHObjectPlaceholder *)placeholderForCreatedFace;
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
-(void)setLeftEyeClosed:(BOOL)arg1 ;
-(void)setRightEyeClosed:(BOOL)arg1 ;
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
-(BOOL)shouldClearFaceCropGenerationState;
-(double)centerX;
-(double)centerY;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(id)adjustmentVersion;
-(NSString *)clientName;
-(NSManagedObjectID *)objectID;
@end

