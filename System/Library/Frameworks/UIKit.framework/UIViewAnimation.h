/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, NSIndexPath;

@interface UIViewAnimation : NSObject {

	BOOL _animateFromCurrentPosition;
	BOOL _shouldDeleteAfterAnimation;
	BOOL _editing;
	BOOL _shouldAnimateShadow;
	BOOL _shouldResetGroupOpacityAfterAnimation;
	BOOL _shouldAllowGroupOpacityAfterAnimation;
	BOOL _shouldClipToBoundsAfterAnimation;
	int _viewType;
	int _curve;
	UIView* _view;
	NSIndexPath* _indexPath;
	double _endAlpha;
	double _startFraction;
	double _endFraction;
	CGRect _endRect;

}

@property (nonatomic,readonly) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) int viewType;                                          //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) CGRect endRect;                                        //@synthesize endRect=_endRect - In the implementation block
@property (nonatomic,readonly) double endAlpha;                                       //@synthesize endAlpha=_endAlpha - In the implementation block
@property (nonatomic,readonly) double startFraction;                                  //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) double endFraction;                                    //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) int curve;                                             //@synthesize curve=_curve - In the implementation block
@property (nonatomic,readonly) BOOL animateFromCurrentPosition;                       //@synthesize animateFromCurrentPosition=_animateFromCurrentPosition - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeleteAfterAnimation;                       //@synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation - In the implementation block
@property (nonatomic,readonly) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateShadow;                                //@synthesize shouldAnimateShadow=_shouldAnimateShadow - In the implementation block
@property (assign,nonatomic) BOOL shouldResetGroupOpacityAfterAnimation;              //@synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowGroupOpacityAfterAnimation;              //@synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation - In the implementation block
@property (assign,nonatomic) BOOL shouldClipToBoundsAfterAnimation;                   //@synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation - In the implementation block
-(id)description;
-(UIView *)view;
-(NSIndexPath *)indexPath;
-(int)curve;
-(double)startFraction;
-(double)endFraction;
-(BOOL)animateFromCurrentPosition;
-(double)endAlpha;
-(void)setShouldAllowGroupOpacityAfterAnimation:(BOOL)arg1 ;
-(void)setShouldResetGroupOpacityAfterAnimation:(BOOL)arg1 ;
-(void)setShouldClipToBoundsAfterAnimation:(BOOL)arg1 ;
-(BOOL)shouldAnimateShadow;
-(BOOL)shouldDeleteAfterAnimation;
-(CGRect)endRect;
-(BOOL)editing;
-(int)viewType;
-(BOOL)shouldResetGroupOpacityAfterAnimation;
-(BOOL)shouldAllowGroupOpacityAfterAnimation;
-(BOOL)shouldClipToBoundsAfterAnimation;
-(id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(CGRect)arg4 endAlpha:(double)arg5 startFraction:(double)arg6 endFraction:(double)arg7 curve:(int)arg8 animateFromCurrentPosition:(BOOL)arg9 shouldDeleteAfterAnimation:(BOOL)arg10 editing:(BOOL)arg11 ;
-(void)setShouldAnimateShadow:(BOOL)arg1 ;
@end

