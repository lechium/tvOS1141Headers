/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@interface GCControllerElement : NSObject

@property (nonatomic,__weak,readonly) GCControllerElement * collection; 
@property (getter=isAnalog,nonatomic,readonly) BOOL analog; 
-(float)value;
-(id)controller;
-(BOOL)_setValue:(float)arg1 ;
-(GCControllerElement *)collection;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
@end

