/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSIndexPath, NSString;

@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	double _bottomPadding;
	UIEdgeInsets _gradientBoundsInsets;
	struct {
		unsigned layoutBelowDisabled : 1;
	}  _flags;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,setter=_setGradientBoundsInsets:,getter=_gradientBoundsInsets,nonatomic) UIEdgeInsets _gradientBoundsInsets; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;                                                              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadData;
-(void)layoutBelowIfNeeded;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_getGradientMaskBounds:(out CGRect*)arg1 startInsets:(out UIEdgeInsets*)arg2 endInsets:(out UIEdgeInsets*)arg3 intensities:(out UIEdgeInsets*)arg4 ;
-(CGRect)_visibleBounds;
-(UIEdgeInsets)_gradientBoundsInsets;
-(void)_performWithoutLayoutBelow:(/*^block*/id)arg1 ;
-(void)setBottomPaddingForVisibleBounds:(double)arg1 ;
-(void)_setGradientBoundsInsets:(UIEdgeInsets)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
@end

