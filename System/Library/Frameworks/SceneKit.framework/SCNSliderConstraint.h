/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@interface SCNSliderConstraint : SCNConstraint {

	unsigned long long _categoryBitMask;
	SCNVector3 _offset;
	float _radius;

}

@property (assign,nonatomic) unsigned long long collisionCategoryBitMask; 
@property (assign,nonatomic) double radius; 
@property (assign,nonatomic) SCNVector3 offset; 
+(BOOL)supportsSecureCoding;
+(id)sliderConstraint;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(SCNVector3)arg1 ;
-(SCNVector3)offset;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(unsigned long long)collisionCategoryBitMask;
-(void)setCollisionCategoryBitMask:(unsigned long long)arg1 ;
@end

