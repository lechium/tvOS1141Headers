/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UIKeyboardInputMode {

	UITouch* _triggeringTouch;
	UIKeyboardInputMode* _currentInputModeForDictation;

}

@property (nonatomic,retain) UITouch * triggeringTouch;                                       //@synthesize triggeringTouch=_triggeringTouch - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentInputModeForDictation;              //@synthesize currentInputModeForDictation=_currentInputModeForDictation - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass; 
+(BOOL)currentInputModeSupportsDictation;
-(void)dealloc;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(UIKeyboardInputMode *)currentInputModeForDictation;
-(Class)viewControllerClass;
-(UITouch *)triggeringTouch;
-(void)setCurrentInputModeForDictation:(UIKeyboardInputMode *)arg1 ;
@end

