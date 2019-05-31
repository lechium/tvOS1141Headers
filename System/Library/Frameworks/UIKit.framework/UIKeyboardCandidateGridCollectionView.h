/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCandidateCollectionView.h>

@class UITableViewIndex, UIKeyboardCandidateGridCollectionViewController, NSArray;

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {

	UITableViewIndex* _index;
	UIKeyboardCandidateGridCollectionViewController* _parentViewController;
	double _previousGroupBarStartingY;

}

@property (assign,nonatomic,__weak) UIKeyboardCandidateGridCollectionViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (assign,nonatomic) double previousGroupBarStartingY;                                                           //@synthesize previousGroupBarStartingY=_previousGroupBarStartingY - In the implementation block
@property (nonatomic,retain) NSArray * indexTitles; 
@property (nonatomic,readonly) UITableViewIndex * index;                                                                 //@synthesize index=_index - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(UIKeyboardCandidateGridCollectionViewController *)parentViewController;
-(BOOL)_canDrawContent;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
-(void)setParentViewController:(UIKeyboardCandidateGridCollectionViewController *)arg1 ;
-(UITableViewIndex *)index;
-(void)scrollToOffsetFromTop:(double)arg1 withAnimation:(BOOL)arg2 ;
-(void)scrollToTopWithAnimation:(BOOL)arg1 ;
-(void)scrollToBottomWithAnimation:(BOOL)arg1 ;
-(NSArray *)indexTitles;
-(void)setIndexTitles:(NSArray *)arg1 ;
-(void)keyboardDidHideNotification:(id)arg1 ;
-(void)keyboardWillShowNotification:(id)arg1 ;
-(BOOL)shouldDrawGroupBackground;
-(double)groupBarStartingY;
-(void)setPreviousGroupBarStartingY:(double)arg1 ;
-(BOOL)shouldShowIndex;
-(void)updateIndex:(BOOL)arg1 ;
-(void)updateIndex;
-(double)previousGroupBarStartingY;
-(void)showIndex:(BOOL)arg1 ;
-(void)delayUpdateIndex;
-(BOOL)isCellVisible:(id)arg1 ;
@end
