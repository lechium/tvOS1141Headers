/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebDocumentView.h>
#import <UIKit/UIWebTouchEventsGestureRecognizerDelegate.h>
#import <UIKit/UIWebFormAccessoryDelegate.h>
#import <UIKit/_UIWebRotationDelegate.h>

@protocol UIFormPeripheral, UIWebAutoFillDelegate;
@class UIWebFormAccessory, NSObject, DOMNode, UIWebTouchEventsGestureRecognizer, UIWebFormDelegate, UIResponder, NSMutableArray, NSHashTable, NSMutableSet, NSLock, NSMutableDictionary, NSString;

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate> {

	UIWebFormAccessory* _accessory;
	NSObject*<UIFormPeripheral> _input;
	DOMNode* _currentAssistedNode;
	DOMNode* _assistedNodeStartingFocusRedirects;
	CGRect _inputViewBounds;
	CGRect _addressViewBounds;
	double _lastAdjustmentForScroller;
	unsigned long long _audioSessionCategoryOverride;
	unsigned _accessoryEnabled : 1;
	unsigned _forceInputView : 1;
	unsigned _formIsAutoFilling : 1;
	unsigned _inputViewObeysDOMFocus : 1;
	unsigned _allowDOMFocusRedirects : 1;
	unsigned _hasEditedTextField : 1;
	unsigned _alwaysDispatchesScrollEvents : 1;
	unsigned _allowsPictureInPictureVideo : 1;
	unsigned _allowsLinkPreview : 1;
	UIWebTouchEventsGestureRecognizer* _webTouchEventsGestureRecognizer;
	UIWebFormDelegate* _formDelegate;
	UIResponder* _editingDelegateForEverythingExceptForms;
	unsigned long long _dispatchedTouchEvents;
	NSMutableArray* _deferredTouchEvents;
	NSHashTable* _activeHighlighters;
	NSMutableSet* _overflowScrollViewsPendingInsertion;
	NSMutableSet* _overflowScrollViewsPendingDeletion;
	NSMutableSet* _overflowScrollViews;
	NSLock* _pendingOverflowDataLock;
	NSMutableArray* _pendingOverflowScrolls;
	BOOL _pendingGeometryChangeAfterOverflowScroll;
	NSMutableDictionary* _focusPreservingTokens;
	SCD_Struct_UI90 _messages;
	SCD_Struct_UI91 _pdf;
	id<UIWebAutoFillDelegate> _autoFillDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWebFormAccessory * _accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSObject*<UIFormPeripheral> _input;                                  //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) DOMNode * _currentAssistedNode;                                      //@synthesize currentAssistedNode=_currentAssistedNode - In the implementation block
@property (assign,getter=isAccessoryEnabled,nonatomic) BOOL accessoryEnabled;                     //@synthesize accessoryEnabled=_accessoryEnabled - In the implementation block
@property (assign,nonatomic) BOOL inputViewObeysDOMFocus;                                         //@synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus - In the implementation block
@property (assign,nonatomic) BOOL allowDOMFocusRedirects;                                         //@synthesize allowDOMFocusRedirects=_allowDOMFocusRedirects - In the implementation block
@property (nonatomic,readonly) BOOL hasEditedTextField;                                           //@synthesize hasEditedTextField=_hasEditedTextField - In the implementation block
@property (assign,nonatomic) UIResponder * _editingDelegateForEverythingExceptForms;              //@synthesize editingDelegateForEverythingExceptForms=_editingDelegateForEverythingExceptForms - In the implementation block
@property (assign,nonatomic) BOOL allowsInlineMediaPlayback; 
@property (assign,nonatomic) BOOL mediaPlaybackRequiresUserAction; 
@property (nonatomic,readonly) BOOL isDispatchingTouchEvents; 
@property (assign,nonatomic) BOOL alwaysDispatchesScrollEvents; 
@property (assign,nonatomic) id<UIWebAutoFillDelegate> autoFillDelegate;                          //@synthesize autoFillDelegate=_autoFillDelegate - In the implementation block
@property (assign,nonatomic) unsigned audioSessionCategoryOverride; 
@property (assign,nonatomic) NSString * networkInterfaceName; 
@property (assign,nonatomic) BOOL allowsPictureInPictureVideo; 
@property (assign,nonatomic) BOOL allowsLinkPreview; 
+(void)initialize;
+(id)getUIWebBrowserViewForWebFrame:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)keyCommands;
-(BOOL)isEditable;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(void)_didScroll;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)_editingDelegate;
-(id)inputAccessoryView;
-(id)_keyboardResponder;
-(void)copy:(id)arg1 ;
-(BOOL)_requiresKeyboardResetOnReload;
-(id)inputView;
-(NSObject*<UIFormPeripheral>)_input;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(void)acceptedAutoFillWord:(id)arg1 ;
-(BOOL)isAutoFillMode;
-(id)initWithWebView:(id)arg1 frame:(CGRect)arg2 ;
-(void)installGestureRecognizers;
-(void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
-(void)_updateFixedPositioningObjectsLayoutDuringScroll;
-(void)_resetFormDataForFrame:(id)arg1 ;
-(void)_clearAllConsoleMessages;
-(void)_updateFixedPositioningObjectsLayoutAfterScroll;
-(void)_updateFixedPositionContent;
-(id)formElement;
-(id)_collectAdditionalSubviews;
-(void)_preserveFocusWithToken:(id)arg1 destructively:(BOOL)arg2 ;
-(BOOL)_restoreFocusWithToken:(id)arg1 ;
-(void)_clearToken:(id)arg1 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 willCloseFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg1 ;
-(void)redrawScaledDocument;
-(void)assistFormNode:(id)arg1 ;
-(id)textFormElement;
-(BOOL)playsNicelyWithGestures;
-(id)textDocument;
-(BOOL)allowsLinkPreview;
-(void)_beginAllowingFocusRedirects;
-(void)_endAllowingFocusRedirects;
-(void)webViewDidPreventDefaultForEvent:(id)arg1 ;
-(BOOL)shouldIgnoreWebTouch;
-(BOOL)isAnyTouchOverActiveArea:(id)arg1 ;
-(BOOL)isDispatchingTouchEvents;
-(BOOL)inputViewObeysDOMFocus;
-(void)setInputViewObeysDOMFocus:(BOOL)arg1 ;
-(void)_setUnobscuredSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)set_editingDelegateForEverythingExceptForms:(UIResponder *)arg1 ;
-(void)_startURLificationIfNeededCoalesce:(BOOL)arg1 ;
-(void)setAllowsInlineMediaPlayback:(BOOL)arg1 ;
-(BOOL)allowsInlineMediaPlayback;
-(void)setMediaPlaybackRequiresUserAction:(BOOL)arg1 ;
-(BOOL)mediaPlaybackRequiresUserAction;
-(void)setAllowsPictureInPictureVideo:(BOOL)arg1 ;
-(BOOL)allowsPictureInPictureVideo;
-(void)setAllowsLinkPreview:(BOOL)arg1 ;
-(void)rotateEnclosingScrollViewToFrame:(CGRect)arg1 ;
-(void)_updateScrollerViewForInputView:(id)arg1 ;
-(DOMNode *)_currentAssistedNode;
-(void)setAlwaysDispatchesScrollEvents:(BOOL)arg1 ;
-(BOOL)alwaysDispatchesScrollEvents;
-(void)setAudioSessionCategoryOverride:(unsigned)arg1 ;
-(unsigned)audioSessionCategoryOverride;
-(void)setNetworkInterfaceName:(NSString *)arg1 ;
-(NSString *)networkInterfaceName;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)accessoryDone;
-(id<UIWebAutoFillDelegate>)autoFillDelegate;
-(void)formDelegateTextDidChange;
-(void)_webViewFormEditedStatusHasChanged:(id)arg1 ;
-(BOOL)_isAutoFilling;
-(BOOL)_hasSubviewContainingWebContent:(id)arg1 ;
-(void)accessoryTab:(BOOL)arg1 ;
-(void)accessoryAutoFill;
-(void)accessoryClear;
-(void)_startAssistingKeyboard;
-(void)_stopAssistingKeyboard;
-(void)_startAssistingNode:(id)arg1 ;
-(void)_stopAssistingNode:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_clearFormAutoFillStateForFrame:(id)arg1 ;
-(void)set_accessory:(UIWebFormAccessory *)arg1 ;
-(void)set_input:(NSObject*<UIFormPeripheral>)arg1 ;
-(void)set_currentAssistedNode:(DOMNode *)arg1 ;
-(void)_webTouchEventsRecognized:(id)arg1 ;
-(BOOL)allowDOMFocusRedirects;
-(BOOL)_keepKeyboardVisibleDuringFocusRedirects;
-(void)_stopAssistingFormNode;
-(void)_nextAccessoryTab:(id)arg1 ;
-(void)_prevAccessoryTab:(id)arg1 ;
-(void)_displayFormNodeInputView;
-(UIResponder *)_editingDelegateForEverythingExceptForms;
-(void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(void)_updateFixedPositioningObjectsLayoutSoon;
-(void)_zoomToNode:(id)arg1 forceScroll:(BOOL)arg2 ;
-(void)_updateAccessory;
-(void)_updateAutoFillButton;
-(void)setAllowDOMFocusRedirects:(BOOL)arg1 ;
-(void)_reloadInputViewsAfterPotentialFocusRedirect;
-(void)_scrollCaretToVisible:(id)arg1 ;
-(void)_autoFillFrame:(id)arg1 ;
-(void)_assistFormNode:(id)arg1 ;
-(void)_startDeferringEvents;
-(void)_dispatchWebEvent:(id)arg1 ;
-(void)_endDeferringEvents;
-(BOOL)_shouldDeferEvents;
-(void)_deferWebEvent:(id)arg1 ;
-(void)_handleDeferredEvents;
-(CGRect)_activeRectForRectToCenter:(CGRect)arg1 ;
-(void)_centerRect:(CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 toValue:(double)arg5 ;
-(void)_zoomToRect:(CGRect)arg1 ensuringVisibilityOfRect:(CGRect)arg2 withScale:(double)arg3 forceScroll:(BOOL)arg4 ;
-(void)_zoomToRect:(CGRect)arg1 ensuringVisibilityOfRect:(CGRect)arg2 withScale:(double)arg3 forceScroll:(BOOL)arg4 formAssistantFrame:(CGRect)arg5 animationDuration:(double)arg6 ;
-(void)clearMessagesMatchingMask:(int)arg1 ;
-(CGSize)_defaultScrollViewContentSize;
-(void)_noteOverflowScrollViewPendingInsertion:(id)arg1 ;
-(void)_noteOverflowScrollViewPendingDeletion:(id)arg1 ;
-(void)_removeAdditionalSubview:(id)arg1 ;
-(BOOL)appendOverflowScrollForNode:(id)arg1 offset:(CGPoint)arg2 whileScrolling:(BOOL)arg3 ;
-(void)_webThreadOverflowScrollOffsetChanged;
-(void)_addAdditionalSubview:(id)arg1 ;
-(SCD_Struct_UI33)scalesForContainerSize:(CGSize)arg1 ;
-(void)updateBoundariesOfScrollView:(id)arg1 withScales:(SCD_Struct_UI33)arg2 ;
-(CGRect)rectOfInterestForRotation;
-(double)minimumVerticalContentOffset;
-(double)heightToKeepVisible;
-(CGRect)activeRectForRectOfInterest:(CGRect)arg1 ;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(double)scaleForProposedNewScale:(double)arg1 andOldScale:(double)arg2 ;
-(CGSize)contentSizeForScrollView:(id)arg1 ;
-(void)simulateDidScroll;
-(void)webView:(id)arg1 elementDidFocusNode:(id)arg2 ;
-(void)webView:(id)arg1 elementDidBlurNode:(id)arg2 ;
-(CGPoint)_convertWindowPointToViewport:(CGPoint)arg1 ;
-(void)_centerRect:(CGRect)arg1 forSizeChange:(BOOL)arg2 withVisibleHeight:(double)arg3 pinningEdge:(unsigned long long)arg4 ;
-(void)_zoomToRect:(CGRect)arg1 withScale:(double)arg2 ;
-(void)webView:(id)arg1 addMessageToConsole:(id)arg2 withSource:(id)arg3 ;
-(id)messagesMatchingMask:(int)arg1 ;
-(BOOL)_dumpWebArchiveAtPath:(id)arg1 ;
-(void)_clearSelectionAndUI;
-(void)_setSelectedDOMRangeAndUpdateUI:(id)arg1 ;
-(id)_absoluteUrlRelativeToDocumentURL:(id)arg1 ;
-(id)addFindOnPageHighlighter;
-(void)_removeFindOnPageHighlighter:(id)arg1 ;
-(void)webView:(id)arg1 didCreateOrUpdateScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 scrollSize:(id)arg4 forNode:(id)arg5 allowHorizontalScrollbar:(BOOL)arg6 allowVerticalScrollbar:(BOOL)arg7 ;
-(void)webView:(id)arg1 willRemoveScrollingLayer:(id)arg2 withContentsLayer:(id)arg3 forNode:(id)arg4 ;
-(void)_overflowScrollView:(id)arg1 willStartScrollingForNode:(id)arg2 ;
-(void)_overflowScrollView:(id)arg1 scrollOffsetChangedForNode:(id)arg2 whileScrolling:(BOOL)arg3 ;
-(void)_overflowScrollView:(id)arg1 didEndScrollingForNode:(id)arg2 ;
-(UIWebFormAccessory *)_accessory;
-(BOOL)isAccessoryEnabled;
-(void)setAccessoryEnabled:(BOOL)arg1 ;
-(BOOL)hasEditedTextField;
-(void)setAutoFillDelegate:(id<UIWebAutoFillDelegate>)arg1 ;
@end

