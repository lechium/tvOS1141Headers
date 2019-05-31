/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlaybackProgressAnimation.h>

@protocol TVDragPlaybackProgressAnimationDelegate;
@interface _TVPDragPlaybackProgressAnimation : TVPlaybackProgressAnimation {

	id<TVDragPlaybackProgressAnimationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVDragPlaybackProgressAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TVDragPlaybackProgressAnimationDelegate>)delegate;
-(void)setDelegate:(id<TVDragPlaybackProgressAnimationDelegate>)arg1 ;
-(BOOL)isFinished;
-(double)currentPlaybackTime;
@end

