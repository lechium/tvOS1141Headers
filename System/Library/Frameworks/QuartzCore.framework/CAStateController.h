/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAStateController : NSObject {

	CAStateControllerData* _data;

}

@property (readonly) CALayer * layer; 
@property (__weak) NSObject*<CAStateControllerDelegate> delegate; 
-(void)_removeTransition:(id)arg1 layer:(id)arg2 ;
-(id)stateOfLayer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 ;
-(id)removeAllStateChanges;
-(void)restoreStateChanges:(id)arg1 ;
-(void)cancelTimers;
-(void)_nextStateTimer:(id)arg1 ;
-(void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4 ;
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(NSObject*<CAStateControllerDelegate>)delegate;
-(CALayer *)layer;
-(void)setDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithLayer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3 ;
@end

