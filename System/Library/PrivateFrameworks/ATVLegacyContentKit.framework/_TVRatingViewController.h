/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/TVCollectionViewDelegate.h>

@protocol _TVRatingViewControllerDelegate;
@class NSIndexPath, TVCollectionView, UIColor, NSString;

@interface _TVRatingViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, TVCollectionViewDelegate> {

	BOOL _performedInitialHighlight;
	NSIndexPath* _currentFocuedIndexPath;
	BOOL _initialRatingIsSuggestion;
	id<_TVRatingViewControllerDelegate> _delegate;
	TVCollectionView* _collectionView;
	unsigned long long _initialRating;
	UIColor* _starFillColor;
	UIColor* _starOutlineColor;
	UIColor* _starSuggestionFillColor;

}

@property (assign,nonatomic,__weak) id<_TVRatingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVCollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) unsigned long long initialRating;                                 //@synthesize initialRating=_initialRating - In the implementation block
@property (assign,nonatomic) BOOL initialRatingIsSuggestion;                                   //@synthesize initialRatingIsSuggestion=_initialRatingIsSuggestion - In the implementation block
@property (nonatomic,retain) UIColor * starFillColor;                                          //@synthesize starFillColor=_starFillColor - In the implementation block
@property (nonatomic,retain) UIColor * starOutlineColor;                                       //@synthesize starOutlineColor=_starOutlineColor - In the implementation block
@property (nonatomic,retain) UIColor * starSuggestionFillColor;                                //@synthesize starSuggestionFillColor=_starSuggestionFillColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_TVRatingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_TVRatingViewControllerDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(TVCollectionView *)collectionView;
-(void)setCollectionView:(TVCollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(void)setStarFillColor:(UIColor *)arg1 ;
-(void)setStarSuggestionFillColor:(UIColor *)arg1 ;
-(void)setStarOutlineColor:(UIColor *)arg1 ;
-(UIColor *)starFillColor;
-(UIColor *)starOutlineColor;
-(void)setInitialRating:(unsigned long long)arg1 ;
-(unsigned long long)initialRating;
-(void)_updateRatingForSelection:(id)arg1 ;
-(BOOL)_needsInitialSuggestionState;
-(UIColor *)starSuggestionFillColor;
-(BOOL)initialRatingIsSuggestion;
-(void)setInitialRatingIsSuggestion:(BOOL)arg1 ;
@end

