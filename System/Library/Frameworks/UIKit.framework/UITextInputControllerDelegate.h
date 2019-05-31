/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputControllerDelegate <NSObject>
@optional
-(BOOL)textInputShouldBeginEditing:(id)arg1;
-(BOOL)textInput:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;
-(void)textInputDidChange:(id)arg1;
-(NSRange*)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(NSRange)arg2 toCharacterRange:(NSRange)arg3;
-(void)textInputDidChangeSelection:(id)arg1;

@end

