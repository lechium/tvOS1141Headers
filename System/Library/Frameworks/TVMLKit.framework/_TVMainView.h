/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UITabBar, UIView, UIImage, TVPVideoView, UIImageView;

@interface _TVMainView : UIView {

	BOOL _tabBarHidden;
	UITabBar* _tabBar;
	UIView* _bannerView;
	UIImage* _backgroundImage;
	TVPVideoView* _videoView;
	UIImageView* _bgImageView;

}

@property (nonatomic,retain) UIImageView * bgImageView;               //@synthesize bgImageView=_bgImageView - In the implementation block
@property (nonatomic,retain,readonly) UITabBar * tabBar;              //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,retain) UIView * bannerView;                     //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;               //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) TVPVideoView * videoView;                //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) BOOL tabBarHidden;                       //@synthesize tabBarHidden=_tabBarHidden - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusEnvironments;
-(UIImage *)backgroundImage;
-(UITabBar *)tabBar;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(TVPVideoView *)videoView;
-(void)setVideoView:(TVPVideoView *)arg1 ;
-(void)setTabBarHidden:(BOOL)arg1 ;
-(UIView *)bannerView;
-(void)setBannerView:(UIView *)arg1 ;
-(UIImageView *)bgImageView;
-(void)setBgImageView:(UIImageView *)arg1 ;
-(BOOL)tabBarHidden;
@end
