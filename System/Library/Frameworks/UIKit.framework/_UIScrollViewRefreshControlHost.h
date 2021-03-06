/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRefreshControlHosting.h>

@class UIScrollView, NSString;

@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting> {

	UIScrollView* _scrollView;
	BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
	BOOL _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL refreshControlInsetsAffectScrollViewRubberBanding; 
@property (__weak,readonly) UIScrollView * scrollView; 
-(UIScrollView *)scrollView;
-(id)initWithScrollView:(id)arg1 ;
-(void)decrementInsetHeight:(double)arg1 ;
-(void)incrementInsetHeight:(double)arg1 ;
-(void)refreshControl:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 ;
-(BOOL)refreshControlInsetsAffectScrollViewRubberBanding;
@end

