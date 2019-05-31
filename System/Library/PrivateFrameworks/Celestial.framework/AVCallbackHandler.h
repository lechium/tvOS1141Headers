/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface AVCallbackHandler : NSObject {

	id _target;
	SEL _action;
	SEL _mainThreadAction;
	NSCondition* _condition;
	id _params;

}

@property (assign) id target;                         //@synthesize target=_target - In the implementation block
@property (assign) SEL action;                        //@synthesize action=_action - In the implementation block
@property (assign) SEL mainThreadAction;              //@synthesize mainThreadAction=_mainThreadAction - In the implementation block
-(SEL)mainThreadAction;
-(void)setCallbackParams:(id)arg1 ;
-(id)waitForCallbackParams;
-(BOOL)hasParams;
-(void)setMainThreadAction:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(SEL)action;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end

