/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView;

@interface _UIFocusFastScrollingSwipeSequence : NSObject {

	UIScrollView* _scrollView;
	unsigned long long _headingLock;
	long long _consecutiveSwipeCount;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) unsigned long long headingLock;                //@synthesize headingLock=_headingLock - In the implementation block
@property (assign,nonatomic) long long consecutiveSwipeCount;               //@synthesize consecutiveSwipeCount=_consecutiveSwipeCount - In the implementation block
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(unsigned long long)headingLock;
-(void)setHeadingLock:(unsigned long long)arg1 ;
-(long long)consecutiveSwipeCount;
-(void)setConsecutiveSwipeCount:(long long)arg1 ;
@end

