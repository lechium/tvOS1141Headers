/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class WKBrowsingContextHandle, NSURL, NSArray, NSString, NSData, _WKSessionState, UIView, _WKWebViewPrintFormatter, NSNumber, WKPasswordView, WKWebViewContentProviderRegistry, WKWebViewConfiguration, WKBackForwardList, UIScrollView;

@interface WKWebView : UIView <UIScrollViewDelegate> {

	RetainPtr<WKWebViewConfiguration>* _configuration;
	RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> >* _page;
	unsigned long long _activeFocusedStateRetainCount;
	unique_ptr<WebKit::NavigationState, std::__1::default_delete<WebKit::NavigationState> >* _navigationState;
	unique_ptr<WebKit::UIDelegate, std::__1::default_delete<WebKit::UIDelegate> >* _uiDelegate;
	unique_ptr<WebKit::IconLoadingDelegate, std::__1::default_delete<WebKit::IconLoadingDelegate> >* _iconLoadingDelegate;
	unsigned long long _observedRenderingProgressEvents;
	WeakObjCPtr<id<_WKInputDelegate> > _inputDelegate;
	RetainPtr<_WKRemoteObjectRegistry>* _remoteObjectRegistry;
	RetainPtr<WKScrollView>* _scrollView;
	RetainPtr<WKContentView>* _contentView;
	BOOL _overridesMinimumLayoutSize;
	CGSize _minimumLayoutSizeOverride;
	optional<WebCore::FloatSize> _lastSentMinimumLayoutSize;
	BOOL _overridesMaximumUnobscuredSize;
	CGSize _maximumUnobscuredSizeOverride;
	optional<WebCore::FloatSize> _lastSentMaximumUnobscuredSize;
	CGRect _inputViewBounds;
	double _viewportMetaTagWidth;
	BOOL _viewportMetaTagWidthWasExplicit;
	BOOL _viewportMetaTagCameFromImageDocument;
	double _initialScaleFactor;
	BOOL _fastClickingIsDisabled;
	BOOL _allowsLinkPreview;
	UIEdgeInsets _obscuredInsets;
	BOOL _haveSetObscuredInsets;
	BOOL _isChangingObscuredInsetsInteractively;
	UIEdgeInsets _unobscuredSafeAreaInsets;
	BOOL _haveSetUnobscuredSafeAreaInsets;
	BOOL _avoidsUnsafeArea;
	unsigned long long _obscuredInsetEdgesAffectedBySafeArea;
	long long _interfaceOrientationOverride;
	BOOL _overridesInterfaceOrientation;
	optional<int> _lastSentDeviceOrientation;
	BOOL _allowsViewportShrinkToFit;
	BOOL _hasCommittedLoadForMainFrame;
	BOOL _needsResetViewStateAfterCommitLoadForMainFrame;
	unsigned long long _firstPaintAfterCommitLoadTransactionID;
	int _dynamicViewportUpdateMode;
	CATransform3D _resizeAnimationTransformAdjustments;
	optional<unsigned long long> _resizeAnimationTransformTransactionID;
	RetainPtr<UIView>* _resizeAnimationView;
	double _lastAdjustmentForScroller;
	optional<CGRect> _frozenVisibleContentRect;
	optional<CGRect> _frozenUnobscuredContentRect;
	BOOL _commitDidRestoreScrollPosition;
	optional<WebCore::FloatPoint> _scrollOffsetToRestore;
	RectEdges<float> _obscuredInsetsWhenSaved;
	optional<WebCore::FloatPoint> _unobscuredCenterToRestore;
	optional<unsigned long long> _firstTransactionIDAfterPageRestore;
	double _scaleToRestore;
	unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> >* _gestureController;
	BOOL _allowsBackForwardNavigationGestures;
	RetainPtr<UIView<WKWebViewContentProvider> >* _customContentView;
	RetainPtr<UIView>* _customContentFixedOverlayView;
	RetainPtr<NSTimer>* _enclosingScrollViewScrollTimer;
	BOOL _didScrollSinceLastTimerFire;
	Color* _scrollViewBackgroundColor;
	double _totalScrollViewBottomInsetAdjustmentForKeyboard;
	BOOL _currentlyAdjustingScrollViewInsetsForKeyboard;
	BOOL _delayUpdateVisibleContentRects;
	BOOL _hadDelayedUpdateVisibleContentRects;
	int _activeAnimatedResizeCount;
	Vector<WTF::Function<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _snapshotsDeferredDuringResize;
	RetainPtr<NSMutableArray>* _stableStatePresentationUpdateCallbacks;
	RetainPtr<WKPasswordView>* _passwordView;
	BOOL _hasScheduledVisibleRectUpdate;
	BOOL _visibleContentRectUpdateScheduledFromScrollViewInStableState;
	Vector<WTF::BlockPtr<void ()>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _visibleContentRectUpdateCallbacks;
	unsigned long long _dragInteractionPolicy;

}

@property (nonatomic,readonly) id _remoteObjectRegistry; 
@property (nonatomic,readonly) WKBrowsingContextHandle * _handle; 
@property (assign,setter=_setObservedRenderingProgressEvents:,nonatomic) unsigned long long _observedRenderingProgressEvents; 
@property (assign,setter=_setHistoryDelegate:,nonatomic,__weak) id<WKHistoryDelegatePrivate> _historyDelegate; 
@property (assign,setter=_setIconLoadingDelegate:,nonatomic,__weak) id<_WKIconLoadingDelegate> _iconLoadingDelegate; 
@property (nonatomic,readonly) NSURL * _unreachableURL; 
@property (nonatomic,readonly) NSArray * _certificateChain; 
@property (nonatomic,readonly) NSURL * _committedURL; 
@property (nonatomic,readonly) NSString * _MIMEType; 
@property (nonatomic,readonly) NSString * _userAgent; 
@property (getter=_isPlayingAudio,nonatomic,readonly) BOOL _playingAudio; 
@property (setter=_setApplicationNameForUserAgent:,copy) NSString * _applicationNameForUserAgent; 
@property (setter=_setCustomUserAgent:,copy) NSString * _customUserAgent; 
@property (assign,setter=_setUserContentExtensionsEnabled:,nonatomic) BOOL _userContentExtensionsEnabled; 
@property (nonatomic,readonly) int _webProcessIdentifier; 
@property (assign,setter=_setEditable:,getter=_isEditable,nonatomic) BOOL _editable; 
@property (nonatomic,readonly) NSData * _sessionStateData; 
@property (nonatomic,readonly) _WKSessionState * _sessionState; 
@property (assign,setter=_setAllowsRemoteInspection:,nonatomic) BOOL _allowsRemoteInspection; 
@property (setter=_setRemoteInspectionNameOverride:,nonatomic,copy) NSString * _remoteInspectionNameOverride; 
@property (assign,setter=_setAddsVisitedLinks:,nonatomic) BOOL _addsVisitedLinks; 
@property (nonatomic,readonly) BOOL _networkRequestsInProgress; 
@property (getter=_isShowingNavigationGestureSnapshot,nonatomic,readonly) BOOL _showingNavigationGestureSnapshot; 
@property (assign,setter=_setLayoutMode:,nonatomic) unsigned long long _layoutMode; 
@property (assign,setter=_setFixedLayoutSize:,nonatomic) CGSize _fixedLayoutSize; 
@property (assign,setter=_setViewportSizeForCSSViewportUnits:,nonatomic) CGSize _viewportSizeForCSSViewportUnits; 
@property (assign,setter=_setViewScale:,nonatomic) double _viewScale; 
@property (assign,setter=_setBackgroundExtendsBeyondPage:,nonatomic) BOOL _backgroundExtendsBeyondPage; 
@property (nonatomic,readonly) CGSize _minimumLayoutSizeOverride; 
@property (nonatomic,readonly) CGSize _maximumUnobscuredSizeOverride; 
@property (assign,setter=_setObscuredInsets:,nonatomic) UIEdgeInsets _obscuredInsets; 
@property (assign,setter=_setUnobscuredSafeAreaInsets:,nonatomic) UIEdgeInsets _unobscuredSafeAreaInsets; 
@property (nonatomic,readonly) BOOL _safeAreaShouldAffectObscuredInsets; 
@property (assign,setter=_setObscuredInsetEdgesAffectedBySafeArea:,nonatomic) unsigned long long _obscuredInsetEdgesAffectedBySafeArea; 
@property (nonatomic,readonly) UIView * _enclosingViewForExposedRectComputation; 
@property (assign,setter=_setInterfaceOrientationOverride:,nonatomic) long long _interfaceOrientationOverride; 
@property (assign,setter=_setAllowsViewportShrinkToFit:,nonatomic) BOOL _allowsViewportShrinkToFit; 
@property (getter=_isDisplayingPDF,nonatomic,readonly) BOOL _displayingPDF; 
@property (nonatomic,readonly) NSData * _dataForDisplayedPDF; 
@property (nonatomic,readonly) NSString * _suggestedFilenameForDisplayedPDF; 
@property (nonatomic,readonly) _WKWebViewPrintFormatter * _webViewPrintFormatter; 
@property (assign,setter=_setDragInteractionPolicy:,nonatomic) unsigned long long _dragInteractionPolicy; 
@property (assign,setter=_setPaginationMode:,nonatomic) long long _paginationMode; 
@property (assign,setter=_setPaginationBehavesLikeColumns:,nonatomic) BOOL _paginationBehavesLikeColumns; 
@property (assign,setter=_setPageLength:,nonatomic) double _pageLength; 
@property (assign,setter=_setGapBetweenPages:,nonatomic) double _gapBetweenPages; 
@property (assign,setter=_setPaginationLineGridEnabled:,nonatomic) BOOL _paginationLineGridEnabled; 
@property (readonly) unsigned long long _pageCount; 
@property (nonatomic,readonly) BOOL _supportsTextZoom; 
@property (assign,setter=_setTextZoomFactor:,nonatomic) double _textZoomFactor; 
@property (assign,setter=_setPageZoomFactor:,nonatomic) double _pageZoomFactor; 
@property (assign,setter=_setDiagnosticLoggingDelegate:,nonatomic,__weak) id<_WKDiagnosticLoggingDelegate> _diagnosticLoggingDelegate; 
@property (assign,setter=_setFindDelegate:,nonatomic,__weak) id<_WKFindDelegate> _findDelegate; 
@property (assign,setter=_setInputDelegate:,nonatomic,__weak) id<_WKInputDelegate> _inputDelegate; 
@property (getter=_isDisplayingStandaloneImageDocument,nonatomic,readonly) BOOL _displayingStandaloneImageDocument; 
@property (getter=_isDisplayingStandaloneMediaDocument,nonatomic,readonly) BOOL _displayingStandaloneMediaDocument; 
@property (assign,setter=_setScrollPerformanceDataCollectionEnabled:,nonatomic) BOOL _scrollPerformanceDataCollectionEnabled; 
@property (nonatomic,readonly) NSArray * _scrollPerformanceData; 
@property (assign,setter=_setAllowsMediaDocumentInlinePlayback:,getter=_allowsMediaDocumentInlinePlayback,nonatomic) BOOL _allowsMediaDocumentInlinePlayback; 
@property (nonatomic,readonly) BOOL _webProcessIsResponsive; 
@property (assign,setter=_setFullscreenDelegate:,nonatomic) id<_WKFullscreenDelegate> _fullscreenDelegate; 
@property (nonatomic,readonly) BOOL _isInFullscreen; 
@property (assign,setter=_setMediaCaptureEnabled:,nonatomic) BOOL _mediaCaptureEnabled; 
@property (nonatomic,readonly) CGRect _contentVisibleRect; 
@property (nonatomic,readonly) NSArray * _uiTextSelectionRects; 
@property (nonatomic,readonly) CGRect _uiTextCaretRect; 
@property (nonatomic,readonly) CGRect _inputViewBounds; 
@property (nonatomic,readonly) NSString * _scrollingTreeAsText; 
@property (nonatomic,readonly) NSNumber * _stableStateOverride; 
@property (nonatomic,readonly) CGRect _dragCaretRect; 
@property (nonatomic,readonly) id<_WKWebViewPrintProvider> _printProvider; 
@property (nonatomic,copy,readonly) NSArray * certificateChain; 
@property (nonatomic,readonly) WKPasswordView * _passwordView; 
@property (nonatomic,readonly) BOOL _isBackground; 
@property (nonatomic,readonly) WKWebViewContentProviderRegistry * _contentProviderRegistry; 
@property (nonatomic,readonly) long long _selectionGranularity; 
@property (nonatomic,readonly) BOOL _allowsDoubleTapGestures; 
@property (nonatomic,readonly) UIEdgeInsets _computedContentInset; 
@property (nonatomic,readonly) UIEdgeInsets _computedUnobscuredSafeAreaInset; 
@property (nonatomic,copy,readonly) WKWebViewConfiguration * configuration; 
@property (assign,nonatomic,__weak) id<WKNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<WKUIDelegate> UIDelegate; 
@property (nonatomic,readonly) WKBackForwardList * backForwardList; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,readonly) SecTrustRef serverTrust; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (assign,nonatomic) BOOL allowsBackForwardNavigationGestures; 
@property (nonatomic,copy) NSString * customUserAgent; 
@property (assign,nonatomic) BOOL allowsLinkPreview; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)handlesURLScheme:(id)arg1 ;
-(BOOL)_isEditable;
-(void)_close;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)reload;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(NSString *)title;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(UIScrollView *)scrollView;
-(NSURL *)URL;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)_didScroll;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)_scrollViewDidInterruptDecelerating:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)select:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(unsigned long long)_pageCount;
-(void)_setFixedLayoutSize:(CGSize)arg1 ;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(void)replace:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(CGSize)_fixedLayoutSize;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(Class)_printFormatterClass;
-(void)applyAutocorrection:(id)arg1 toString:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)loadRequest:(id)arg1 ;
-(id)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(WKBackForwardList *)backForwardList;
-(WKWebViewConfiguration *)configuration;
-(id)_formDelegate;
-(BOOL)allowsLinkPreview;
-(BOOL)isLoading;
-(void)_updateScrollViewInsetAdjustmentBehavior;
-(void)_setUnobscuredSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(void)setUIDelegate:(id<WKUIDelegate>)arg1 ;
-(void)setAllowsLinkPreview:(BOOL)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)_frameOrBoundsChanged;
-(long long)_paginationMode;
-(void)_setPaginationMode:(long long)arg1 ;
-(BOOL)_paginationBehavesLikeColumns;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(double)_pageLength;
-(void)_setPageLength:(double)arg1 ;
-(double)_gapBetweenPages;
-(void)_setGapBetweenPages:(double)arg1 ;
-(void)stopLoading;
-(id)goBack;
-(id)goForward;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(void)_lookup:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_setFormDelegate:(id)arg1 ;
-(double)estimatedProgress;
-(void)_windowDidRotate:(id)arg1 ;
-(id<WKNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<WKNavigationDelegate>)arg1 ;
-(id)_remoteObjectRegistry;
-(_WKSessionState *)_sessionState;
-(id<_WKWebViewPrintProvider>)_printProvider;
-(BOOL)_isPlayingAudio;
-(void)_didInsertAttachment:(id)arg1 ;
-(void)_didRemoveAttachment:(id)arg1 ;
-(void)_scrollToContentScrollPosition:(FloatPoint)arg1 scrollOrigin:(IntPoint)arg2 ;
-(BOOL)_isBackground;
-(BOOL)_isShowingVideoPictureInPicture;
-(BOOL)_mayAutomaticallyShowVideoPictureInPicture;
-(void)_processDidExit;
-(void)_hidePasswordView;
-(void)_setHasCustomContentView:(BOOL)arg1 loadedMIMEType:(const String*)arg2 ;
-(void)_didCommitLoadForMainFrame;
-(RefPtr<WebKit::ViewSnapshot, WTF::DumbPtrTraits<WebKit::ViewSnapshot> >*)_takeViewSnapshot;
-(void)_didCommitLayerTree:(const RemoteLayerTreeTransaction*)arg1 ;
-(void)_layerTreeCommitComplete;
-(void)_dynamicViewportUpdateChangedTargetToScale:(double)arg1 position:(CGPoint)arg2 nextValidLayerTreeTransactionID:(unsigned long long)arg3 ;
-(void)_couldNotRestorePageState;
-(void)_restorePageScrollPosition:(optional<WebCore::FloatPoint>)arg1 scrollOrigin:(FloatPoint)arg2 previousObscuredInset:(RectEdges<float>)arg3 scale:(double)arg4 ;
-(void)_restorePageStateToUnobscuredCenter:(optional<WebCore::FloatPoint>)arg1 scale:(double)arg2 ;
-(void)_didFinishLoadingDataForCustomContentProviderWithSuggestedFilename:(const String*)arg1 data:(id)arg2 ;
-(WKWebViewContentProviderRegistry *)_contentProviderRegistry;
-(void)_navigationGestureDidBegin;
-(void)_navigationGestureDidEnd;
-(void)_didFinishLoadForMainFrame;
-(void)_didFailLoadForMainFrame;
-(void)_didSameDocumentNavigationForMainFrame:(int)arg1 ;
-(void)_updateScrollViewBackground;
-(BOOL)_zoomToRect:(FloatRect)arg1 withOrigin:(FloatPoint)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 minimumScrollDistance:(float)arg6 ;
-(id)reloadFromOrigin;
-(NSString *)customUserAgent;
-(id)goToBackForwardListItem:(id)arg1 ;
-(BOOL)hasOnlySecureContent;
-(NSArray *)certificateChain;
-(id<WKHistoryDelegatePrivate>)_historyDelegate;
-(WebPageProxy*)_page;
-(BOOL)_webProcessIsResponsive;
-(BOOL)_allowsViewportShrinkToFit;
-(void)_scheduleVisibleContentRectUpdate;
-(BOOL)_scrollToRect:(FloatRect)arg1 origin:(FloatPoint)arg2 minimumScrollDistance:(float)arg3 ;
-(void)_zoomToFocusRect:(FloatRect)arg1 selectionRect:(FloatRect)arg2 insideFixed:(BOOL)arg3 fontSize:(float)arg4 minimumScale:(double)arg5 maximumScale:(double)arg6 allowScaling:(BOOL)arg7 forceScroll:(BOOL)arg8 ;
-(void)_zoomOutWithOrigin:(FloatPoint)arg1 animated:(BOOL)arg2 ;
-(void)_zoomToInitialScaleWithOrigin:(FloatPoint)arg1 animated:(BOOL)arg2 ;
-(id)browsingContextController;
-(id<_WKInputDelegate>)_inputDelegate;
-(long long)_selectionGranularity;
-(BOOL)_isNavigationSwipeGestureRecognizer:(id)arg1 ;
-(id<WKUIDelegate>)UIDelegate;
-(BOOL)_allowsDoubleTapGestures;
-(void)_arrowKey:(id)arg1 ;
-(void)_reanalyze:(id)arg1 ;
-(void)_accessibilityRetrieveRectsAtSelectionOffset:(long long)arg1 withText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_scrollByContentOffset:(FloatPoint)arg1 ;
-(void)didStartFormControlInteraction;
-(void)didEndFormControlInteraction;
-(void)_didChangeEditorState;
-(NSArray *)_uiTextSelectionRects;
-(void)_accessibilityStoreSelection;
-(void)_accessibilityClearSelection;
-(void)_becomeFirstResponderWithSelectionMovingForward:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_simulateLongPressActionAtLocation:(CGPoint)arg1 ;
-(void)selectFormAccessoryPickerRow:(int)arg1 ;
-(id)_contentsOfUserInterfaceItem:(id)arg1 ;
-(void)_accessibilityDidGetSpeakSelectionContent:(id)arg1 ;
-(WKPasswordView *)_passwordView;
-(UIEdgeInsets)_computedUnobscuredSafeAreaInset;
-(UIEdgeInsets)_computedContentInset;
-(void)_showPasswordViewWithDocumentName:(id)arg1 passwordHandler:(/*^block*/id)arg2 ;
-(void)_willInvokeUIScrollViewDelegateCallback;
-(void)_didInvokeUIScrollViewDelegateCallback;
-(NSArray *)_certificateChain;
-(void)_dispatchSetDeviceOrientation:(int)arg1 ;
-(id)_contentSizeCategory;
-(void)_accessibilitySettingsDidChange:(id)arg1 ;
-(void)_setUpSQLiteDatabaseTrackerClient;
-(void)_initializeWithConfiguration:(id)arg1 ;
-(void)setAllowsBackForwardNavigationGestures:(BOOL)arg1 ;
-(BOOL)allowsBackForwardNavigationGestures;
-(id)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)_evaluateJavaScript:(id)arg1 forceUserGesture:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_snapshotRect:(CGRect)arg1 intoImageOfWidth:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isDisplayingPDF;
-(id)_currentContentView;
-(BOOL)usesStandardContentView;
-(CGPoint)_adjustedContentOffset:(CGPoint)arg1 ;
-(void)_setAvoidsUnsafeArea:(BOOL)arg1 ;
-(void)_endAnimatedResize;
-(FloatRect)visibleRectInViewCoordinates;
-(CGRect)_contentRectForUserInteraction;
-(void)_zoomToPoint:(FloatPoint)arg1 atScale:(double)arg2 animated:(BOOL)arg3 ;
-(double)_targetContentZoomScaleForRect:(const FloatRect*)arg1 currentScale:(double)arg2 fitEntireRect:(BOOL)arg3 minimumScale:(double)arg4 maximumScale:(double)arg5 ;
-(void)_zoomToRect:(FloatRect)arg1 atScale:(double)arg2 origin:(FloatPoint)arg3 animated:(BOOL)arg4 ;
-(void)_didFinishScrolling;
-(void)_scheduleVisibleContentRectUpdateAfterScrollInView:(id)arg1 ;
-(UIView *)_enclosingViewForExposedRectComputation;
-(CGRect)_visibleRectInEnclosingView:(id)arg1 ;
-(void)_enclosingScrollerScrollingEnded:(id)arg1 ;
-(void)_dispatchSetMinimumLayoutSize:(FloatSize)arg1 ;
-(void)_dispatchSetMaximumUnobscuredSize:(FloatSize)arg1 ;
-(BOOL)_scrollViewIsRubberBanding;
-(NSNumber *)_stableStateOverride;
-(BOOL)_scrollViewIsInStableState:(id)arg1 ;
-(CGRect)_visibleContentRect;
-(CGRect)_contentBoundsExtendedForRubberbandingWithScale:(double)arg1 ;
-(BOOL)_shouldUpdateKeyboardWithInfo:(id)arg1 ;
-(void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2 ;
-(BOOL)_isValid;
-(id<_WKIconLoadingDelegate>)_iconLoadingDelegate;
-(void)_setIconLoadingDelegate:(id)arg1 ;
-(id)loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)takeSnapshotWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(OpaqueWKPageRef)_pageForTesting;
-(CGSize)_viewportSizeForCSSViewportUnits;
-(void)_setViewportSizeForCSSViewportUnits:(CGSize)arg1 ;
-(unsigned long long)_dragInteractionPolicy;
-(void)_setDragInteractionPolicy:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveObscuredInsetEdgesAffectedBySafeArea;
-(UIEdgeInsets)_scrollViewSystemContentInset;
-(void)_addUpdateVisibleContentRectPreCommitHandler;
-(void)_updateVisibleContentRects;
-(id)urlSchemeHandlerForURLScheme:(id)arg1 ;
-(unsigned long long)_observedRenderingProgressEvents;
-(CGSize)_minimumLayoutSizeOverride;
-(CGSize)_maximumUnobscuredSizeOverride;
-(CGRect)_inputViewBounds;
-(UIEdgeInsets)_obscuredInsets;
-(UIEdgeInsets)_unobscuredSafeAreaInsets;
-(unsigned long long)_obscuredInsetEdgesAffectedBySafeArea;
-(long long)_interfaceOrientationOverride;
-(void)_beginAnimatedResizeWithUpdates:(/*^block*/id)arg1 ;
-(void)_overrideLayoutParametersWithMinimumLayoutSize:(CGSize)arg1 maximumUnobscuredSizeOverride:(CGSize)arg2 ;
-(void)_setMinimumLayoutSizeOverride:(CGSize)arg1 ;
-(void)_setMaximumUnobscuredSizeOverride:(CGSize)arg1 ;
-(void)_setEditable:(BOOL)arg1 ;
-(void)_setHistoryDelegate:(id)arg1 ;
-(NSURL *)_unreachableURL;
-(void)_loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(id)_loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5 ;
-(id)_loadRequest:(id)arg1 shouldOpenExternalURLs:(BOOL)arg2 ;
-(NSURL *)_committedURL;
-(NSString *)_MIMEType;
-(NSString *)_userAgent;
-(NSString *)_applicationNameForUserAgent;
-(void)_setApplicationNameForUserAgent:(id)arg1 ;
-(NSString *)_customUserAgent;
-(void)_setCustomUserAgent:(id)arg1 ;
-(void)_setUserContentExtensionsEnabled:(BOOL)arg1 ;
-(BOOL)_userContentExtensionsEnabled;
-(int)_webProcessIdentifier;
-(void)_killWebContentProcess;
-(id)_reloadWithoutContentBlockers;
-(id)_reloadExpiredOnly;
-(void)_killWebContentProcessAndResetState;
-(/*^block*/id)_retainActiveFocusedState;
-(id)_snapshotLayerContentsForBackForwardListItem:(id)arg1 ;
-(id)_dataDetectionResults;
-(void)_accessibilityRetrieveSpeakSelectionContent;
-(NSData *)_sessionStateData;
-(id)_sessionStateWithFilter:(/*^block*/id)arg1 ;
-(void)_restoreFromSessionStateData:(id)arg1 ;
-(id)_restoreSessionState:(id)arg1 andNavigate:(BOOL)arg2 ;
-(id)_insertAttachmentWithFilename:(id)arg1 contentType:(id)arg2 data:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_evaluateJavaScriptWithoutUserGesture:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateWebsitePolicies:(id)arg1 ;
-(BOOL)_allowsRemoteInspection;
-(void)_setAllowsRemoteInspection:(BOOL)arg1 ;
-(NSString *)_remoteInspectionNameOverride;
-(void)_setRemoteInspectionNameOverride:(id)arg1 ;
-(BOOL)_addsVisitedLinks;
-(void)_setAddsVisitedLinks:(BOOL)arg1 ;
-(BOOL)_networkRequestsInProgress;
-(void)_setObservedRenderingProgressEvents:(unsigned long long)arg1 ;
-(void)_getMainResourceDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getWebArchiveDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getContentsAsStringWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getApplicationManifestWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_paginationLineGridEnabled;
-(void)_setPaginationLineGridEnabled:(BOOL)arg1 ;
-(BOOL)_supportsTextZoom;
-(double)_textZoomFactor;
-(void)_setTextZoomFactor:(double)arg1 ;
-(double)_pageZoomFactor;
-(void)_setPageZoomFactor:(double)arg1 ;
-(id<_WKDiagnosticLoggingDelegate>)_diagnosticLoggingDelegate;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(id<_WKFindDelegate>)_findDelegate;
-(void)_setFindDelegate:(id)arg1 ;
-(void)_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 ;
-(void)_hideFindUI;
-(void)_saveBackForwardSnapshotForItem:(id)arg1 ;
-(void)_setInputDelegate:(id)arg1 ;
-(BOOL)_isDisplayingStandaloneImageDocument;
-(BOOL)_isDisplayingStandaloneMediaDocument;
-(BOOL)_isShowingNavigationGestureSnapshot;
-(unsigned long long)_layoutMode;
-(void)_setLayoutMode:(unsigned long long)arg1 ;
-(void)_setBackgroundExtendsBeyondPage:(BOOL)arg1 ;
-(BOOL)_backgroundExtendsBeyondPage;
-(double)_viewScale;
-(void)_setViewScale:(double)arg1 ;
-(void)_setScrollPerformanceDataCollectionEnabled:(BOOL)arg1 ;
-(BOOL)_scrollPerformanceDataCollectionEnabled;
-(NSArray *)_scrollPerformanceData;
-(BOOL)_allowsMediaDocumentInlinePlayback;
-(void)_setAllowsMediaDocumentInlinePlayback:(BOOL)arg1 ;
-(void)_setFullscreenDelegate:(id)arg1 ;
-(id<_WKFullscreenDelegate>)_fullscreenDelegate;
-(BOOL)_isInFullscreen;
-(void)_muteMediaCapture;
-(void)_setMediaCaptureEnabled:(BOOL)arg1 ;
-(BOOL)_mediaCaptureEnabled;
-(void)_setPageMuted:(unsigned long long)arg1 ;
-(void)_setObscuredInsets:(UIEdgeInsets)arg1 ;
-(void)_setObscuredInsetEdgesAffectedBySafeArea:(unsigned long long)arg1 ;
-(BOOL)_safeAreaShouldAffectObscuredInsets;
-(void)_setInterfaceOrientationOverride:(long long)arg1 ;
-(void)_clearInterfaceOrientationOverride;
-(void)_setAllowsViewportShrinkToFit:(BOOL)arg1 ;
-(void)_beginInteractiveObscuredInsetsChange;
-(void)_endInteractiveObscuredInsetsChange;
-(void)_hideContentUntilNextUpdate;
-(void)_resizeWhileHidingContentWithUpdates:(/*^block*/id)arg1 ;
-(void)_setOverlaidAccessoryViewsInset:(CGSize)arg1 ;
-(void)_overrideLayoutParametersWithMinimumLayoutSize:(CGSize)arg1 minimumLayoutSizeForMinimalUI:(CGSize)arg2 maximumUnobscuredSizeOverride:(CGSize)arg3 ;
-(void)_clearOverrideLayoutParameters;
-(id)_viewForFindUI;
-(NSData *)_dataForDisplayedPDF;
-(NSString *)_suggestedFilenameForDisplayedPDF;
-(_WKWebViewPrintFormatter *)_webViewPrintFormatter;
-(void)_firePresentationUpdateForPendingStableStatePresentationCallbacks;
-(void)_doAfterNextPresentationUpdate:(/*^block*/id)arg1 ;
-(void)_requestActivatedElementAtPosition:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(CGRect)_contentVisibleRect;
-(CGPoint)_convertPointFromContentsToView:(CGPoint)arg1 ;
-(CGPoint)_convertPointFromViewToContents:(CGPoint)arg1 ;
-(void)keyboardAccessoryBarNext;
-(void)keyboardAccessoryBarPrevious;
-(void)dismissFormAccessoryView;
-(void)_didShowForcePressPreview;
-(void)_didDismissForcePressPreview;
-(CGRect)_uiTextCaretRect;
-(NSString *)_scrollingTreeAsText;
-(void)_doAfterNextStablePresentationUpdate:(/*^block*/id)arg1 ;
-(id)_propertiesOfLayerWithID:(unsigned long long)arg1 ;
-(void)_requestActiveNowPlayingSessionInfo:(/*^block*/id)arg1 ;
-(void)_setPageScale:(double)arg1 withOrigin:(CGPoint)arg2 ;
-(double)_pageScale;
-(void)_doAfterNextPresentationUpdateWithoutWaitingForPainting:(/*^block*/id)arg1 ;
-(void)_doAfterNextVisibleContentRectUpdate:(/*^block*/id)arg1 ;
-(void)_disableBackForwardSnapshotVolatilityForTesting;
-(void)_executeEditCommand:(id)arg1 argument:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_dragCaretRect;
-(BOOL)_beginBackSwipeForTesting;
-(BOOL)_completeBackSwipeForTesting;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(WKBrowsingContextHandle *)_handle;
-(SecTrustRef)serverTrust;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 ;
@end

