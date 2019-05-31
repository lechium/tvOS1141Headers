/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInput_Internal
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder*<UITextInput> __content; 
@property (nonatomic,readonly) UIView*<UITextInputPrivate> _textSelectingContainer; 
@optional
-(UIView*<UITextInputPrivate>)_textSelectingContainer;
-(CGRect*)_lastRectForRange:(id)arg1;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(void)_setInternalGestureRecognizers;

@required
-(CGRect*)_selectionClipRect;
-(id)_proxyTextInput;
-(NSRange*)_selectedNSRange;
-(int)_indexForTextPosition:(id)arg1;
-(NSRange*)_nsrangeForTextRange:(id)arg1;
-(id)_textRangeFromNSRange:(NSRange)arg1;
-(id)_fullText;
-(unsigned)_characterAfterCaretSelection;
-(unsigned)_characterBeforeCaretSelection;
-(unsigned)_characterInRelationToCaretSelection:(int)arg1;
-(unsigned)_characterInRelationToRangedSelection:(int)arg1;
-(unsigned)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
-(id)_wordContainingCaretSelection;
-(BOOL)_selectionAtWordStart;
-(BOOL)_selectionAtDocumentStart;
-(BOOL)_selectionAtDocumentEnd;
-(BOOL)_isEmptySelection;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_extendCurrentSelection:(int)arg1;
-(void)_moveCurrentSelection:(int)arg1;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
-(void)_setCaretSelectionAtEndOfSelection;
-(void)_replaceCurrentWordWithText:(id)arg1;
-(void)_replaceDocumentWithText:(id)arg1;
-(id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
-(id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
-(id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
-(id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
-(id)_rangeOfEnclosingWord:(id)arg1;
-(id)_rangeOfLineEnclosingPosition:(id)arg1;
-(id)_rangeOfSentenceEnclosingPosition:(id)arg1;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
-(id)_fullRange;
-(id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1;
-(BOOL)_range:(id)arg1 containsRange:(id)arg2;
-(BOOL)_range:(id)arg1 intersectsRange:(id)arg2;
-(id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_deleteBackwardAndNotify:(BOOL)arg1;
-(void)_deleteForwardAndNotify:(BOOL)arg1;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
-(id)_textColorForCaretSelection;
-(id)_fontForCaretSelection;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
-(id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(BOOL)arg4;
-(long long)_selectionAffinity;
-(void)_selectAll;
-(NSRange*)_selectedRangeWithinMarkedText;
-(BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(BOOL)arg3;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
-(void)_setGestureRecognizers;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(void)_unmarkText;
-(BOOL)_hasMarkedText;
-(id)_newPhraseBoundaryGestureRecognizer;
-(void)_phraseBoundaryGesture:(id)arg1;
-(BOOL)_usesAsynchronousProtocol;

@end
