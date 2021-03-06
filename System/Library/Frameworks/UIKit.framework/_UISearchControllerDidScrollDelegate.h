/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIScrollViewScrollObserver_Internal.h>

@protocol _UIScrollViewScrollObserver_Internal;
@class UIScrollView, NSString;

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal> {

	id<_UIScrollViewScrollObserver_Internal> _controller;
	UIScrollView* _scrollView;

}

@property (assign,nonatomic,__weak) id<_UIScrollViewScrollObserver_Internal> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScrollView *)scrollView;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)_didScroll;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id<_UIScrollViewScrollObserver_Internal>)controller;
-(void)setController:(id<_UIScrollViewScrollObserver_Internal>)arg1 ;
@end

