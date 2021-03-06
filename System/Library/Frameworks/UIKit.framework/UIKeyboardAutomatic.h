/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboard.h>

@interface UIKeyboardAutomatic : UIKeyboard {

	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
	BOOL receivedCandidatesInCurrentInputMode;
	BOOL caretBlinks;

}

@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
@property (assign,nonatomic) BOOL caretBlinks; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)activate;
-(BOOL)showsCandidateBar;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(BOOL)showsCandidateInline;
-(void)minimize;
-(void)maximize;
-(BOOL)isAutomatic;
-(BOOL)caretBlinks;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
-(void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2 ;
-(void)didSuspend:(id)arg1 ;
-(BOOL)_isAutomaticKeyboard;
-(void)willResume:(id)arg1 ;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1 ;
@end

