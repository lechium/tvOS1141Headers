/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIView, UIImageView;

@interface _MKZoomSliderView : UIView {

	NSLayoutConstraint* _knobCenterYConstraint;
	UIView* _knob;
	double _zoomFraction;
	BOOL _active;
	UIImageView* _shadowImageView;
	double _lastTrackShadowImageScale;

}

@property (assign,nonatomic) double zoomFraction;                      //@synthesize zoomFraction=_zoomFraction - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isActive;
-(void)updateConstraints;
-(void)setActive:(BOOL)arg1 ;
-(void)setZoomFraction:(double)arg1 ;
-(double)zoomFraction;
@end

