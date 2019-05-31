/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/MKUserTrackingButtonTarget.h>

@class _MKUserTrackingButtonController, NSMutableDictionary, MKMapView, NSString;

@interface _MKUserTrackingButton : UIButton <MKUserTrackingButtonTarget> {

	_MKUserTrackingButtonController* _controller;
	NSMutableDictionary* _customImages;
	NSMutableDictionary* _customLandscapeImagePhones;
	NSMutableDictionary* _customImageEdgeInsets;
	BOOL _selectsWhenTracking;
	BOOL _explicitlyEnabled;
	BOOL _internallyEnabled;
	BOOL _applyDefaultImageIfNeeded;
	BOOL _inMiniBar;

}

@property (nonatomic,readonly) _MKUserTrackingButtonController * controller;                                                    //@synthesize controller=_controller - In the implementation block
@property (assign,setter=_setSelectsWhenTracking:,getter=_selectsWhenTracking,nonatomic) BOOL selectsWhenTracking;              //@synthesize selectsWhenTracking=_selectsWhenTracking - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView; 
@property (assign,nonatomic,__weak) id<MKUserTrackingView> userTrackingView; 
@property (nonatomic,readonly) BOOL inMiniBar;                                                                                  //@synthesize inMiniBar=_inMiniBar - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_activityIndicatorClass;
+(id)buttonWithUserTrackingView:(id)arg1 ;
+(id)buttonWithMapView:(id)arg1 ;
+(id)buttonWithMapView:(id)arg1 applyDefaultImageIfNeeded:(BOOL)arg2 ;
+(id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 ;
+(id)buttonWithUserTrackingView:(id)arg1 withType:(long long)arg2 applyDefaultImageIfNeeded:(BOOL)arg3 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)_selectedIndicatorBounds;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)_state;
-(unsigned long long)behavior;
-(void)updateForMiniBarState:(BOOL)arg1 ;
-(_MKUserTrackingButtonController *)controller;
-(void)_setState:(long long)arg1 ;
-(long long)_activityIndicatorStyle;
-(void)_setInternallyEnabled:(BOOL)arg1 ;
-(void)_updateForState:(long long)arg1 ;
-(BOOL)_isHighlightedForState:(long long)arg1 ;
-(void)_repositionViews;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(BOOL)_selectsWhenTracking;
-(void)_setSelectsWhenTracking:(BOOL)arg1 ;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)_setLandscapeImagePhone:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id)_landscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_setImage:(id)arg1 forUserTrackingMode:(long long)arg2 controlState:(unsigned long long)arg3 ;
-(id)_imageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_defaultImageForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(id)_defaultLandscapeImagePhoneForUserTrackingMode:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(UIEdgeInsets)_imageEdgeInsetsForUserTrackingMode:(long long)arg1 ;
-(void)_setImageEdgeInsets:(UIEdgeInsets)arg1 forUserTrackingMode:(long long)arg2 ;
-(BOOL)inMiniBar;
@end

