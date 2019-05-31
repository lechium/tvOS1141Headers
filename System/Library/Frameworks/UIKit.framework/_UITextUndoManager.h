/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

@interface _UITextUndoManager : NSUndoManager {

	UITextInputController* _inputController;

}

@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(void)removeAllActions;
-(UITextInputController *)inputController;
-(void)setInputController:(UITextInputController *)arg1 ;
@end

