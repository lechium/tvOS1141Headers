/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKOverlay;
#import <MapKit/MapKit-Structs.h>
@interface MKOverlayRenderer : NSObject {

	id<MKOverlay> _overlay;
	SCD_Struct_MK1 _boundingMapRect;
	id _renderer;
	double _contentScaleFactor;
	double _alpha;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign) double alpha;                                   //@synthesize alpha=_alpha - In the implementation block
@property (readonly) double contentScaleFactor; 
-(id)init;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setAlpha:(double)arg1 ;
-(double)contentScaleFactor;
-(double)alpha;
-(id<MKOverlay>)overlay;
-(id)initWithOverlay:(id)arg1 ;
-(void)drawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 inContext:(CGContextRef)arg3 ;
-(BOOL)canDrawMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(SCD_Struct_MK1)_boundingMapRect;
-(id)_renderer;
-(CGSize)_originMapPoint;
-(id)_mk_overlayView;
-(id)_mk_overlayLayer;
-(CGPoint)pointForMapPoint:(CGSize)arg1 ;
-(CGSize)mapPointForPoint:(CGPoint)arg1 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)mapRectForRect:(CGRect)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK1)arg1 ;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK1)arg1 zoomScale:(double)arg2 ;
-(void)set_boundingMapRect:(SCD_Struct_MK1)arg1 ;
-(void)set_renderer:(id)arg1 ;
-(BOOL)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK12*)arg2 ;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK12*)arg2 inContext:(CGContextRef)arg3 ;
@end

