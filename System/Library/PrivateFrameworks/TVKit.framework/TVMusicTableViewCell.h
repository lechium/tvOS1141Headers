/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVTableViewCell.h>

@class UIImage, UIView;

@interface TVMusicTableViewCell : TVTableViewCell {

	UIImage* _accessoryImage;
	UIView* _badgeView;
	long long _placeholderAssetType;

}

@property (nonatomic,retain) UIView * badgeView;                          //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) long long placeholderAssetType;              //@synthesize placeholderAssetType=_placeholderAssetType - In the implementation block
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIView *)badgeView;
-(void)setAccessoryView:(id)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
-(void)_updateColors;
-(id)_textLabelColor;
-(id)_detailTextLabelColor;
-(void)_updateColorsWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2 ;
-(void)_setAccessoryViewColor;
-(void)_setAccessoryViewWithTextLabelColor:(id)arg1 detailTextLabelColor:(id)arg2 ;
-(BOOL)_isFocusedInDarkMode;
-(id)_focusedInDarkModeTextLabelColor;
-(id)_defaultTextLabelColor;
-(id)_defaultDetailTextLabelColor;
-(void)setPlaceholderAssetType:(long long)arg1 ;
-(void)_updatePlaceholderImageIfNeeded;
-(long long)placeholderAssetType;
@end

