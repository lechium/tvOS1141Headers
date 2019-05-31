/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKViewControllerAudioSupport.h>
#import <libobjc.A.dylib/OKAudioPlaylistDelegate.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKNavigatorViewControllerProxyExport.h>
#import <libobjc.A.dylib/OKActionResponder.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>

@class NSString, OKPresentationNavigator, NSMutableDictionary, OKPresentationViewController, OKPageViewController, NSMutableSet, OKAudioPlaylist, NSMutableArray, NSRecursiveLock, OKNavigatorView, OFUIView;

@interface OKNavigatorViewControllerProxy : OFUIViewController <OKCollectionProxyDataSource, OKSettingsSupport, OKActionResponderPrivate, OKViewControllerAudioSupport, OKAudioPlaylistDelegate, OKPresentationReadinessPrivate, OKNavigatorViewControllerProxyExport, OKActionResponder, OKPresentationReadiness> {

	NSString* _willAppearActionScript;
	NSString* _didAppearActionScript;
	NSString* _willDisappearActionScript;
	NSString* _didDisappearActionScript;
	BOOL _needsApplySettings;
	BOOL _hasSettingsApplied;
	OKPresentationNavigator* _navigator;
	unsigned long long _prepareMode;
	NSMutableDictionary* _pageViewControllers;
	OKPresentationViewController* _presentationViewController;
	OKPageViewController* _parentPageViewController;
	OKPageViewController* _currentPageViewController;
	NSString* _prepareActionScript;
	NSString* _canPerformActionScript;
	NSString* _navigationScript;
	NSMutableSet* _actionBindings;
	OKAudioPlaylist* _audioPlaylist;
	float _requiredDuckLevel;
	NSString* _playlistTrackID;
	BOOL _audioPlaylistEnabled;
	double _audioVolume;
	BOOL _audioPlaylistLoops;
	BOOL _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;

}

@property (assign,nonatomic) OKPresentationViewController * presentationViewController;              //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic) OKPageViewController * parentPageViewController;                        //@synthesize parentPageViewController=_parentPageViewController - In the implementation block
@property (nonatomic,retain) OKPageViewController * currentPageViewController;                       //@synthesize currentPageViewController=_currentPageViewController - In the implementation block
@property (assign,nonatomic) BOOL audioPlaylistEnabled;                                              //@synthesize audioPlaylistEnabled=_audioPlaylistEnabled - In the implementation block
@property (nonatomic,retain) OKAudioPlaylist * audioPlaylist;                                        //@synthesize audioPlaylist=_audioPlaylist - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pageViewControllers;                              //@synthesize pageViewControllers=_pageViewControllers - In the implementation block
@property (nonatomic,retain,readonly) OKNavigatorView * navigatorView; 
@property (nonatomic,retain,readonly) OKPresentationNavigator * navigator;                           //@synthesize navigator=_navigator - In the implementation block
@property (nonatomic,readonly) unsigned long long prepareMode;                                       //@synthesize prepareMode=_prepareMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) OFUIView * actionView; 
+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)commonInit;
-(BOOL)prepareForDisplay;
-(BOOL)canPerformAction:(id)arg1 ;
-(void)instantPause;
-(OKPresentationViewController *)presentationViewController;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(OKPresentationNavigator *)navigator;
-(OKNavigatorView *)navigatorView;
-(OKPageViewController *)currentPageViewController;
-(void)setPresentationViewController:(OKPresentationViewController *)arg1 ;
-(void)setParentPageViewController:(OKPageViewController *)arg1 ;
-(void)networkStatusDidChange:(long long)arg1 ;
-(void)setNeedsApplySettings;
-(unsigned long long)prepareMode;
-(void)applySettingsIfNeeded;
-(void)resolutionDidChange;
-(void)layoutDidChange;
-(void)applyLayoutSettings;
-(void)removeAllActionBindings;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)setNeedsPrepare;
-(void)prepareForMode:(unsigned long long)arg1 ;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(CGSize)layoutFactor;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)allActionBindings;
-(id)dynamicsPushBehaviors;
-(CGRect)visiblePageRect;
-(void)applySettings;
-(void)prepareForReload;
-(void)navigatorWillAppear:(BOOL)arg1 ;
-(void)navigatorDidAppear:(BOOL)arg1 ;
-(void)_setAudioURLs:(id)arg1 ;
-(void)_playAudioPlaylist;
-(void)cancelCouchPotatoPlayback;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(void)removeAllReadyNotifications;
-(id)displayedPageViewControllers;
-(id)deepestDisplayedPageViewController;
-(id)initWithNavigator:(id)arg1 ;
-(void)navigateToItemAtKeyPath:(id)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(void)rewindAudioPlaylist;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isReady:(BOOL)arg1 ;
-(double)readyProgress:(BOOL)arg1 ;
-(void)setPlaybackAudioVolume:(double)arg1 ;
-(void)beginFadingWithDuration:(double)arg1 ;
-(double)requiredDuckLevel;
-(void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2 ;
-(void)endDucking;
-(BOOL)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(BOOL)interactivityEnabled;
-(OFUIView *)actionView;
-(void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2 ;
-(void)removeActionBinding:(id)arg1 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2 ;
-(id)cachedPageViewControllers;
-(OKPageViewController *)parentPageViewController;
-(CGSize)parentLayoutFactor;
-(id)layoutSettingsKeys;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(id)pageViewControllerForPageWithName:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(/*^block*/id)arg3 forPageViewController:(id)arg4 andWidgetView:(id)arg5 ;
-(void)_stopAudioPlaylist;
-(void)gotoPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)endFading;
-(BOOL)supportsReadiness;
-(void)readinessDidChange:(BOOL)arg1 ;
-(void)audioStartedPlayingWithAVAsset:(id)arg1 ;
-(void)audioFinishedPlayingWithAVAsset:(id)arg1 ;
-(void)becomeReady;
-(void)resignReady;
-(CGRect)settingFrame;
-(void)setSettingFrame:(CGRect)arg1 ;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(void)setSettingWillAppearActionScript:(id)arg1 ;
-(void)setSettingDidAppearActionScript:(id)arg1 ;
-(void)setSettingWillDisappearActionScript:(id)arg1 ;
-(void)setSettingDidDisappearActionScript:(id)arg1 ;
-(void)setSettingNavigationScript:(id)arg1 ;
-(void)setSettingAudioPlaylist:(id)arg1 ;
-(float)settingAudioVolume;
-(void)setSettingAudioVolume:(float)arg1 ;
-(void)setSettingAudioRequiredDuckLevel:(float)arg1 ;
-(void)setSettingAudioPlaylistLoops:(BOOL)arg1 ;
-(id)settingBackgroundColor;
-(void)setSettingBackgroundColor:(id)arg1 ;
-(void)navigatorWillDisappear:(BOOL)arg1 ;
-(void)navigatorDidDisappear:(BOOL)arg1 ;
-(id)cachedPageViewControllerForPageWithNames:(id)arg1 ;
-(void)uncachePageViewControllerForPageWithNames:(id)arg1 ;
-(BOOL)isRootNavigator;
-(void)setAudioPlaylistEnabled:(BOOL)arg1 ;
-(void)setCurrentPageViewController:(OKPageViewController *)arg1 ;
-(BOOL)audioPlaylistEnabled;
-(NSMutableDictionary *)pageViewControllers;
-(void)setPageViewControllers:(NSMutableDictionary *)arg1 ;
-(OKAudioPlaylist *)audioPlaylist;
-(void)setAudioPlaylist:(OKAudioPlaylist *)arg1 ;
@end

