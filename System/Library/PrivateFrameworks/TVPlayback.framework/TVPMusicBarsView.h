/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface TVPMusicBarsView : UIView {

	NSArray* _barViews;
	float _repeatCount;
	long long _musicBarsStyle;

}

@property (assign,nonatomic) long long musicBarsStyle; 
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)stopAnimating;
-(id)_createBarViews;
-(void)setMusicBarsStyle:(long long)arg1 ;
-(void)_addAnimationsWithRepeatCount:(float)arg1 ;
-(void)_removeAnimations;
-(void)_setBarHeights:(double)arg1 ;
-(void)_addAnimations;
-(void)_updateMusicBarsStyle;
-(long long)musicBarsStyle;
-(void)resumeAnimatingIfNeeded;
-(void)resumeAnimating;
@end
