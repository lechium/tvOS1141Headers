/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/WebFormDelegate.h>

@class UIWebBrowserView, _UIWebFormDelegateEditedFormsMap, NSString;

@interface UIWebFormDelegate : NSObject <WebFormDelegate> {

	UIWebBrowserView* _webBrowserView;
	_UIWebFormDelegateEditedFormsMap* _editedForms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(SCD_Struct_UI55)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(BOOL)hasCurrentSuggestions;
-(BOOL)_shouldIgnoreFormTextChangesInFrame:(id)arg1 ;
-(void)_didEditFormElement:(id)arg1 inFrame:(id)arg2 ;
-(void)_clearEditedFormsInFrame:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2 ;
-(void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2 ;
-(void)didFocusTextField:(id)arg1 inFrame:(id)arg2 ;
-(BOOL)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3 ;
-(void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5 ;
-(void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(id)initWithWebBrowserView:(id)arg1 ;
-(void)dataSourceHasChangedForFrame:(id)arg1 ;
-(BOOL)formWasEdited;
@end

