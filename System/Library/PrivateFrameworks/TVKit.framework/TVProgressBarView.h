/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, TVPlaybackProgressBarBackgroundMask, NSArray;

@interface TVProgressBarView : UIView {

	UIView* _backgroundFillView;
	TVPlaybackProgressBarBackgroundMask* _fillMask;
	UIView* _barView;
	double _minProgress;
	double _maxProgress;
	double _minPlayheadLocation;
	double _maxPlayheadLocation;

}

@property (nonatomic,readonly) UIView * barView;                      //@synthesize barView=_barView - In the implementation block
@property (assign,nonatomic) double minPlayheadLocation;              //@synthesize minPlayheadLocation=_minPlayheadLocation - In the implementation block
@property (assign,nonatomic) double maxPlayheadLocation;              //@synthesize maxPlayheadLocation=_maxPlayheadLocation - In the implementation block
@property (nonatomic,copy) NSArray * adMarkers; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)setAdMarkers:(NSArray *)arg1 ;
-(NSArray *)adMarkers;
-(void)setMinPlayheadLocation:(double)arg1 maxPlayheadLocation:(double)arg2 ;
-(void)setMinProgress:(double)arg1 maxProgress:(double)arg2 animated:(BOOL)arg3 ;
-(id)_initWithFrame:(CGRect)arg1 barView:(id)arg2 ;
-(double)maxPlayheadLocation;
-(double)minPlayheadLocation;
-(id)initWithBarView:(id)arg1 ;
-(void)setMinPlayheadLocation:(double)arg1 ;
-(void)setMaxPlayheadLocation:(double)arg1 ;
-(UIView *)barView;
@end

