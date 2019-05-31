/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScrollViewDelegate;
#import <UIKit/UIKit-Structs.h>
@class UIScrollView;

@interface _UIFocusEngineScrollViewOffsets : NSObject {

	UIScrollView* _scrollView;
	id<UIScrollViewDelegate> _scrollDelegate;
	double _convergenceRate;
	/*^block*/id _completion;
	CGPoint _lastContentOffset;
	CGPoint _targetContentOffset;
	CGPoint _lastVelocity;

}

@property (nonatomic,retain) UIScrollView * scrollView;                            //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) id<UIScrollViewDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (assign,nonatomic) CGPoint lastContentOffset;                            //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                          //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,nonatomic) double convergenceRate;                               //@synthesize convergenceRate=_convergenceRate - In the implementation block
@property (assign,nonatomic) CGPoint lastVelocity;                                 //@synthesize lastVelocity=_lastVelocity - In the implementation block
@property (nonatomic,copy) id completion;                                          //@synthesize completion=_completion - In the implementation block
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(double)convergenceRate;
-(void)setConvergenceRate:(double)arg1 ;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(CGPoint)lastVelocity;
-(void)setLastVelocity:(CGPoint)arg1 ;
@end
