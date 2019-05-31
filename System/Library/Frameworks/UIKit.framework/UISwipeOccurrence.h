/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UISwipeActionPullViewDelegate.h>

@class NSIndexPath, UIContextualAction, UIView, UISwipeActionController, UISwipeActionPullView, NSDictionary, NSString;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate> {

	BOOL _active;
	BOOL _shouldReenableUserInteraction;
	NSIndexPath* _indexPath;
	UIContextualAction* _currentAction;
	unsigned long long _currentDirection;
	UIView* _swipedView;
	UISwipeActionController* _controller;
	UISwipeActionPullView* _leadingPullView;
	UISwipeActionPullView* _trailingPullView;
	NSDictionary* _swipeDirectionToPullView;
	CGPoint _swipedViewInitialPosition;
	UIEdgeInsets _extraInsets;

}

@property (assign,nonatomic) unsigned long long currentDirection;                      //@synthesize currentDirection=_currentDirection - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraInsets;                                 //@synthesize extraInsets=_extraInsets - In the implementation block
@property (nonatomic,retain) UIView * swipedView;                                      //@synthesize swipedView=_swipedView - In the implementation block
@property (assign,nonatomic) CGPoint swipedViewInitialPosition;                        //@synthesize swipedViewInitialPosition=_swipedViewInitialPosition - In the implementation block
@property (nonatomic,retain) UIContextualAction * currentAction;                       //@synthesize currentAction=_currentAction - In the implementation block
@property (assign,nonatomic) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldReenableUserInteraction;                       //@synthesize shouldReenableUserInteraction=_shouldReenableUserInteraction - In the implementation block
@property (assign,nonatomic,__weak) UISwipeActionController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UISwipeActionPullView * leadingPullView;                  //@synthesize leadingPullView=_leadingPullView - In the implementation block
@property (nonatomic,retain) UISwipeActionPullView * trailingPullView;                 //@synthesize trailingPullView=_trailingPullView - In the implementation block
@property (nonatomic,retain) NSDictionary * swipeDirectionToPullView;                  //@synthesize swipeDirectionToPullView=_swipeDirectionToPullView - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPath;                                    //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSIndexPath *)indexPath;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UIContextualAction *)currentAction;
-(void)updateLayout;
-(UISwipeActionController *)controller;
-(void)setController:(UISwipeActionController *)arg1 ;
-(void)setSwipedView:(UIView *)arg1 ;
-(id)_pullViewForSwipeDirection:(unsigned long long)arg1 ;
-(UISwipeActionPullView *)leadingPullView;
-(UISwipeActionPullView *)trailingPullView;
-(void)_resetPullViewsImmediately;
-(void)_updatePullView:(id)arg1 ;
-(void)setShouldReenableUserInteraction:(BOOL)arg1 ;
-(UIEdgeInsets)extraInsets;
-(void)_resetItemWithSwipeInfo:(SCD_Struct_UI57)arg1 animated:(BOOL)arg2 deletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)endSwipe;
-(BOOL)shouldReenableUserInteraction;
-(void)moveItemWithSwipeInfo:(SCD_Struct_UI57)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performSwipeAction:(id)arg1 inPullview:(id)arg2 swipeInfo:(SCD_Struct_UI57)arg3 ;
-(unsigned long long)_swipeDirectionForPullView:(id)arg1 ;
-(void)resetItemWithSwipeInfo:(SCD_Struct_UI57)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createPullViewsIfNeeded;
-(NSDictionary *)swipeDirectionToPullView;
-(void)setLeadingPullView:(UISwipeActionPullView *)arg1 ;
-(void)setTrailingPullView:(UISwipeActionPullView *)arg1 ;
-(void)setSwipeDirectionToPullView:(NSDictionary *)arg1 ;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3 ;
-(void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 ;
-(double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(id)initWithController:(id)arg1 indexPath:(id)arg2 ;
-(SCD_Struct_UI56)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 ;
-(void)beginSwipe;
-(void)performPrimaryActionWithSwipeInfo:(SCD_Struct_UI57)arg1 ;
-(BOOL)shouldDismissWithTouchLocation:(CGPoint)arg1 ;
-(void)setCurrentAction:(UIContextualAction *)arg1 ;
-(unsigned long long)currentDirection;
-(void)setCurrentDirection:(unsigned long long)arg1 ;
-(UIView *)swipedView;
-(CGPoint)swipedViewInitialPosition;
-(void)setSwipedViewInitialPosition:(CGPoint)arg1 ;
@end

