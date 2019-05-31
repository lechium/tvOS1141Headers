/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UITextDocumentInterfaceDelegate.h>
#import <UIKit/UITextInputDelegate.h>

@protocol UITextDocumentProxy;
@class NSString, UIKeyboard, UIInputView;

@interface UIInputViewController : UIViewController <_UITextDocumentInterfaceDelegate, UITextInputDelegate> {

	BOOL _commitInputModeOnTouchEnd;
	BOOL _inputModeListIsShown;
	BOOL _viewConformsToRemotePlaceholder;
	double _touchBegan;
	BOOL _alignsToContentViewController;
	BOOL _autosizeToCurrentKeyboard;
	BOOL _hasDictationKey;
	id<UITextDocumentProxy> _textDocumentProxy;
	NSString* _primaryLanguage;

}

@property (nonatomic,readonly) UIKeyboard * _keyboard; 
@property (nonatomic,readonly) BOOL _isPlaceholder; 
@property (assign,nonatomic) BOOL _alignsToContentViewController;                                                //@synthesize alignsToContentViewController=_alignsToContentViewController - In the implementation block
@property (assign,setter=_setAutosizeToCurrentKeyboard:,nonatomic) BOOL _autosizeToCurrentKeyboard;              //@synthesize autosizeToCurrentKeyboard=_autosizeToCurrentKeyboard - In the implementation block
@property (nonatomic,retain) UIInputView * inputView; 
@property (nonatomic,readonly) id<UITextDocumentProxy> textDocumentProxy;                                        //@synthesize textDocumentProxy=_textDocumentProxy - In the implementation block
@property (nonatomic,copy) NSString * primaryLanguage;                                                           //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasDictationKey;                                                               //@synthesize hasDictationKey=_hasDictationKey - In the implementation block
@property (nonatomic,readonly) BOOL hasFullAccess; 
@property (nonatomic,readonly) BOOL needsInputModeSwitchKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_requiresProxyInterface;
+(void)presentDialogForAddingKeyboard;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)primaryLanguage;
-(void)didReceiveMemoryWarning;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)textWillChange:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)_setExtensionContextUUID:(id)arg1 ;
-(BOOL)_canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(BOOL)_canResignIfContainsFirstResponder;
-(UIInputView *)inputView;
-(void)setInputView:(UIInputView *)arg1 ;
-(BOOL)_isPlaceholder;
-(UIKeyboard *)_keyboard;
-(id)_compatibilityController;
-(void)selectionWillChange:(id)arg1 ;
-(void)selectionDidChange:(id)arg1 ;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(void)dismissKeyboard;
-(void)_willResetDocumentState;
-(void)_didResetDocumentState;
-(void)_setupInputController;
-(id)_proxyInterface;
-(id)_textDocumentInterface;
-(void)_setAutosizeToCurrentKeyboard:(BOOL)arg1 ;
-(void)_updateConformanceCache;
-(id<UITextDocumentProxy>)textDocumentProxy;
-(void)advanceToNextInputMode;
-(void)_setTextDocumentProxy:(id)arg1 ;
-(void)set_autosizeToCurrentKeyboard:(BOOL)arg1 ;
-(id)_extensionContext;
-(BOOL)_shouldForwardSystemLayoutFittingSizeChanges;
-(BOOL)hasFullAccess;
-(BOOL)needsInputModeSwitchKey;
-(void)setHasDictationKey:(BOOL)arg1 ;
-(void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2 ;
-(void)returnToPreviousInputMode;
-(void)requestSupplementaryLexiconWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_alignsToContentViewController;
-(void)set_alignsToContentViewController:(BOOL)arg1 ;
-(BOOL)_autosizeToCurrentKeyboard;
-(BOOL)hasDictationKey;
@end

