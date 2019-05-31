/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;

@interface _MKDirectionalPressGestureRecognizer : UIGestureRecognizer {

	long long _horizontalDirection;
	double _horizontalForce;
	long long _verticalDirection;
	double _verticalForce;
	NSMutableSet* _activePresses;
	BOOL _forVariableForcePresses;

}

@property (nonatomic,readonly) long long horizontalDirection;                                              //@synthesize horizontalDirection=_horizontalDirection - In the implementation block
@property (nonatomic,readonly) double horizontalForce;                                                     //@synthesize horizontalForce=_horizontalForce - In the implementation block
@property (nonatomic,readonly) long long verticalDirection;                                                //@synthesize verticalDirection=_verticalDirection - In the implementation block
@property (nonatomic,readonly) double verticalForce;                                                       //@synthesize verticalForce=_verticalForce - In the implementation block
@property (getter=isForVariableForcePresses,nonatomic,readonly) BOOL forVariableForcePresses;              //@synthesize forVariableForcePresses=_forVariableForcePresses - In the implementation block
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(long long)_horizontalDirectionForPresses:(id)arg1 force:(double*)arg2 ;
-(long long)_verticalDirectionForPresses:(id)arg1 force:(double*)arg2 ;
-(long long)horizontalDirection;
-(double)horizontalForce;
-(long long)verticalDirection;
-(double)verticalForce;
-(BOOL)isForVariableForcePresses;
@end

