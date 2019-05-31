/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIWebSelectionHandle, UIWebSelectionOutline, UIWebTextRangeView, UIWebDocumentView, UIWebSelectionNode, UIWebSelectionGraph, UIWebSelection;

@interface UIWebSelectionView : UIView {

	UIView* _center;
	CGRect _selectionFrame;
	UIWebSelectionHandle* _top;
	UIWebSelectionHandle* _right;
	UIWebSelectionHandle* _bottom;
	UIWebSelectionHandle* _left;
	UIWebSelectionOutline* _outline;
	UIWebTextRangeView* _textRangeView;
	UIWebDocumentView* _documentView;
	UIWebSelectionNode* _selectionNode;
	UIWebSelectionGraph* _selectionGraph;
	double _growThreshold;
	double _shrinkThreshold;
	SCD_Struct_UI67 _autoscrollData;
	SCD_Struct_UI68 _blockSelectionData;
	SCD_Struct_UI70 _rangedSelectionData;
	int _nestedLayoutCalls;
	BOOL _calloutBarIsHiddenBeforeRotation;
	BOOL _rotating;
	int _selectionInFixedPosition;
	BOOL _creatingSelection;

}

@property (nonatomic,retain) UIWebSelectionNode * selectionNode;              //@synthesize selectionNode=_selectionNode - In the implementation block
@property (assign,nonatomic) CGRect selectionFrame; 
@property (nonatomic,readonly) UIWebSelection * selection; 
@property (assign,nonatomic) BOOL creatingSelection;                          //@synthesize creatingSelection=_creatingSelection - In the implementation block
-(void)removeFromSuperview;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_didScroll;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)arg1 ;
-(UIWebSelection *)selection;
-(void)updateSelectionRects;
-(void)selectionChanged;
-(CGRect)visibleRect;
-(void)clearSelection;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)scaleChanged;
-(CGRect)selectionFrame;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(void)showControls;
-(id)scroller;
-(id)initWithWebDocumentView:(id)arg1 ;
-(void)hideControls;
-(void)startSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)updateSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)endSelectionCreationWithPoint:(CGPoint)arg1 ;
-(void)resetSelection;
-(void)hideControlsBeforeRotation;
-(void)showControlsAfterRotation;
-(CGRect)selectionBoundingRect;
-(void)showRangeSelection;
-(void)setCreatingSelection:(BOOL)arg1 ;
-(void)updateFrameAndHandlesWithAnimation:(BOOL)arg1 ;
-(id)tintView;
-(id)handleWithPosition:(int)arg1 ;
-(void)stopAnyAutoscrolling;
-(BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2 ;
-(void)onBeforeScrollOrZoomHidingSelection:(BOOL)arg1 ;
-(void)onAfterScrollOrZoomShowingSelection:(BOOL)arg1 ;
-(void)updateTextRangeViewSelectionRects;
-(void)showCopyCalloutWithAnimation:(BOOL)arg1 ;
-(id)handles;
-(void)hideCopyCallout;
-(void)setHandleCenters;
-(CGRect)fetchSelectionBoundingTextSelectionRect;
-(CGRect)fetchSelectionBoundingRect;
-(void)setSelectionFrame:(CGRect)arg1 ;
-(void)setSelectionNode:(UIWebSelectionNode *)arg1 ;
-(CGRect)desiredBox;
-(void)computeExpandAndContractThresholdsForActiveHandle;
-(BOOL)shouldExpandForActiveHandle;
-(void)expandForActiveHandle;
-(BOOL)shouldContractForActiveHandle;
-(void)contractForActiveHandle;
-(void)switchToTextModeForHandle:(id)arg1 ;
-(void)updateAutoscrollForHandle:(id)arg1 ;
-(void)considerFlipping;
-(void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2 ;
-(BOOL)shouldSwitchToBlockModeForHandle:(id)arg1 ;
-(void)switchToBlockModeForHandle:(id)arg1 ;
-(void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2 ;
-(BOOL)isHorizontalWritingMode;
-(UIWebSelectionNode *)selectionNode;
-(int)autoscrollDirectionsForHandle:(id)arg1 ;
-(void)autoscrollTimerFired:(id)arg1 ;
-(void)touchChanged:(id)arg1 forHandle:(id)arg2 ;
-(void)shiftWebRangeSelectionAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(id)nodeInPristineGraphAtPoint:(CGPoint)arg1 ;
-(id)activeHandle;
-(BOOL)activelyManipulatingTextSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
-(BOOL)activelyManipulatingBlockSelectionHandle;
-(void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
-(void)calloutBar:(id)arg1 selectedCommand:(id)arg2 ;
-(void)setSelectionFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)touchChanged:(id)arg1 forHandleInText:(id)arg2 ;
-(BOOL)canFlip;
-(BOOL)creatingSelection;
@end
