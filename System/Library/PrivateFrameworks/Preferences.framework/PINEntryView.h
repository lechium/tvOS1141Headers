/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PINEntryView <UITextFieldDelegate>
@required
-(void)setBlocked:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1;
-(id)stringValue;
-(void)setStringValue:(id)arg1;
-(void)deleteLastCharacter;
-(void)showFailedAttempts:(long long)arg1;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2;
-(double)getCurrentTitleFontSize;
-(void)setTextFieldKeyboardType:(long long)arg1;
-(void)setTextFieldKeyboardAppearance:(long long)arg1;
-(void)showError:(id)arg1 animate:(BOOL)arg2;
-(void)setTitle:(id)arg1 font:(id)arg2;
-(void)hidePasscodeField:(BOOL)arg1;
-(void)setShowsOptionsButton:(BOOL)arg1;

@end

