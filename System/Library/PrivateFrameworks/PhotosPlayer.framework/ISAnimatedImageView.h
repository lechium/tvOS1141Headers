/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/ISAnimatedImagePlayerDestination.h>

@class UIImageView, ISAnimatedImagePlayer, ISAnimatedImage, NSString;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination> {

	UIImageView* _placeholderImageView;
	ISAnimatedImagePlayer* _player;

}

@property (assign,nonatomic) UIImageView * placeholderImageView;                  //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) ISAnimatedImage * image; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) unsigned long long displayedFrameIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHidden:(BOOL)arg1 ;
-(void)setImage:(ISAnimatedImage *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setAlpha:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(ISAnimatedImage *)image;
-(void)displayLayer:(id)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isPlaying;
-(void)setPlayer:(ISAnimatedImagePlayer *)arg1 ;
-(ISAnimatedImagePlayer *)player;
-(id)initWithAnimatedImage:(id)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)frameDidChange;
-(id)initWithAnimatedImagePlayer:(id)arg1 ;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayedFrameIndex;
-(BOOL)isReadyToDisplay;
-(void)didBeginAnimating;
-(UIImageView *)placeholderImageView;
@end
