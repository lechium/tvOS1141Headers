/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIWebBrowserView, UIWebOverflowScrollListener, UIWebOverflowContentView, DOMNode, CALayer;

@interface UIWebOverflowScrollView : UIScrollView {

	BOOL _beingRemoved;
	UIWebBrowserView* _webBrowserView;
	UIWebOverflowScrollListener* _scrollListener;
	UIWebOverflowContentView* _overflowContentView;
	DOMNode* _node;
	CALayer* _webLayer;

}

@property (assign,nonatomic) UIWebBrowserView * webBrowserView;                           //@synthesize webBrowserView=_webBrowserView - In the implementation block
@property (nonatomic,retain) UIWebOverflowScrollListener * scrollListener;                //@synthesize scrollListener=_scrollListener - In the implementation block
@property (nonatomic,retain) UIWebOverflowContentView * overflowContentView;              //@synthesize overflowContentView=_overflowContentView - In the implementation block
@property (nonatomic,retain) CALayer * webLayer;                                          //@synthesize webLayer=_webLayer - In the implementation block
@property (nonatomic,retain) DOMNode * node;                                              //@synthesize node=_node - In the implementation block
@property (assign,getter=isBeingRemoved,nonatomic) BOOL beingRemoved;                     //@synthesize beingRemoved=_beingRemoved - In the implementation block
-(id)superview;
-(void)dealloc;
-(void)setContentOffset:(CGPoint)arg1 ;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(id)initWithLayer:(id)arg1 node:(id)arg2 webBrowserView:(id)arg3 ;
-(void)setOverflowContentView:(UIWebOverflowContentView *)arg1 ;
-(UIWebOverflowContentView *)overflowContentView;
-(void)replaceLayer:(id)arg1 ;
-(void)willBeRemoved;
-(void)setBeingRemoved:(BOOL)arg1 ;
-(BOOL)fixUpViewAfterInsertion;
-(void)setWebLayer:(CALayer *)arg1 ;
-(CALayer *)webLayer;
-(UIWebBrowserView *)webBrowserView;
-(void)setWebBrowserView:(UIWebBrowserView *)arg1 ;
-(UIWebOverflowScrollListener *)scrollListener;
-(void)setScrollListener:(UIWebOverflowScrollListener *)arg1 ;
-(BOOL)isBeingRemoved;
@end

