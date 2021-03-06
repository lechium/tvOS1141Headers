/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNGeometry.h>

@interface SCNSphere : SCNGeometry {

	double _sphereradius;
	double _sphereradialSpan;
	long long _spheresegmentCount;
	long long _sphereprimitiveType;
	BOOL _spheregeodesic;
	BOOL _spherehemispheric;

}

@property (assign,nonatomic) double radius; 
@property (assign,getter=isGeodesic,nonatomic) BOOL geodesic; 
@property (assign,nonatomic) long long segmentCount; 
+(BOOL)supportsSecureCoding;
+(id)sphereWithRadius:(double)arg1 ;
-(id)init;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(long long)primitiveType;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(id)presentationGeometry;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)setGeodesic:(BOOL)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(void)_syncObjCModel:(_C3DParametricGeometry*)arg1 ;
-(id)initPresentationParametricGeometryWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)initWithParametricGeometryRef:(_C3DParametricGeometry*)arg1 ;
-(id)presentationSphere;
-(BOOL)isGeodesic;
-(double)radialSpan;
-(void)setRadialSpan:(double)arg1 ;
-(long long)segmentCount;
-(void)setSegmentCount:(long long)arg1 ;
-(BOOL)isHemispheric;
-(void)setHemispheric:(BOOL)arg1 ;
-(BOOL)geodesic;
@end

