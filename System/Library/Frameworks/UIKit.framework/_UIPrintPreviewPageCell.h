/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PageRangeDelegate;
@class UILongPressGestureRecognizer, UITapGestureRecognizer, UIImageView, UIView, NSString;

@interface _UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate> {

	BOOL _inRange;
	BOOL _menuPresented;
	BOOL _thisCellIsPresentingMenu;
	BOOL _menuHiddenByTapInThisCell;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UIImageView* _imageView;
	UIView* _dimmingView;
	id<PageRangeDelegate> _delegate;
	long long _pageIndex;

}

@property (nonatomic,retain) UIImageView * imageView;                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic,__weak) id<PageRangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long pageIndex;                                //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PageRangeDelegate>)delegate;
-(void)setDelegate:(id<PageRangeDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)gestureRecognizers;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(UIView *)dimmingView;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)menuDidHide:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setDimmingView:(UIView *)arg1 ;
-(long long)pageIndex;
-(void)addAllPages:(id)arg1 ;
-(void)setStartPage:(id)arg1 ;
-(void)setEndPage:(id)arg1 ;
-(void)addPage:(id)arg1 ;
-(void)removePage:(id)arg1 ;
-(void)showMenu;
-(BOOL)canModifyPageRange;
-(void)setInRange:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPageIndex:(long long)arg1 ;
@end

