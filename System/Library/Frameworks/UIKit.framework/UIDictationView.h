/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>

@protocol UIDictationViewDisplayDelegate;
@class UIKeyboardDicationBackground, UIButton, SUICFlamesView, NSString;

@interface UIDictationView : UIView <SUICFlamesViewDelegate> {

	UIKeyboardDicationBackground* _background;
	UIButton* _endpointButton;
	UIButton* _endpointButtonLandscape;
	int _state;
	BOOL _keyboardInTransition;
	BOOL _automaticAppearanceWasEnabled;
	SUICFlamesView* _flamesView;
	BOOL _showLanguageLabel;
	BOOL _switchingLanguage;
	id<UIDictationViewDisplayDelegate> _displayDelegate;

}

@property (assign,nonatomic) BOOL showLanguageLabel;                                          //@synthesize showLanguageLabel=_showLanguageLabel - In the implementation block
@property (assign,nonatomic) BOOL switchingLanguage;                                          //@synthesize switchingLanguage=_switchingLanguage - In the implementation block
@property (assign,nonatomic) id<UIDictationViewDisplayDelegate> displayDelegate;              //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)activeInstance;
+(CGSize)layoutSize;
+(Class)dictationViewClass;
+(CGSize)viewSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)show;
-(CGPoint)contentOffset;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(BOOL)visible;
-(void)keyboardDidShow:(id)arg1 ;
-(void)setDisplayDelegate:(id<UIDictationViewDisplayDelegate>)arg1 ;
-(void)applicationWillResignActive;
-(BOOL)switchingLanguage;
-(void)setSwitchingLanguage:(BOOL)arg1 ;
-(void)setShowLanguageLabel:(BOOL)arg1 ;
-(void)highlightEndpointButton;
-(void)finishReturnToKeyboard;
-(void)prepareForReturnToKeyboard;
-(BOOL)drawsOwnBackground;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(id)endpointButton;
-(CGSize)currentScreenSize;
-(void)applicationEnteredBackground;
-(CGPoint)positionForShow;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(CGPoint)backgroundOffset;
-(void)returnToKeyboard;
-(BOOL)isShowing;
-(void)endpointButtonPressed;
-(id<UIDictationViewDisplayDelegate>)displayDelegate;
-(BOOL)showLanguageLabel;
@end

