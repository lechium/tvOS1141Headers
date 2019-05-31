/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIView, PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView {

	BOOL _playingVideo;
	BOOL _inPopover;
	long long _style;
	UIView* _cameraBottomBar;
	PLCropOverlayPreviewBottomBar* _previewBottomBar;
	PLCropOverlayWallpaperBottomBar* _wallpaperBottomBar;

}

@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * cameraBottomBar;                                          //@synthesize cameraBottomBar=_cameraBottomBar - In the implementation block
@property (nonatomic,retain) PLCropOverlayPreviewBottomBar * previewBottomBar;                  //@synthesize previewBottomBar=_previewBottomBar - In the implementation block
@property (nonatomic,retain) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;              //@synthesize wallpaperBottomBar=_wallpaperBottomBar - In the implementation block
@property (assign,getter=isPlayingVideo,nonatomic) BOOL playingVideo;                           //@synthesize playingVideo=_playingVideo - In the implementation block
@property (assign,getter=isInPopover,nonatomic) BOOL inPopover;                                 //@synthesize inPopover=_inPopover - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_updateStyle;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setInPopover:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPreviewBottomBar:(PLCropOverlayPreviewBottomBar *)arg1 ;
-(void)setWallpaperBottomBar:(PLCropOverlayWallpaperBottomBar *)arg1 ;
-(UIView *)cameraBottomBar;
-(void)setCameraBottomBar:(UIView *)arg1 ;
-(PLCropOverlayWallpaperBottomBar *)wallpaperBottomBar;
-(PLCropOverlayPreviewBottomBar *)previewBottomBar;
-(void)setPlayingVideo:(BOOL)arg1 ;
-(void)togglePlaybackState;
-(BOOL)isPlayingVideo;
-(void)_commonPLCropOverlayBottomBarInitialization;
-(void)_updateBottomBars;
-(void)_updatePreviewBottomBarForPlaybackState;
-(BOOL)_isEditingStyle:(long long)arg1 ;
-(BOOL)isInPopover;
@end

