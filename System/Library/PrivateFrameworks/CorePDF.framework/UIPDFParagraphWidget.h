/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIPDFSelectionWidget.h>

@class UIPDFPageView, CAShapeLayer, CALayer;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {

	CAShapeLayer* _trackingBorder;
	CGRect _initialRect;
	BOOL _tracking;
	CGRect _currentTrackingRect;
	CALayer* _leftGrabber;
	CALayer* _rightGrabber;
	CALayer* _topGrabber;
	CALayer* _bottomGrabber;
	CALayer* _selectedGrabber;
	CGRect _boundsInPDFSpace;
	CGColorRef _grabberColor;
	UIPDFPageView* _pageView;
	CGPoint _initialSelectionPointOnPage;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                           //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPointOnPage;              //@synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage - In the implementation block
@property (nonatomic,readonly) CGPoint currentSelectionPointOnPage; 
-(id)init;
-(void)hide;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layout;
-(void)setSelection:(id)arg1 ;
-(void)remove;
-(UIPDFPageView *)pageView;
-(void)setSelectedGrabberPosition:(CGRect)arg1 ;
-(CGRect)adjustRect:(CGRect)arg1 toPoint:(CGPoint)arg2 ;
-(CGRect)selectionBoundsInEffectsSpace;
-(BOOL)hitTest:(CGPoint)arg1 fixedPoint:(CGPoint*)arg2 preceeds:(BOOL*)arg3 ;
-(CGPoint)selectedPointFor:(CGPoint)arg1 ;
-(CGPoint)viewOffset;
-(void)track:(CGPoint)arg1 ;
-(void)endTracking;
-(CGRect)selectionRectangle;
-(void)setSelectedGrabber:(unsigned long long)arg1 ;
-(CGPoint)initialSelectionPointOnPage;
-(CGPoint)currentSelectionPointOnPage;
-(void)setPageView:(UIPDFPageView *)arg1 ;
@end

