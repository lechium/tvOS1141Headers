/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIKeyboardLayoutStar, UIView, UIKBKeyView, NSTimer;

@interface UIGestureKeyboardIntroduction : NSObject {

	UIKeyboardLayoutStar* m_layout;
	UIView* m_view;
	UIKBKeyView* m_firstKeyView;
	UIKBKeyView* m_secondKeyView;
	/*^block*/id m_completionBlock;
	double m_start;
	NSTimer* m_gestureKeyboardInfoTimer;
	CGPoint m_initPoint;
	BOOL m_isInTransition;
	BOOL m_hasPeeked;
	unsigned long long m_insertedTextLength;

}
-(void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2 ;
-(void)dismissGestureKeyboardIntroduction:(id)arg1 ;
-(void)playGestureKeyboardIntroduction:(id)arg1 ;
-(void)insertText:(id)arg1 forKey:(id)arg2 ;
-(id)initWithLayoutStar:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showGestureKeyboardIntroduction;
-(void)dismissGestureKeyboardIntroduction;
@end

