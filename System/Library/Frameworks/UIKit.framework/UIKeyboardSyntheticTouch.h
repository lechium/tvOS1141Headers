/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject {

	double timestamp;
	long long phase;
	unsigned long long tapCount;
	UIWindow* window;
	CGPoint locationInWindow;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;

}

@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) long long phase; 
@property (assign,nonatomic) unsigned long long tapCount; 
@property (nonatomic,retain) UIWindow * window; 
@property (assign,nonatomic) CGPoint locationInWindow; 
@property (nonatomic,readonly) unsigned char _pathIndex;                 //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) unsigned char _pathIdentity;              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (assign,nonatomic) float _pathMajorRadius;                     //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
+(id)syntheticTouchWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(UIWindow *)window;
-(CGPoint)locationInView:(id)arg1 ;
-(long long)phase;
-(void)dealloc;
-(double)timestamp;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setPhase:(long long)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(unsigned long long)tapCount;
-(float)_pathMajorRadius;
-(unsigned char)_pathIndex;
-(CGPoint)locationInWindow;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(BOOL)arg2 ;
-(void)setTapCount:(unsigned long long)arg1 ;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(unsigned char)_pathIdentity;
-(id)initWithPoint:(CGPoint)arg1 timestamp:(double)arg2 window:(id)arg3 ;
-(void)setLocationInWindow:(CGPoint)arg1 ;
-(CGPoint)getLocationInWindow;
-(void)set_pathMajorRadius:(float)arg1 ;
@end

