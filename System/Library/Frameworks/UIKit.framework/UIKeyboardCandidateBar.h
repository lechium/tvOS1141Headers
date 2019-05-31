/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateBarDelegate, UIKeyboardCandidateListDelegate;
@class NSString, UIImageView, NSArray, UIKBThemedView, TIKeyboardCandidateResultSet, UIKeyboardCandidatePocketShadow, NSIndexPath, NSDictionary, UIKBCandidateCollectionView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource> {

	long long m_handBias;
	BOOL _canExtend;
	BOOL _forceReloadInitiallyHiddenCandidates;
	NSString* _inlineText;
	UIImageView* _candidateMaskView;
	id<UIKeyboardCandidateBarDelegate> _delegate;
	double _upArrowWidth;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	NSArray* _candidateViews;
	unsigned long long _currentCandidateViewIndex;
	UIKBThemedView* _secondaryCandidatesViewEdgeGradient;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSArray* _filteredCandidates;
	UIKeyboardCandidatePocketShadow* _leftBorder;
	UIKeyboardCandidatePocketShadow* _rightBorder;
	NSIndexPath* _dragStartNextPageIndexPath;
	NSIndexPath* _dragStartPreviousPageIndexPath;
	NSDictionary* _opacities;
	CGSize _lastLayoutSize;
	CGPoint _dragStartOffset;

}

@property (assign,nonatomic,__weak) id<UIKeyboardCandidateListDelegate> candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) NSArray * candidateViews;                                                      //@synthesize candidateViews=_candidateViews - In the implementation block
@property (assign,nonatomic) unsigned long long currentCandidateViewIndex;                                  //@synthesize currentCandidateViewIndex=_currentCandidateViewIndex - In the implementation block
@property (nonatomic,readonly) UIKBCandidateCollectionView * currentCandidateView; 
@property (nonatomic,retain) UIImageView * candidateMaskView;                                               //@synthesize candidateMaskView=_candidateMaskView - In the implementation block
@property (nonatomic,retain) UIKBThemedView * secondaryCandidatesViewEdgeGradient;                          //@synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                             //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (assign,nonatomic) CGSize lastLayoutSize;                                                         //@synthesize lastLayoutSize=_lastLayoutSize - In the implementation block
@property (nonatomic,retain) NSArray * filteredCandidates;                                                  //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (nonatomic,copy) NSString * inlineText;                                                           //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) BOOL canExtend;                                                                //@synthesize canExtend=_canExtend - In the implementation block
@property (assign,nonatomic) BOOL forceReloadInitiallyHiddenCandidates;                                     //@synthesize forceReloadInitiallyHiddenCandidates=_forceReloadInitiallyHiddenCandidates - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * leftBorder;                                  //@synthesize leftBorder=_leftBorder - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * rightBorder;                                 //@synthesize rightBorder=_rightBorder - In the implementation block
@property (assign,nonatomic) CGPoint dragStartOffset;                                                       //@synthesize dragStartOffset=_dragStartOffset - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartNextPageIndexPath;                                        //@synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartPreviousPageIndexPath;                                    //@synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath - In the implementation block
@property (nonatomic,retain) NSDictionary * opacities;                                                      //@synthesize opacities=_opacities - In the implementation block
@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (assign,nonatomic,__weak) id<UIKeyboardCandidateBarDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double upArrowWidth;                                                           //@synthesize upArrowWidth=_upArrowWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)numberOfRows;
+(double)height;
+(double)heightForInterfaceOrientation:(long long)arg1 ;
+(void)setScreenTraits:(id)arg1 ;
+(UIEdgeInsets)edgeInsetsForInterfaceOrientation:(long long)arg1 ;
+(double)widthForCurrentScreenTraits;
+(unsigned long long)numberOfRowsForInterfaceOrientation:(long long)arg1 ;
+(double)heightForRowAtIndex:(unsigned long long)arg1 interfaceOrientation:(long long)arg2 ;
+(double)interRowOverlap;
+(double)defaultPagingVelocityThreshold;
+(double)defaultPagingDistanceThreshold;
+(double)heightForLastRow;
+(double)heightForRowAtIndex:(unsigned long long)arg1 ;
+(double)defaultCandidateWidth;
-(unsigned long long)count;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<UIKeyboardCandidateBarDelegate>)delegate;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setDelegate:(id<UIKeyboardCandidateBarDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(TIKeyboardCandidateResultSet *)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 ;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(id<UIKeyboardCandidateListDelegate>)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(BOOL)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setCandidateListDelegate:(id<UIKeyboardCandidateListDelegate>)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(void)setInlineText:(NSString *)arg1 ;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(NSString *)inlineText;
-(unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1 ;
-(id)secureCandidateRenderTraits;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(double)leftMarginForCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)candidateBarLayoutDidFinishPreparingLayout;
-(UIKeyboardCandidatePocketShadow *)leftBorder;
-(void)setLeftBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(TIKeyboardCandidateResultSet *)candidateResultSet;
-(double)singleCellWidthForProactiveCellCount:(unsigned long long)arg1 ;
-(void)setCandidateResultSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(unsigned long long)maxNumberOfProactiveCells;
-(NSArray *)filteredCandidates;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)_updateBorders;
-(void)_clearData;
-(NSArray *)candidateViews;
-(long long)_sectionForSectionIndex:(unsigned long long)arg1 candidateView:(id)arg2 ;
-(unsigned long long)_countOfItemsInSection:(long long)arg1 ;
-(id)_itemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(Class)_barCellClassForSection:(long long)arg1 ;
-(NSDictionary *)opacities;
-(UIKBCandidateCollectionView *)currentCandidateView;
-(double)_widthOfItemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(void)_updateCanExtendState;
-(void)setCurrentCandidateViewIndex:(unsigned long long)arg1 ;
-(void)setDragStartOffset:(CGPoint)arg1 ;
-(id)_nextPageIndexPath;
-(void)setDragStartNextPageIndexPath:(NSIndexPath *)arg1 ;
-(id)_previousPageIndexPath;
-(void)setDragStartPreviousPageIndexPath:(NSIndexPath *)arg1 ;
-(CGPoint)dragStartOffset;
-(id)_indexPathForFirstVisibleItem;
-(NSIndexPath *)dragStartNextPageIndexPath;
-(BOOL)canExtend;
-(id)_candidateViewForSection:(long long)arg1 ;
-(NSIndexPath *)dragStartPreviousPageIndexPath;
-(id)_indexPathForLastVisibleItem;
-(id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2 ;
-(void)adjustSelectionToNearestVisibleCandidate;
-(CGSize)lastLayoutSize;
-(BOOL)forceReloadInitiallyHiddenCandidates;
-(void)setForceReloadInitiallyHiddenCandidates:(BOOL)arg1 ;
-(void)setFilteredCandidates:(NSArray *)arg1 ;
-(void)setLastLayoutSize:(CGSize)arg1 ;
-(void)_reloadDataByAppendingAtEnd:(BOOL)arg1 initiallyHiddenCandidatesChanged:(BOOL)arg2 ;
-(void)_reloadData;
-(void)_showCandidateAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 scrollCellToVisible:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_showPageAtIndexPath:(id)arg1 ;
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(unsigned long long)currentCandidateViewIndex;
-(void)_stepSelectedCandidateInDirection:(BOOL)arg1 candidateView:(id)arg2 section:(long long)arg3 ;
-(id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1 ;
-(void)setCandidateViews:(NSArray *)arg1 ;
-(double)upArrowWidth;
-(BOOL)_shouldShowBorders;
-(UIKBThemedView *)secondaryCandidatesViewEdgeGradient;
-(void)setSecondaryCandidatesViewEdgeGradient:(UIKBThemedView *)arg1 ;
-(void)_updateCorners;
-(void)updateScrollInsets;
-(UIKeyboardCandidatePocketShadow *)rightBorder;
-(void)setRightBorder:(UIKeyboardCandidatePocketShadow *)arg1 ;
-(void)_updateCandidateViews;
-(void)_scrollToFirstCandidateInSection:(long long)arg1 withAnimation:(BOOL)arg2 ;
-(unsigned long long)_sectionIndexForSection:(long long)arg1 ;
-(UIEdgeInsets)scrollInsets;
-(void)setCanExtend:(BOOL)arg1 ;
-(void)setOpacities:(NSDictionary *)arg1 ;
-(void)setScrollInsets:(UIEdgeInsets)arg1 ;
-(double)_emptySpaceForItemsToIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(id)visibleCandidates;
-(void)setUpArrowWidth:(double)arg1 ;
-(UIImageView *)candidateMaskView;
-(void)setCandidateMaskView:(UIImageView *)arg1 ;
@end

