/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

@interface CAStateControllerLayer : NSObject {

	CALayer* _layer;
	CAState* _currentState;
	CAStateControllerUndo* _undoStack;
	NSMutableArray* _transitions;
	NSTimer* _nextTimer;
	CAState* _nextState;
	float _nextSpeed;

}

@property (readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) CAStateControllerUndo * undoStack;              //@synthesize undoStack=_undoStack - In the implementation block
-(CAStateControllerUndo *)undoStack;
-(void)removeTransition:(id)arg1 ;
-(void)addTransition:(id)arg1 ;
-(void)invalidate;
-(CALayer *)layer;
-(void)dealloc;
-(CAState *)currentState;
-(id)initWithLayer:(id)arg1 ;
-(void)setCurrentState:(CAState *)arg1 ;
@end
