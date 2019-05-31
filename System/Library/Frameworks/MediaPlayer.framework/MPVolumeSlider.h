/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UISlider.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVolumeDisplaying.h>

@class NSString, NSTimer, UILabel, UIImageView, UIView, UIImage, UILayoutGuide, MPVolumeController, MPAVController, MPAVRoute;

@interface MPVolumeSlider : UISlider <MPVolumeControllerDelegate, MPVolumeDisplaying> {

	NSTimer* _commitTimer;
	UILabel* _routeNameLabel;
	long long _style;
	UIImageView* _thumbImageView;
	BOOL _isOffScreen;
	BOOL _forcingOffscreenVisibility;
	BOOL _thumbIsDefault;
	BOOL _configuredLayoutGuide;
	UIView* _volumeWarningView;
	BOOL _volumeWarningBlinking;
	UIImage* _volumeWarningTrackImage;
	BOOL _userWasBlocked;
	double _originalMinTrackViewAlphaOverride;
	double _originalMinValueViewAlphaOverride;
	double _originalMaxValueViewAlphaOverride;
	UILayoutGuide* _trackLayoutGuide;
	MPVolumeController* _volumeController;
	UIEdgeInsets _hitRectInsets;

}

@property (assign,setter=_setIsOffScreen:,nonatomic) BOOL _isOffScreen; 
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                                                     //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * trackLayoutGuide;                                             //@synthesize trackLayoutGuide=_trackLayoutGuide - In the implementation block
@property (nonatomic,__weak,readonly) UIView * thumbView; 
@property (nonatomic,readonly) MPVolumeController * volumeController;                                        //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain) MPAVRoute * route; 
@property (nonatomic,readonly) long long style;                                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * volumeWarningTrackImage;                                              //@synthesize volumeWarningTrackImage=_volumeWarningTrackImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * volumeControlLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
-(MPAVRoute *)route;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(long long)style;
-(CGRect)hitRect;
-(void)didMoveToSuperview;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(float)minimumValue;
-(float)maximumValue;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)setThumbImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(UIEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(void)_setIsOffScreen:(BOOL)arg1 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeControlLabelDidChange:(id)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2 ;
-(void)volumeController:(id)arg1 EUVolumeLimitEnforcedDidChange:(BOOL)arg2 ;
-(void)_resetThumbImageForState:(unsigned long long)arg1 ;
-(id)_minTrackImageForStyle:(long long)arg1 ;
-(id)_maxTrackImageForStyle:(long long)arg1 ;
-(void)_endBlinkingWarningView;
-(void)_layoutVolumeWarningView;
-(void)_commitVolumeChange;
-(void)_endTracking;
-(void)_layoutForAvailableRoutes;
-(NSString *)volumeControlLabel;
-(void)setVolumeDataSource:(id)arg1 ;
-(BOOL)_isOffScreen;
-(NSString *)volumeAudioCategory;
-(void)_beginBlinkingWarningView;
-(id)_thumbImageForStyle:(long long)arg1 ;
-(id)_newVolumeWarningView;
-(void)_blinkWarningView;
-(BOOL)isOnScreenForVolumeDisplay;
-(void)setVolumeWarningTrackImage:(UIImage *)arg1 ;
-(UIView *)thumbView;
-(UIImage *)volumeWarningTrackImage;
-(UILayoutGuide *)trackLayoutGuide;
-(MPVolumeController *)volumeController;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end
