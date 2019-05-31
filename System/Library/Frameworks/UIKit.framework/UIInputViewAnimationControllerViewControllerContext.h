/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerKeyboardContextTransitioning.h>

@protocol UIInputViewAnimationHost;
@class UIView, _UIViewControllerTransitionContext, NSMapTable, NSString;

@interface UIInputViewAnimationControllerViewControllerContext : NSObject <UIViewControllerKeyboardContextTransitioning> {

	_UIViewControllerTransitionContext* _context;
	id<UIInputViewAnimationHost> _host;
	UIView* _from;
	UIView* _to;
	CGRect _fromRect;
	CGRect _toRect;
	NSMapTable* _transitioningBackdropViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
+(id)contextWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(void)dealloc;
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(CGRect)toKeyboardFrame;
-(void)gatherTransitioningBackdropViews;
-(void)transitionBackdropViewsToLowQuality;
-(void)transitionBackdropViewsBack;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 transitionContext:(id)arg4 ;
-(id<UIViewControllerContextTransitioning>)mainContext;
@end

