/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver>
@optional
-(void)_didScroll;
-(void)_observeScrollView:(id)arg1 willEndDraggingWithVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint*)arg3 unclampedOriginalTarget:(CGPoint)arg4;
-(UIEdgeInsets*)_revealableContentPaddingForObservedScrollView:(id)arg1 includeContentWithCollapsedAffinity:(BOOL)arg2;
-(UIEdgeInsets*)_collapsableContentPaddingForObservedScrollView:(id)arg1;
-(void)_observeScrollViewWillBeginDragging:(id)arg1;
-(void)_observeScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)_observeScrollViewDidEndDecelerating:(id)arg1;
-(void)_observeScrollView:(id)arg1 didBeginTransitionToDeferredContentOffset:(CGPoint)arg2;

@end

