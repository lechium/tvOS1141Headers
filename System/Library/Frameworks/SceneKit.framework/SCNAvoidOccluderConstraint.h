/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNAvoidOccluderConstraint : SCNConstraint {

	SCNNode* _target;
	unsigned long long _categoryBitMask;
	float _offset;
	id _delegate;

}

@property (assign,nonatomic) id<SCNAvoidOccluderConstraintDelegate> delegate; 
@property (nonatomic,retain) SCNNode * target; 
@property (assign,nonatomic) unsigned long long occluderCategoryBitMask; 
@property (assign,nonatomic) double bias; 
+(BOOL)supportsSecureCoding;
+(id)avoidOccluderConstraint;
+(id)avoidOccluderConstraintWithTarget:(id)arg1 ;
-(id)init;
-(id<SCNAvoidOccluderConstraintDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCNAvoidOccluderConstraintDelegate>)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTarget:(SCNNode *)arg1 ;
-(SCNNode *)target;
-(double)bias;
-(unsigned long long)occluderCategoryBitMask;
-(void)setOccluderCategoryBitMask:(unsigned long long)arg1 ;
-(void)setBias:(double)arg1 ;
-(void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1 ;
@end

