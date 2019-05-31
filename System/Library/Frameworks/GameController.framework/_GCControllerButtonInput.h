/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCControllerButtonInput.h>

@class NSString;

@interface _GCControllerButtonInput : GCControllerButtonInput {

	/*^block*/id _valueChangedHandler;
	/*^block*/id _pressedChangedHandler;
	float _value;
	NSString* _descriptionName;

}
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)description;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(/*^block*/id)valueChangedHandler;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(/*^block*/id)pressedChangedHandler;
-(void)setPressedChangedHandler:(/*^block*/id)arg1 ;
-(id)initWithDescriptionName:(id)arg1 ;
@end
