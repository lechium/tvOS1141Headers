/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>
#import <libobjc.A.dylib/MKUserLocationHeadingIndicator.h>
#import <libobjc.A.dylib/MKUserLocationHeadingAnimatableIndicator.h>

@class MKUserLocationView, NSString;

@interface MKUserLocationHeadingArrowLayer : CAShapeLayer <MKUserLocationHeadingIndicator, MKUserLocationHeadingAnimatableIndicator> {

	double _maxUncertaintyAngleToShowArrow;
	MKUserLocationView* _userLocationView;
	double _headingRadians;

}

@property (nonatomic,__weak,readonly) MKUserLocationView * userLocationView;              //@synthesize userLocationView=_userLocationView - In the implementation block
@property (assign,nonatomic) double headingRadians;                                       //@synthesize headingRadians=_headingRadians - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MKUserLocationView *)userLocationView;
-(void)animateToSetVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)updateHeading:(double)arg1 ;
-(void)updateTintColor:(id)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(BOOL)_shouldBeVisibleForAccuracy:(double)arg1 ;
-(id)_animationToSetVisible:(BOOL)arg1 ;
-(CGPathRef)_pathWhenVisible:(BOOL)arg1 ;
-(id)_bezierPathWithBaseRadius:(double)arg1 tipRadius:(double)arg2 baseHalfAngle:(double)arg3 ;
-(CGPoint)_positionWhenVisible:(BOOL)arg1 ;
-(double)_baseRadiusWhenVisible:(BOOL)arg1 ;
-(double)_tipRadiusWhenVisible:(BOOL)arg1 ;
-(double)headingRadians;
-(void)setHeadingRadians:(double)arg1 ;
@end

