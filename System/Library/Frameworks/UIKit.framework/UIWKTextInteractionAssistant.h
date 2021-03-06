/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInteractionAssistant.h>
#import <UIKit/UIResponderStandardEditActions.h>

@class _UITextServiceSession, UITextChecker, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {

	long long _selectionOperation;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextChecker* _textChecker;
	unsigned long long _options;
	NSString* _wordBeforeTap;
	CGRect _caretBeforeTap;

}

@property (nonatomic,retain) NSString * wordBeforeTap;                                   //@synthesize wordBeforeTap=_wordBeforeTap - In the implementation block
@property (assign,nonatomic) CGRect caretBeforeTap;                                      //@synthesize caretBeforeTap=_caretBeforeTap - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapGesture; 
@property (nonatomic,readonly) UILongPressGestureRecognizer * loupeGesture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)selectionChanged;
-(void)selectAll:(id)arg1 ;
-(void)selectWord;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)shouldEnqueueObserverUpdates;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(void)scrollSelectionToVisible;
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)containerIsPlainStyleAtom;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)containerIsBrowserView;
-(BOOL)containerIsAtom;
-(Class)selectionClusterClass;
-(id)_asText;
-(Class)loupeClusterClass;
-(BOOL)requiresImmediateUpdate;
-(BOOL)containerAllowsSelection;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 withRange:(NSRange)arg2 fromRect:(CGRect)arg3 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)setWordBeforeTap:(NSString *)arg1 ;
-(void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)scheduleChineseTransliterationForText:(id)arg1 ;
-(void)scheduleReplacementsForText:(id)arg1 ;
-(void)showTextStyleOptions;
-(void)hideTextStyleOptions;
-(NSString *)wordBeforeTap;
-(CGRect)caretBeforeTap;
-(void)setCaretBeforeTap:(CGRect)arg1 ;
@end

