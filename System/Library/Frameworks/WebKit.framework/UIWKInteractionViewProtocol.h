/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIWKInteractionViewProtocol
@optional
-(id)selectedText;
-(BOOL)pointIsInAssistedNode:(CGPoint)arg1;
-(void)changeSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3 withFlags:(long long)arg4;
-(void)changeBlockSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 forHandle:(long long)arg3;
-(void)clearSelection;
-(void)replaceDictatedText:(id)arg1 withText:(id)arg2;
-(void)requestDictationContext:(/*^block*/id)arg1;
-(BOOL)pointIsNearMarkedText:(CGPoint)arg1;
-(void)replaceText:(id)arg1 withText:(id)arg2;
-(void)selectWordForReplacement;
-(BOOL)isReplaceAllowed;
-(void)selectWordBackward;
-(id)unscaledView;
-(double)inverseScale;
-(CGRect*)unobscuredContentRect;
-(void)moveByOffset:(long long)arg1;
-(void)selectPositionAtPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4;
-(void)beginSelectionInDirection:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(BOOL)hasMarkedText;
-(void)changeSelectionWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
-(void)changeSelectionWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3;
-(void)changeSelectionWithTouchesFrom:(CGPoint)arg1 to:(CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
-(CGRect*)textFirstRect;
-(CGRect*)textLastRect;
-(void)requestAutocorrectionContextWithCompletionHandler:(/*^block*/id)arg1;
-(void)requestAutocorrectionRectsForString:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(/*^block*/id)arg3;
-(id)markedText;
-(BOOL)hasSelectablePositionAtPoint:(CGPoint)arg1;
-(BOOL)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(CGPoint)arg2;
-(id)webSelectionRects;
-(void)_cancelLongPressGestureRecognizer;

@end

