/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <libobjc.A.dylib/ISVisibilityOffsetComputer.h>

@class UIScrollView;

@interface ISVisibilityOffsetHelper : NSObject <ISVisibilityOffsetComputer> {

	long long _direction;
	double _maximumDistance;
	double _maximumDistanceLag;
	UIScrollView* __scrollView;
	CGPoint __targetContentOffset;

}

@property (setter=_setScrollView:,nonatomic,retain) UIScrollView * _scrollView;                         //@synthesize _scrollView=__scrollView - In the implementation block
@property (assign,setter=_setTargetContentOffset:,nonatomic) CGPoint _targetContentOffset;              //@synthesize _targetContentOffset=__targetContentOffset - In the implementation block
@property (assign,nonatomic) long long direction;                                                       //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double maximumDistance;                                                    //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceLag;                                                 //@synthesize maximumDistanceLag=_maximumDistanceLag - In the implementation block
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(UIScrollView *)_scrollView;
-(CGRect)visibleRectForScrollView:(NSObject*)arg1 ;
-(double)maximumDistance;
-(void)setMaximumDistance:(double)arg1 ;
-(CGRect)boundsForView:(NSObject*)arg1 inScrollView:(NSObject*)arg2 ;
-(void)getVisibility:(BOOL*)arg1 offset:(double*)arg2 targetVisibilityOffset:(double*)arg3 forView:(NSObject*)arg4 ;
-(void)computeVisibilityOffsetsInScrollView:(id)arg1 withTargetContentOffset:(CGPoint)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_setScrollView:(id)arg1 ;
-(CGPoint)_targetContentOffset;
-(void)_setTargetContentOffset:(CGPoint)arg1 ;
-(void)_updateDirectionIfNeeded;
-(ISVisibilityRange)_visibilityRangeForRect:(CGRect)arg1 ;
-(double)maximumDistanceLag;
-(void)setMaximumDistanceLag:(double)arg1 ;
@end

