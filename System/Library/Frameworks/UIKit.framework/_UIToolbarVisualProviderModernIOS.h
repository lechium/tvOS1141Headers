/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIToolbarVisualProvider.h>
#import <UIKit/_UIBarButtonItemViewOwner.h>

@class _UIBarBackground, UIView, _UIToolbarContentView, NSLayoutConstraint, NSString;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner> {

	_UIBarBackground* _barBackgroundView;
	UIView* _customBackgroundView;
	_UIToolbarContentView* _contentView;
	NSLayoutConstraint* _buttonBarTopConstraint;
	NSString* _backdropViewLayerGroupName;

}

@property (setter=_setBackdropViewLayerGroupName:,getter=_backdropViewLayerGroupName,nonatomic,retain) NSString * backdropViewLayerGroupName;              //@synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateArchivedSubviews:(id)arg1 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(id)_backdropViewLayerGroupName;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(CGRect)backgroundFrame;
-(id)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)setCustomBackgroundView:(id)arg1 ;
-(void)updateBarBackground;
-(void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateContentView;
-(CGRect)_backgroundFrame;
-(id)_currentCustomBackground;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
@end

