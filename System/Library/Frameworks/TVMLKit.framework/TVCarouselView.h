/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;
@class NSObject, _TVCarouselCollectionView, NSIndexPath, NSArray, NSString;

@interface TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSObject*<OS_dispatch_source> _autoScrollTimer;
	_TVCarouselCollectionView* _collectionView;
	unsigned long long _currentVirtualIndexForCellDequeue;
	NSIndexPath* _focusedIndexPath;
	BOOL _hasValidLayout;
	unsigned long long _numberOfRealItemsForDataSource;
	double _originalSelectionDuration;
	double _originalUnselectionDuration;
	NSArray* _remoteGestures;
	BOOL _firstFocusMove;
	id<TVCarouselViewDataSource> _dataSource;
	id<TVCarouselViewDelegate> _delegate;
	double _interitemSpacing;
	unsigned long long _scrollMode;
	double _autoScrollInterval;
	double _continuousScrollVelocity;
	/*^block*/id _continuousScrollingBlock;
	CGSize _itemSize;
	CGPoint _focusDirection;

}

@property (copy) id continuousScrollingBlock;                                             //@synthesize continuousScrollingBlock=_continuousScrollingBlock - In the implementation block
@property (assign,nonatomic,__weak) id<TVCarouselViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TVCarouselViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                             //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                     //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) unsigned long long scrollMode;                               //@synthesize scrollMode=_scrollMode - In the implementation block
@property (assign,nonatomic) double autoScrollInterval;                                   //@synthesize autoScrollInterval=_autoScrollInterval - In the implementation block
@property (assign,nonatomic) double continuousScrollVelocity;                             //@synthesize continuousScrollVelocity=_continuousScrollVelocity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * visibleCells; 
@property (assign,nonatomic) CGPoint focusDirection;                                      //@synthesize focusDirection=_focusDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TVCarouselViewDelegate>)delegate;
-(void)setDataSource:(id<TVCarouselViewDataSource>)arg1 ;
-(void)setDelegate:(id<TVCarouselViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<TVCarouselViewDataSource>)dataSource;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(id)_collectionView;
-(void)_handleButtonGesture:(id)arg1 ;
-(id)preferredFocusedView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)didMoveToSuperview;
-(NSArray *)visibleCells;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(CGPoint)focusDirection;
-(CGSize)itemSize;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setAutoScrollInterval:(double)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexForCell:(id)arg1 ;
-(void)_handlePlayGesture:(id)arg1 ;
-(void)_focusGestureDidBeginNotification:(id)arg1 ;
-(void)setContinuousScrollingBlock:(id)arg1 ;
-(void)_updateAutoScrollTimer;
-(void)_updateIdleModeLayoutAttributes;
-(void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(id)cellForItemAtIndex:(unsigned long long)arg1 ;
-(void)setInteritemSpacing:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateCollectionViewLayoutAnimated:(BOOL)arg1 ;
-(void)_updateCollectionViewLayout;
-(double)_contentOffsetXForIndex:(long long)arg1 ;
-(id)continuousScrollingBlock;
-(void)_startAutoScrollTimer;
-(void)_stopAutoScrollTimer;
-(void)_startContinuousScroll;
-(void)_stopContinuousScroll;
-(void)setContinuousScrollVelocity:(double)arg1 ;
-(unsigned long long)scrollMode;
-(void)setScrollMode:(unsigned long long)arg1 ;
-(double)autoScrollInterval;
-(double)continuousScrollVelocity;
@end

