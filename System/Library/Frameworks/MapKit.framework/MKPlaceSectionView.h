/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKStackView.h>

@protocol MKPlaceSectionViewDelegate;
@class MKViewWithHairline, MKPlaceSectionItemView, NSArray;

@interface MKPlaceSectionView : _MKStackView {

	unsigned long long _trackingSelectForRow;
	MKViewWithHairline* _hairLineView;
	CGRect _oldBounds;
	BOOL _highlightsTouches;
	BOOL _showsBottomHairline;
	BOOL _earlyReturnLayout;
	id<MKPlaceSectionViewDelegate> _delegate;
	MKPlaceSectionItemView* _headerView;
	NSArray* _rowViews;
	MKPlaceSectionItemView* _footerView;

}

@property (assign,nonatomic,__weak) id<MKPlaceSectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSArray * rowViews;                                            //@synthesize rowViews=_rowViews - In the implementation block
@property (nonatomic,retain) MKPlaceSectionItemView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (assign,nonatomic) BOOL highlightsTouches;                                      //@synthesize highlightsTouches=_highlightsTouches - In the implementation block
@property (assign,nonatomic) BOOL showsBottomHairline;                                    //@synthesize showsBottomHairline=_showsBottomHairline - In the implementation block
@property (assign,nonatomic) BOOL earlyReturnLayout;                                      //@synthesize earlyReturnLayout=_earlyReturnLayout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<MKPlaceSectionViewDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceSectionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(MKPlaceSectionItemView *)headerView;
-(void)setHeaderView:(MKPlaceSectionItemView *)arg1 ;
-(MKPlaceSectionItemView *)footerView;
-(void)setFooterView:(MKPlaceSectionItemView *)arg1 ;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_updateHairlineInsets;
-(void)setShowsBottomHairline:(BOOL)arg1 ;
-(unsigned long long)indexOfRowAt:(CGPoint)arg1 ;
-(id)rowAt:(CGPoint)arg1 ;
-(void)_tappedRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_touchesBeganForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)_touchesCancelledForRow:(id)arg1 at:(unsigned long long)arg2 ;
-(void)setHeaderView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRowViews:(NSArray *)arg1 ;
-(void)setRowViews:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFooterView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateViewsAnimated:(BOOL)arg1 ;
-(NSArray *)rowViews;
-(BOOL)highlightsTouches;
-(void)setHighlightsTouches:(BOOL)arg1 ;
-(BOOL)showsBottomHairline;
-(BOOL)earlyReturnLayout;
-(void)setEarlyReturnLayout:(BOOL)arg1 ;
@end

