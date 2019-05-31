/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIFocusFastScrollingTouchSequence : NSObject {

	BOOL _didReceiveSpatialFocusUpdate;
	BOOL _didReceiveProgrammaticFocusUpdate;
	double _peakSpeed;
	CGPoint _startLocation;
	CGPoint _previousLocation;
	CGPoint _endLocation;
	CGVector _axisLockedDistanceAccumulator;

}

@property (assign,nonatomic) CGPoint startLocation;                               //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) CGPoint previousLocation;                            //@synthesize previousLocation=_previousLocation - In the implementation block
@property (assign,nonatomic) CGPoint endLocation;                                 //@synthesize endLocation=_endLocation - In the implementation block
@property (assign,nonatomic) double peakSpeed;                                    //@synthesize peakSpeed=_peakSpeed - In the implementation block
@property (assign,nonatomic) CGVector axisLockedDistanceAccumulator;              //@synthesize axisLockedDistanceAccumulator=_axisLockedDistanceAccumulator - In the implementation block
@property (assign,nonatomic) BOOL didReceiveSpatialFocusUpdate;                   //@synthesize didReceiveSpatialFocusUpdate=_didReceiveSpatialFocusUpdate - In the implementation block
@property (assign,nonatomic) BOOL didReceiveProgrammaticFocusUpdate;              //@synthesize didReceiveProgrammaticFocusUpdate=_didReceiveProgrammaticFocusUpdate - In the implementation block
-(CGPoint)startLocation;
-(void)setStartLocation:(CGPoint)arg1 ;
-(CGPoint)previousLocation;
-(void)setPreviousLocation:(CGPoint)arg1 ;
-(CGPoint)endLocation;
-(void)setEndLocation:(CGPoint)arg1 ;
-(double)peakSpeed;
-(void)setPeakSpeed:(double)arg1 ;
-(CGVector)axisLockedDistanceAccumulator;
-(void)setAxisLockedDistanceAccumulator:(CGVector)arg1 ;
-(BOOL)didReceiveSpatialFocusUpdate;
-(void)setDidReceiveSpatialFocusUpdate:(BOOL)arg1 ;
-(BOOL)didReceiveProgrammaticFocusUpdate;
-(void)setDidReceiveProgrammaticFocusUpdate:(BOOL)arg1 ;
@end

