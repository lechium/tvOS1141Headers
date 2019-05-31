/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITextInputController;

@interface NSUndoTextOperation : NSObject {

	UITextInputController* _inputController;
	NSRange _affectedRange;

}

@property (assign,nonatomic) NSRange affectedRange;                                       //@synthesize affectedRange=_affectedRange - In the implementation block
@property (assign,nonatomic,__weak) UITextInputController * inputController;              //@synthesize inputController=_inputController - In the implementation block
-(UITextInputController *)inputController;
-(void)setInputController:(UITextInputController *)arg1 ;
-(id)initWithAffectedRange:(NSRange)arg1 inputController:(id)arg2 ;
-(void)undoRedo;
-(BOOL)supportsCoalescing;
-(NSRange)affectedRange;
-(void)setAffectedRange:(NSRange)arg1 ;
@end

