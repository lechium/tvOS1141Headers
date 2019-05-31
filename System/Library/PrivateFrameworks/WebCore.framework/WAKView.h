/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKResponder.h>

@class NSMutableSet;

@interface WAKView : WAKResponder {

	WKViewContext* viewContext;
	WKView* viewRef;
	NSMutableSet* subviewReferences;
	BOOL _isHidden;
	BOOL _drawsOwnDescendants;

}
+(id)_wrapperForViewRef:(WKView*)arg1 ;
+(void)_setInterpolationQuality:(int)arg1 ;
+(id)focusView;
-(id)_frame;
-(id)_webView;
-(id)_web_parentWebFrameView;
-(id)_web_superviewOfClass:(Class)arg1 ;
-(BOOL)_web_firstResponderIsSelfOrDescendantView;
-(void)_web_addDescendentWebHTMLViewsToArray:(id)arg1 ;
-(BOOL)accessibilityIsIgnored;
-(BOOL)needsPanelToBecomeKey;
-(void)scrollPoint:(CGPoint)arg1 ;
-(id)_initWithViewRef:(WKView*)arg1 ;
-(void)setBoundsOrigin:(CGPoint)arg1 ;
-(BOOL)_selfHandleEvent:(id)arg1 ;
-(WKView*)_viewRef;
-(id)_subviewReferences;
-(void)_lockFocusViewInContext:(CGContextRef)arg1 ;
-(void)_drawRect:(CGRect)arg1 context:(CGContextRef)arg2 lockFocus:(BOOL)arg3 ;
-(void)_unlockFocusViewInContext:(CGContextRef)arg1 ;
-(BOOL)_handleResponderCall:(int)arg1 ;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 ;
-(void)lockFocus;
-(void)unlockFocus;
-(id)nextValidKeyView;
-(void)releaseGState;
-(BOOL)inLiveResize;
-(BOOL)scrollRectToVisible:(CGRect)arg1 ;
-(void)setNextKeyView:(id)arg1 ;
-(id)previousValidKeyView;
-(void)frameSizeChanged;
-(BOOL)mouse:(CGPoint)arg1 inRect:(CGRect)arg2 ;
-(void)_setDrawsOwnDescendants:(BOOL)arg1 ;
-(BOOL)isDescendantOf:(id)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(id)nextKeyView;
-(id)previousKeyView;
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(CGRect)frame;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)superview;
-(void)addSubview:(id)arg1 ;
-(id)window;
-(float)scale;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)bounds;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(id)description;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)subviews;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(void)layoutIfNeeded;
-(id)nextResponder;
-(void)setScale:(float)arg1 ;
-(void)handleEvent:(id)arg1 ;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(unsigned)autoresizingMask;
-(CGSize)convertSize:(CGSize)arg1 toView:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)needsDisplay;
-(void)displayIfNeeded;
-(void)layout;
-(CGRect)visibleRect;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewDidMoveToWindow;
-(void)invalidateGState;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(void)viewWillDraw;
-(void)displayRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(id)lastScrollableAncestor;
-(void)displayRectIgnoringOpacity:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)display;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
@end

