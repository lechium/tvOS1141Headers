//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface MTEditableTextFieldCell : MTTableViewCell <UITextFieldDelegate>
{
    UITextField *_textField;	// 24 = 0x18
    CDUnknownBlockType _textChanged;	// 32 = 0x20
    id <UITextFieldDelegate> _delegate;	// 40 = 0x28
}

+ (id)textFont;	// IMP=0x00000001000f1fb4
@property(nonatomic) __weak id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType textChanged; // @synthesize textChanged=_textChanged;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;	// IMP=0x00000001000f28ac
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000001000f2790
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x00000001000f26e8
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000001000f2604
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000001000f2510
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000001000f2468
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000001000f23d4
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000001000f232c
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001000f2324
- (void)layoutSubviews;	// IMP=0x00000001000f2220
- (void)setupCell;	// IMP=0x00000001000f2050
- (void)updateFonts;	// IMP=0x00000001000f1fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

