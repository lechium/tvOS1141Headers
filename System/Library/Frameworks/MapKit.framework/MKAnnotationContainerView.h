/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/VKCustomFeatureDataSource.h>
#import <libobjc.A.dylib/MKAnnotationCalloutControllerDelegate.h>
#import <libobjc.A.dylib/_MKPinAnnotationViewDelegate.h>

@protocol MKAnnotationContainerViewDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, MKAnnotationView, NSMutableSet, MKAnnotationCalloutController, _MKBalloonAnnotationCalloutController, NSString, MKPinAnnotationView, UIPopoverController;

@interface MKAnnotationContainerView : UIView <VKCustomFeatureDataSource, MKAnnotationCalloutControllerDelegate, _MKPinAnnotationViewDelegate> {

	NSMutableOrderedSet* _annotationViews;
	NSMutableDictionary* _clusteringAnnotationViews;
	NSMutableArray* _customFeatureDataSourceObservers;
	NSMutableArray* _awaitingDropPins;
	MKAnnotationView* _selectedAnnotationView;
	MKAnnotationView* _annotationViewToSelect;
	id<MKAnnotationContainerViewDelegate> _delegate;
	MKAnnotationView* _draggingAnnotationView;
	CGPoint _previousMouseDragPoint;
	double _previousMouseDragTimeStamp;
	CGPoint _mouseDownPoint;
	CGPoint _draggingAnnotationViewCenter;
	unsigned long long _mapType;
	BOOL _clickedOnAnnotationView;
	BOOL _didDragAnnotationView;
	MKAnnotationView* _userLocationView;
	double _annotationViewsRotationRadians;
	CGAffineTransform _mapTransform;
	BOOL _suppressCallout;
	NSMutableSet* _viewsToAnimate;
	MKAnnotationCalloutController* _calloutController;
	_MKBalloonAnnotationCalloutController* _balloonCalloutController;
	double _mapPitchRadians;
	SCD_Struct_MK15 _mapDisplayStyle;
	BOOL _mapFocused;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MKPinAnnotationView * bubblePin; 
@property (assign,nonatomic) BOOL suppressCallout;                                               //@synthesize suppressCallout=_suppressCallout - In the implementation block
@property (nonatomic,readonly) UIPopoverController * popoverController; 
@property (assign,nonatomic) BOOL allowsPopoverWhenNotInWindow; 
@property (nonatomic,readonly) MKAnnotationView * calloutAnnotationView; 
@property (nonatomic,readonly) MKAnnotationView * userLocationView; 
@property (assign,nonatomic,__weak) id<MKAnnotationContainerViewDelegate> delegate; 
@property (nonatomic,readonly) NSMutableOrderedSet * annotationViews; 
@property (assign,nonatomic) unsigned long long mapType; 
@property (nonatomic,readonly) SCD_Struct_MK37 currentComparisonContext; 
@property (nonatomic,readonly) BOOL hasDroppingPins; 
@property (nonatomic,readonly) BOOL hasPendingAnimations; 
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKAnnotationContainerViewDelegate>)delegate;
-(void)setDelegate:(id<MKAnnotationContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(CGRect)_visibleRect;
-(UIPopoverController *)popoverController;
-(BOOL)hasPendingAnimations;
-(CGPoint)convertCoordinate:(CLLocationCoordinate2D)arg1 toPointToView:(id)arg2 ;
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK1)_mapRectWithFraction:(double)arg1 ofVisible:(SCD_Struct_MK1)arg2 ;
-(MKAnnotationView *)userLocationView;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(BOOL)isCalloutExpanded;
-(CGRect)_visibleCenteringRectInView:(id)arg1 ;
-(void)setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(void)setMapFocused:(BOOL)arg1 ;
-(BOOL)allowsPopoverWhenNotInWindow;
-(void)setAllowsPopoverWhenNotInWindow:(BOOL)arg1 ;
-(void)addAnnotationView:(id)arg1 allowAnimation:(BOOL)arg2 ;
-(void)removeAnnotationView:(id)arg1 ;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)suppressUpdates;
-(void)stopSuppressingUpdates;
-(void)updateAnnotationViewsForReason:(long long)arg1 ;
-(void)_updateAddedAnnotationRotation:(id)arg1 ;
-(void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2 ;
-(void)pinDidDrop:(id)arg1 animated:(BOOL)arg2 ;
-(void)calloutControllerDidFinishMapsTransitionExpanding:(id)arg1 ;
-(CGRect)calloutController:(id)arg1 visibleCenteringRectInAnnotationView:(id)arg2 ;
-(void)calloutController:(id)arg1 scrollToRevealCalloutWithOffset:(CGPoint)arg2 annotationCoordinate:(CLLocationCoordinate2D)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)calloutController:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)calloutDidAppearForAnnotationView:(id)arg1 inCalloutController:(id)arg2 ;
-(void)calloutController:(id)arg1 calloutPrimaryActionTriggeredForAnnotationView:(id)arg2 ;
-(id)activeCalloutController;
-(void)setMapPitchRadians:(double)arg1 ;
-(CGRect)popoverTargetRectForSelectedAnnotationInView:(id)arg1 ;
-(void)setCalloutsShouldHaveParallax:(BOOL)arg1 ;
-(CGRect)_visibleCenteringRect;
-(MKAnnotationView *)calloutAnnotationView;
-(MKPinAnnotationView *)bubblePin;
-(void)removeAnnotationViewsRotationAnimations;
-(void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 avoid:(CGRect)arg4 ;
-(void)_showBubbleForAnnotationView:(id)arg1 bounce:(BOOL)arg2 scrollToFit:(BOOL)arg3 ;
-(void)setSuppressCallout:(BOOL)arg1 ;
-(void)updateCalloutStateForSelectedAnnotationView:(id)arg1 ;
-(void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 avoid:(CGRect)arg5 ;
-(void)_setSelectedAnnotationView:(id)arg1 bounce:(BOOL)arg2 pressed:(BOOL)arg3 scrollToFit:(BOOL)arg4 ;
-(void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2 ;
-(CLLocationCoordinate2D)coordinateForAnnotationView:(id)arg1 ;
-(CGPoint)pointForCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)updateAnnotationView:(id)arg1 ;
-(void)updateUserLocationView;
-(NSMutableOrderedSet *)annotationViews;
-(void)_findNextView:(id*)arg1 orientation:(int*)arg2 context:(id)arg3 ;
-(void)_updateOrientationOfViewsCorrect:(id)arg1 relative:(id)arg2 projectionView:(id)arg3 ;
-(void)_updateOrientationOfViewsFast:(id)arg1 relative:(id)arg2 projectionView:(id)arg3 ;
-(void)_updateOrientationOfViews:(id)arg1 relative:(id)arg2 projectionView:(id)arg3 ;
-(void)_updateOrientationOfViews:(id)arg1 ;
-(void)updateAnnotationLocationsDuringAnimation:(BOOL)arg1 ;
-(id)_annotationViewForSelectionAtPoint:(CGPoint)arg1 avoidCurrent:(BOOL)arg2 maxDistance:(double)arg3 ;
-(id)annotationViewForPoint:(CGPoint)arg1 ;
-(void)_liftForDragging:(id)arg1 mouseDownPoint:(CGPoint)arg2 ;
-(void)_draggingAnnotationViewDidPause:(id)arg1 ;
-(void)draggingTouchMovedToPoint:(CGPoint)arg1 edgeInsets:(UIEdgeInsets)arg2 ;
-(CGPoint)draggingAnnotationViewDropPoint;
-(CGPoint)draggingAnnotationViewDropPointForPoint:(CGPoint)arg1 ;
-(void)_dropDraggingAnnotationViewAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)accessoryPadding;
-(BOOL)hasDroppingPins;
-(void)setUserLocationView:(MKAnnotationView *)arg1 ;
-(void)_dropPinsIfNeeded:(BOOL)arg1 ;
-(void)_willRemoveInternalAnnotationView:(id)arg1 ;
-(void)finishAddingAnnotationViews;
-(void)finishRemovingAnnotationViews;
-(void)dropPinsIfNeeded;
-(void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2 avoid:(CGRect)arg3 ;
-(SCD_Struct_MK37)currentComparisonContext;
-(void)annotationViewDidChangeZIndex:(id)arg1 ;
-(void)_updateZPositionForAnnotationView:(id)arg1 inBounds:(CGRect)arg2 ;
-(void)annotationViewDidChangeCenterOffset:(id)arg1 ;
-(void)transitionFrom:(long long)arg1 to:(long long)arg2 duration:(double)arg3 ;
-(BOOL)suppressCallout;
-(void)invalidateCustomFeatureDataSource;
-(BOOL)isClusteringEnabled;
-(id)clusterStyleAttributes;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3 ;
-(unsigned char)sceneID;
-(unsigned char)sceneState;
-(void)invalidateCustomFeatureDataSourceRect:(SCD_Struct_MK1)arg1 ;
@end

