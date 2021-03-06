/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <MapKit/MKMapView.h>

@interface PXPlacesMapView : MKMapView {

	double _currentScale;

}

@property (assign) unsigned long long pkMapType; 
@property (assign) double pitch; 
+(id)mapViewWithMarkedLocation:(id)arg1 regionRadius:(double)arg2 frame:(CGRect)arg3 ;
+(SCD_Struct_PX4)MKMapRectForCoordinateRegion:(SCD_Struct_PX4)arg1 ;
+(SCD_Struct_PX4)canonicalMapRect:(SCD_Struct_PX4)arg1 ;
+(SCD_Struct_PX4)mapRectForNearbyQueriesFromRect:(SCD_Struct_PX4)arg1 atScale:(double)arg2 targetViewSize:(CGSize)arg3 ;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(double)zoomLevel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)awakeFromNib;
-(unsigned long long)pkMapType;
-(void)setPkMapType:(unsigned long long)arg1 ;
-(void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)currentViewPort;
-(id)currentViewPortWithThumbnailOverscan;
-(double)_radiansFromDegrees:(double)arg1 ;
-(double)_sampleMapDistanceFromViewPoint:(CGPoint)arg1 toViewPoint:(CGPoint)arg2 ;
-(SCD_Struct_PX4)ppt_cityMapRect;
-(/*^block*/id)ppt_visibleMapRectBlockForQueue:(id)arg1 delay:(double)arg2 ;
-(void)deselectAllAnnotationsAnimated:(BOOL)arg1 ;
@end

