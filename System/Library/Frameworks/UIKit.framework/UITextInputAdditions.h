/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(BOOL)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;

@required
-(BOOL)isEditable;
-(id)textInputView;
-(BOOL)isEditing;
-(id)interactionAssistant;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect*)_caretRect;

@end

