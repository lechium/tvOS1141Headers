/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewAnimationState.h>

@class NSMutableSet, NSMutableDictionary, NSMapTable;

@interface UIViewKeyframeAnimationState : UIViewAnimationState {

	double _frameDuration;
	double _frameStartTime;
	long long _calculationMode;
	NSMutableSet* _keyframeLayers;
	NSMutableDictionary* _keyframeLayersForCurrentKeyFrameDict;
	NSMapTable* _viewToKeyframesMap;
	BOOL _inFrame;

}
-(id)init;
-(void)pop;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(BOOL)_isKeyframeAnimation;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(BOOL)_addPendingKeyframeValue:(id)arg1 forKey:(id)arg2 view:(id)arg3 ;
-(void)_generatePendingKeyframeAnimations;
-(void)cleanupTrackedLayers;
-(void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(/*^block*/id)arg3 ;
@end

