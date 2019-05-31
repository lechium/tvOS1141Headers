/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UINavigationBarTransitionContext.h>

@class UIView;

@interface _UINavigationBarTransitionContextCrossfade : _UINavigationBarTransitionContext {

	UIView* _fromCanvasView;
	UIView* _toCanvasView;

}
-(void)cancel;
-(void)prepare;
-(int)transition;
-(void)animate;
-(void)complete;
-(double)contentViewMaxY;
-(void)_prepareContentView;
-(void)_prepareLargeTitleView;
-(void)_animateContentView;
-(void)_animateLargeTitleView;
-(void)_prepareCanvasViews;
-(void)_animateAsTwoPartsIfNecessaryPartOne:(/*^block*/id)arg1 partTwo:(/*^block*/id)arg2 ;
-(void)_animateCanvasViews;
-(void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2 ;
@end
