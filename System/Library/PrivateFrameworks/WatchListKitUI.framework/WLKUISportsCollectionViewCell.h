/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WatchListKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIView, _TVCardFloatingContentView, WLKUISportsCellView, NSString;

@interface WLKUISportsCollectionViewCell : UICollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	UIView*<TVAuxiliaryViewSelecting> _selectingView;
	_TVCardFloatingContentView* _floatingView;
	WLKUISportsCellView* _sportsCellView;

}

@property (nonatomic,retain) _TVCardFloatingContentView * floatingView;                           //@synthesize floatingView=_floatingView - In the implementation block
@property (assign,nonatomic) BOOL pressIsAnimating;                                               //@synthesize pressIsAnimating=_pressIsAnimating - In the implementation block
@property (assign,nonatomic) BOOL unpressOnEndAnimating;                                          //@synthesize unpressOnEndAnimating=_unpressOnEndAnimating - In the implementation block
@property (nonatomic,retain) WLKUISportsCellView * sportsCellView;                                //@synthesize sportsCellView=_sportsCellView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sportsCardCellFromElement:(id)arg1 existingView:(id)arg2 ;
+(void)registerElements;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)prepareForReuse;
-(BOOL)pressIsAnimating;
-(void)setPressIsAnimating:(BOOL)arg1 ;
-(BOOL)unpressOnEndAnimating;
-(void)setUnpressOnEndAnimating:(BOOL)arg1 ;
-(void)layoutWithElement:(id)arg1 ;
-(WLKUISportsCellView *)sportsCellView;
-(void)setSportsCellView:(WLKUISportsCellView *)arg1 ;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)_showPressState;
-(void)_clearPressState;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(id)_selectingView;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(_TVCardFloatingContentView *)floatingView;
-(void)setFloatingView:(_TVCardFloatingContentView *)arg1 ;
@end

