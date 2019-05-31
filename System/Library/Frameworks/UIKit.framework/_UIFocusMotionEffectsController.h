/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UIDynamicValueConvergenceAnimation;

@interface _UIFocusMotionEffectsController : NSObject {

	_UIDynamicValueConvergenceAnimation* _rollbackAnimation;
	CGPoint _currentOffset;

}

@property (nonatomic,readonly) CGPoint currentOffset;              //@synthesize currentOffset=_currentOffset - In the implementation block
-(void)reset;
-(void)cancelRollbackAnimation;
-(CGPoint)currentOffset;
-(void)updateCurrentOffset:(CGPoint)arg1 ;
-(void)startRollbackAnimation;
@end

