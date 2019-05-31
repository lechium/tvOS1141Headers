/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLTransformComponent.h>

@class NSArray, NSMutableArray, NSMutableDictionary, CAAnimation, NSString;

@interface MDLTransformStack : NSObject <NSCopying, MDLTransformComponent> {

	BOOL _resetsTransform;
	NSMutableArray* _transformOps;
	NSMutableDictionary* _animatedValues;

}

@property (nonatomic,copy) NSMutableArray * transformOps;                       //@synthesize transformOps=_transformOps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animatedValues;              //@synthesize animatedValues=_animatedValues - In the implementation block
@property (nonatomic,readonly) CAAnimation * transformAnimation; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform;                              //@synthesize resetsTransform=_resetsTransform - In the implementation block
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
+(SCD_Struct_MD1)globalTransformWithObject:(id)arg1 atTime:(double)arg2 ;
+(SCD_Struct_MD1)localTransformWithObject:(id)arg1 atTime:(double)arg2 ;
-(id)init;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)keyTimes;
-(double)minimumTime;
-(double)maximumTime;
-(void)setLocalTransform:(SCD_Struct_MD1)arg1 forTime:(double)arg2 ;
-(id)addMatrixOp:(id)arg1 inverse:(BOOL)arg2 ;
-(id)addRotateXOp:(id)arg1 inverse:(BOOL)arg2 ;
-(id)addRotateYOp:(id)arg1 inverse:(BOOL)arg2 ;
-(id)addRotateZOp:(id)arg1 inverse:(BOOL)arg2 ;
-(id)addTranslateOp:(id)arg1 inverse:(BOOL)arg2 ;
-(id)addScaleOp:(id)arg1 inverse:(BOOL)arg2 ;
-(id)addRotateOp:(id)arg1 order:(unsigned long long)arg2 inverse:(BOOL)arg3 ;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(id)animatedVector3WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2 ;
-(id)animatedScalarWithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2 ;
-(id)animatedMatrix4x4WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2 ;
-(SCD_Struct_MD1)localTransformAtTime:(double)arg1 ;
-(void)setLocalTransform:(SCD_Struct_MD1)arg1 ;
-(void)clearTransformStack;
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1 ;
-(id)animatedVector4WithName:(id)arg1 shouldCreateIfMissing:(BOOL)arg2 ;
-(id)animatedValueWithName:(id)arg1 ;
-(NSMutableArray *)transformOps;
-(void)setTransformOps:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)animatedValues;
-(void)setAnimatedValues:(NSMutableDictionary *)arg1 ;
-(SCD_Struct_MD1)matrix;
-(void)setMatrix:(SCD_Struct_MD1)arg1 ;
-(CAAnimation *)transformAnimation;
@end

