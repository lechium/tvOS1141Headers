/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@protocol _MKPinAnnotationViewDelegate;
@class UIImageView, UIColor;

@interface MKPinAnnotationView : MKAnnotationView {

	UIImageView* _shadowView;
	UIColor* _pinTintColor;
	id<_MKPinAnnotationViewDelegate> _delegate;
	int _state;
	BOOL _animatesDrop;

}

@property (assign,setter=_setDelegate:,nonatomic,__weak) id<_MKPinAnnotationViewDelegate> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * pinTintColor; 
@property (assign,nonatomic) BOOL animatesDrop; 
@property (assign,nonatomic) unsigned long long pinColor; 
+(Class)layerClass;
+(id)_shadowImage;
+(id)_reuseIdentifier;
+(id)_dropBounceAnimation;
+(id)_bounceAnimation;
+(id)_pinsWithMapType:(unsigned long long)arg1 mapDisplayStyle:(SCD_Struct_MK15)arg2 pinColor:(id)arg3 traits:(id)arg4 ;
+(id)redPinColor;
+(id)purplePinColor;
+(id)greenPinColor;
+(CGPoint)_rightCalloutOffset;
+(CGPoint)_leftCalloutOffset;
+(CGPoint)_calloutOffset;
+(CGSize)_perceivedSize;
+(CGRect)_pinFrameForPosition:(CGPoint)arg1 ;
+(id)_imageForLayer:(long long)arg1 state:(long long)arg2 mapType:(unsigned long long)arg3 traits:(id)arg4 ;
+(id)_imageForState:(long long)arg1 mapType:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3 pinColor:(id)arg4 traits:(id)arg5 ;
+(CGPoint)_perceivedAnchorPoint;
+(CGPoint)_shadowAnchorPoint;
-(void)setCenter:(CGPoint)arg1 ;
-(id)_image;
-(id)description;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<_MKPinAnnotationViewDelegate>)_delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(unsigned long long)pinColor;
-(void)setPinColor:(unsigned long long)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(int)_state;
-(void)_setDelegate:(id)arg1 ;
-(void)_updateShadowLayer;
-(void)_removeAllAnimations;
-(void)_setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(void)setDragState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGPoint)_draggingDropOffset;
-(UIColor *)pinTintColor;
-(void)setPinTintColor:(UIColor *)arg1 ;
-(BOOL)animatesDrop;
-(CGRect)_significantBounds;
-(void)_setMapType:(unsigned long long)arg1 ;
-(id)_pins;
-(id)_highlightedImage;
-(id)_floatingImage;
-(id)_pinBounceImages;
-(id)_pinJumpImages;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_didUpdatePosition;
-(void)_stopDrop;
-(void)_cleanupAfterPinDropAnimation;
-(void)_stopDropAnimationAndDropToPosition;
-(id)_bounceAnimation:(BOOL)arg1 withDelay:(double)arg2 addToLayer:(BOOL)arg3 ;
-(void)_dropFromDistance:(double)arg1 maxDistance:(double)arg2 withDelay:(double)arg3 ;
-(void)_dropAfterDraggingAndRevertPosition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(void)_liftForDraggingAnimated:(BOOL)arg1 ;
-(void)_liftForDraggingAfterBounceAnimated:(BOOL)arg1 ;
-(void)_dropAfterDraggingDidEnd:(id)arg1 ;
-(void)_liftBeforeDropDidEnd:(id)arg1 ;
-(void)_liftDidEnd:(id)arg1 ;
-(void)_invalidateImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setAnimatesDrop:(BOOL)arg1 ;
@end
