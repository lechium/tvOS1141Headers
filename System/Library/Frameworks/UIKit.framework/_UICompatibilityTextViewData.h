/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebFrame, DOMHTMLElement, UIDelayedAction, UITextInteractionAssistant, UIWebDocumentView, UIFont, UIColor, UIView;

@interface _UICompatibilityTextViewData : NSObject {

	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIDelayedAction* m_selectionTimer;
	UIDelayedAction* m_longPressAction;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_reentrancyGuard;
	BOOL m_readyForScroll;
	BOOL m_hasExplicitTextAlignment;
	BOOL m_hasExplicitLineHeight;
	BOOL m_shouldAutoscrollAboveBottom;
	UITextInteractionAssistant* m_interactionAssistant;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	long long m_textAlignment;
	UIView* m_inputView;
	UIView* m_inputAccessoryView;
	double m_lineHeight;
	BOOL m_skipScrollContainingView;
	BOOL m_allowsEditingTextAttributes;
	BOOL m_usesAttributedText;
	BOOL m_clearsOnInsertion;
	BOOL m_didFreezeTextContainerSize;

}
@end
