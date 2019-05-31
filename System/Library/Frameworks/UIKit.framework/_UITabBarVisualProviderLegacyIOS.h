/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITabBarVisualProvider.h>

@class _UIBarBackground, UIView, UIScrollView, UIMotionEffect;

@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider {

	_UIBarBackground* _backgroundView;
	UIView* _customBackgroundView;
	UIView* _accessoryView;
	UIScrollView* _itemsScrollView;
	UIView* _focusedItemHighlightView;
	UIMotionEffect* _focusedItemHighlightMotionEffect;
	BOOL _usingHorizontalLayout;

}
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)prepare;
-(void)teardown;
-(void)changeAppearance;
-(void)changeLayout;
-(void)_updateBackground;
-(void)updateArchivedSubviews:(id)arg1 ;
-(id)preferredFocusedView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_updateBackdropView;
-(id)_shim_backdropGroupName;
-(void)_shim_setBackdropGroupName:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(BOOL)arg4 ;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(id)createViewForTabBarItem:(id)arg1 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)tabBarSizeChanged:(CGSize)arg1 ;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(id)_shim_accessoryView;
-(id)_shim_shadowView;
-(void)_shim_updateFocusHighlightVisibility;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(id)_parentViewForItems;
-(void)_layoutTabBarItems;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
-(CGRect)_layoutRegion;
-(void)_determineHorizontalLayout;
-(void)_configureItems:(id)arg1 ;
-(void)_updateAccessoryView;
-(BOOL)_focusedItemHighlightViewIsVisible;
-(void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2 ;
-(id)_preferredFocusedViewCarplay;
-(id)_preferredFocusedViewATV;
-(void)_updateFocusedItemHighlightFrame;
-(void)_updateHighlightMotionEffect;
-(void)_setFocusedItemHightlightVisible:(BOOL)arg1 ;
-(void)_cleanupAdaptiveBackdrop;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(id)_focusedItemHighlightView;
@end

