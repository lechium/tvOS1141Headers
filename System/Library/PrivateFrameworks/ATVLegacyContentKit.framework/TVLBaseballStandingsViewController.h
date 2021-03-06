/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class TVLStandingsElement, UIView, TVCollectionView, UIPageControl, NSString;

@interface TVLBaseballStandingsViewController : UIViewController <UICollectionViewDataSource, TVCollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	TVLStandingsElement* _standingsElement;
	UIView* _headerView;
	TVCollectionView* _collectionView;
	UIPageControl* _pageControl;

}

@property (nonatomic,retain) TVLStandingsElement * standingsElement;              //@synthesize standingsElement=_standingsElement - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) TVCollectionView * collectionView;                   //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                         //@synthesize pageControl=_pageControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(TVCollectionView *)collectionView;
-(void)setCollectionView:(TVCollectionView *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(UIPageControl *)pageControl;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(TVLStandingsElement *)standingsElement;
-(long long)numberOfStandingItems;
-(id)standingsItemAtIndex:(long long)arg1 ;
-(id)initWithStandingsElement:(id)arg1 ;
-(void)setStandingsElement:(TVLStandingsElement *)arg1 ;
@end

