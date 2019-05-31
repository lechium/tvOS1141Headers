/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIImageView.h>

@class NSArray, _TVWallpaperProxy, UIView;

@interface _TVWallpaperImageView : UIImageView {

	long long _variant;
	NSArray* _userInterfaceStyles;
	long long _currentUserInterfaceStyle;
	_TVWallpaperProxy* _wallpaperProxy;
	UIView* _noiseView;
	UIView* _overlayView;

}

@property (nonatomic,readonly) long long currentUserInterfaceStyle;              //@synthesize currentUserInterfaceStyle=_currentUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) _TVWallpaperProxy * wallpaperProxy;               //@synthesize wallpaperProxy=_wallpaperProxy - In the implementation block
@property (nonatomic,readonly) UIView * noiseView;                               //@synthesize noiseView=_noiseView - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                             //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) long long variant;                                //@synthesize variant=_variant - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userInterfaceStyles;               //@synthesize userInterfaceStyles=_userInterfaceStyles - In the implementation block
-(long long)variant;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)overlayView;
-(void)_updateWallpaperImageAnimated:(BOOL)arg1 ;
-(void)updateWallpaperImage:(id)arg1 ;
-(void)reducedTransparencyDidChange:(id)arg1 ;
-(void)_updateWallpaperForReducedTransparency:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 variant:(long long)arg2 userInterfaceStyles:(id)arg3 ;
-(NSArray *)userInterfaceStyles;
-(long long)currentUserInterfaceStyle;
-(_TVWallpaperProxy *)wallpaperProxy;
-(UIView *)noiseView;
@end

