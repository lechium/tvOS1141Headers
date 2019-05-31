/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITextInteractionAssistant, UITextSelection, NSTimer, UIView, UITextRangeView, NSArray;

@interface UITextSelectionView : UIView {

	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelection* m_selection;
	NSTimer* m_caretTimer;
	UIView* m_caretView;
	UIView* m_floatingCaretView;
	UITextRangeView* m_rangeView;
	BOOL m_caretBlinks;
	BOOL m_caretShowingNow;
	BOOL m_caretAnimating;
	BOOL m_visible;
	BOOL m_activated;
	BOOL m_wasShowingCommands;
	BOOL m_delayShowingCommands;
	BOOL m_dictationReplacementsMode;
	int m_showingCommandsCounter;
	NSArray* m_replacements;
	BOOL m_deferSelectionCommands;
	CFRunLoopObserverRef m_observer;
	BOOL m_activeCaret;
	BOOL m_isSuspended;
	BOOL m_forceRangeView;

}

@property (nonatomic,readonly) UIView * caretView; 
@property (nonatomic,readonly) UIView * floatingCaretView; 
@property (nonatomic,readonly) UITextRangeView * rangeView; 
@property (nonatomic,__weak,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) UITextSelection * selection; 
@property (assign,nonatomic) BOOL caretBlinks; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL forceRangeView; 
@property (nonatomic,readonly) BOOL selectionCommandsShowing; 
@property (nonatomic,retain) NSArray * replacements; 
-(void)removeFromSuperview;
-(void)invalidate;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)scrollView;
-(BOOL)visible;
-(void)tintColorDidChange;
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(UITextInteractionAssistant *)interactionAssistant;
-(void)deferredUpdateSelectionRects;
-(id)dynamicCaret;
-(UITextSelection *)selection;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(void)updateSelectionRects;
-(void)setVisible:(BOOL)arg1 ;
-(void)deactivate;
-(void)selectionChanged;
-(void)detach;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)activate;
-(id)dynamicCaretList;
-(NSArray *)replacements;
-(BOOL)caretBlinks;
-(void)updateDocumentHasContent:(BOOL)arg1 ;
-(void)startCaretBlinkIfNeeded;
-(void)layoutChangedByScrolling:(BOOL)arg1 ;
-(void)showSelectionCommands;
-(void)setForceRangeView:(BOOL)arg1 ;
-(void)configureForSelectionMode;
-(void)configureForHighlightMode;
-(CGPoint)floatingCursorPositionForPoint:(CGPoint)arg1 ;
-(void)inputModeDidChange:(id)arg1 ;
-(UITextRangeView *)rangeView;
-(BOOL)selectionCommandsShowing;
-(void)showSelectionCommandsAfterDelay:(double)arg1 ;
-(void)hideSelectionCommands;
-(void)cancelDelayedCommandRequests;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(void)updateSelectionDots;
-(id)initWithInteractionAssistant:(id)arg1 ;
-(void)installIfNecessary;
-(void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3 ;
-(CGRect)selectionBoundingBox;
-(void)didSuspend:(id)arg1 ;
-(void)wilLResume:(id)arg1 ;
-(void)textSelectionViewActivated:(id)arg1 ;
-(void)selectionWillScroll:(id)arg1 ;
-(void)selectionDidScroll:(id)arg1 ;
-(void)scaleWillChange:(id)arg1 ;
-(void)scaleDidChange:(id)arg1 ;
-(void)inputViewWillAnimate;
-(void)inputViewDidAnimate;
-(void)selectionWillTranslateForReachability:(id)arg1 ;
-(void)selectionDidTranslateForReachability:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)windowDidResignOrBecomeKey;
-(void)inputViewWillMove:(id)arg1 ;
-(void)inputViewDidMove;
-(void)viewAnimate:(id)arg1 ;
-(void)appearOrFadeIfNecessary;
-(void)deferredUpdateSelectionCommands;
-(BOOL)affectedByScrollerNotification:(id)arg1 ;
-(void)showCalloutBarAfterDelay:(double)arg1 ;
-(void)hideSelectionCommandsAfterDelay:(double)arg1 ;
-(void)inputViewWillChange;
-(void)inputViewDidChange;
-(BOOL)shouldBeVisible;
-(void)clearCaret;
-(void)clearCaretBlinkTimer;
-(void)clearRangeAnimated:(BOOL)arg1 ;
-(BOOL)forceRangeView;
-(UIView *)caretView;
-(void)showCaret:(int)arg1 ;
-(void)showInitialCaret;
-(void)touchCaretBlinkTimer;
-(id)caretViewColor;
-(void)updateSelectionRectsIfNeeded;
-(void)showCommandsWithReplacements:(id)arg1 ;
-(CGRect)clippedTargetRect:(CGRect)arg1 ;
-(BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 ;
-(void)setReplacements:(NSArray *)arg1 ;
-(void)calculateAndShowReplacements:(id)arg1 ;
-(void)hideCaret:(int)arg1 ;
-(void)caretBlinkTimerFired:(id)arg1 ;
-(void)animateBoxShrinkOn:(id)arg1 ;
-(void)animateExpanderOn:(id)arg1 ;
-(UIView *)floatingCaretView;
-(id)floatingCaretViewColor;
-(void)beginFloatingCaretView;
-(void)animatePulsingCaret:(id)arg1 ;
-(void)animateCaret:(id)arg1 toPosition:(CGPoint)arg2 withSize:(CGSize)arg3 ;
-(void)endFloatingCaretView;
-(void)updateSelectionCommands;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(void)configureForReplacementMode;
@end

