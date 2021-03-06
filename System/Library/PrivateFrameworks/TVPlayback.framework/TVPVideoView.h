/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKit/UIView.h>

@protocol TVPAVFPlayback;
@class NSObject, UILabel, TVPPlayerLayerView, TVPPlayerDebugInfoView, UIImageView, UIView;

@interface TVPVideoView : UIView {

	BOOL _isPrimarySubtitleDisplayer;
	BOOL _readyForDisplay;
	NSObject*<TVPAVFPlayback> _player;
	UILabel* _debugLabel;
	TVPPlayerLayerView* _playerLayerView;
	TVPPlayerDebugInfoView* _playerDebugInfoView;
	UIImageView* _stillImageView;
	UIView* _obscuringView;

}

@property (nonatomic,retain) TVPPlayerLayerView * playerLayerView;                       //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (nonatomic,retain) TVPPlayerDebugInfoView * playerDebugInfoView;               //@synthesize playerDebugInfoView=_playerDebugInfoView - In the implementation block
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) UIImageView * stillImageView;                               //@synthesize stillImageView=_stillImageView - In the implementation block
@property (nonatomic,retain) UIView * obscuringView;                                     //@synthesize obscuringView=_obscuringView - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                           //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UILabel * debugLabel;                                     //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) BOOL isPrimarySubtitleDisplayer;                            //@synthesize isPrimarySubtitleDisplayer=_isPrimarySubtitleDisplayer - In the implementation block
+(void)initialize;
+(void)preserveVideoViewForReuse:(id)arg1 identifier:(id)arg2 ;
+(id)preservedVideoViewsForPlayer:(id)arg1 identifier:(id)arg2 ;
+(void)_playerStateDidChange:(id)arg1 ;
+(void)_purgePreservedVideoViewsForPlayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(TVPPlayerLayerView *)playerLayerView;
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(NSObject*<TVPAVFPlayback>)player;
-(BOOL)isReadyForDisplay;
-(void)setIsPrimarySubtitleDisplayer:(BOOL)arg1 ;
-(BOOL)isPrimarySubtitleDisplayer;
-(void)setAVPlayer:(id)arg1 ;
-(TVPPlayerDebugInfoView *)playerDebugInfoView;
-(void)_playerStillImageDidChange:(id)arg1 ;
-(id)OutputObscuredBinding;
-(void)_outputObscuredDidChange;
-(UIImageView *)stillImageView;
-(void)setStillImageView:(UIImageView *)arg1 ;
-(id)AVPlayer;
-(void)tvs_bindOutputObscuredBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(UILabel *)debugLabel;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(void)setPlayerLayerView:(TVPPlayerLayerView *)arg1 ;
-(void)setPlayerDebugInfoView:(TVPPlayerDebugInfoView *)arg1 ;
-(UIView *)obscuringView;
-(void)setObscuringView:(UIView *)arg1 ;
@end

