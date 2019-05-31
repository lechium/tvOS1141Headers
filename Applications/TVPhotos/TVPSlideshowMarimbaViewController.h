//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPAssetKeyDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_source>, NSString, NSTimer, TVPMarimbaView, TVPSlideshowUtilities, UIActivityIndicatorView, UITableView, UITapGestureRecognizer, UIView, UIVisualEffectView;

@interface TVPSlideshowMarimbaViewController : UIViewController <MPAssetKeyDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _displaysTransitionStyleOptions;	// 8 = 0x8
    _Bool _displayThemeOptions;	// 9 = 0x9
    _Bool _didPauseMarimbaRenderer;	// 10 = 0xa
    NSDictionary *_options;	// 16 = 0x10
    long long _slideshowStartIndex;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    TVPMarimbaView *_marimbaView;	// 40 = 0x28
    UIVisualEffectView *_blurBackgroundView;	// 48 = 0x30
    UITableView *_slideshowOptionsView;	// 56 = 0x38
    UIView *_headerView;	// 64 = 0x40
    UIActivityIndicatorView *_preloadSpinnerView;	// 72 = 0x48
    UITapGestureRecognizer *_menuGestureRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_playPauseGestureRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_leftButtonRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_rightButtonRecognizer;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_assetsRefreshTimer;	// 112 = 0x70
    NSArray *_photoAssets;	// 120 = 0x78
    NSArray *_slideshowThemeSettings;	// 128 = 0x80
    NSArray *_slideshowTransitionSettings;	// 136 = 0x88
    NSDictionary *_assetKeysToAssetPaths;	// 144 = 0x90
    NSDictionary *_themeParameters;	// 152 = 0x98
    NSString *_focusedThemeForPreview;	// 160 = 0xa0
    TVPSlideshowUtilities *_slideshowUtilites;	// 168 = 0xa8
    long long _initialImagePrefetchCount;	// 176 = 0xb0
    long long _indexOfNextImageToPrefetch;	// 184 = 0xb8
    long long _minImageFetchPreloadGap;	// 192 = 0xc0
    long long _maxImageBatchPreloadCount;	// 200 = 0xc8
    NSTimer *_themeTimer;	// 208 = 0xd0
    NSString *_slideshowStyle;	// 216 = 0xd8
}

+ (id)_photoAssetsFromPHAssets:(id)arg1;	// IMP=0x000000010003870c
@property(copy, nonatomic) NSString *slideshowStyle; // @synthesize slideshowStyle=_slideshowStyle;
@property(nonatomic) _Bool didPauseMarimbaRenderer; // @synthesize didPauseMarimbaRenderer=_didPauseMarimbaRenderer;
@property(nonatomic) _Bool displayThemeOptions; // @synthesize displayThemeOptions=_displayThemeOptions;
@property(retain, nonatomic) NSTimer *themeTimer; // @synthesize themeTimer=_themeTimer;
@property(nonatomic) long long maxImageBatchPreloadCount; // @synthesize maxImageBatchPreloadCount=_maxImageBatchPreloadCount;
@property(nonatomic) long long minImageFetchPreloadGap; // @synthesize minImageFetchPreloadGap=_minImageFetchPreloadGap;
@property(nonatomic) long long indexOfNextImageToPrefetch; // @synthesize indexOfNextImageToPrefetch=_indexOfNextImageToPrefetch;
@property(nonatomic) long long initialImagePrefetchCount; // @synthesize initialImagePrefetchCount=_initialImagePrefetchCount;
@property(retain, nonatomic) TVPSlideshowUtilities *slideshowUtilites; // @synthesize slideshowUtilites=_slideshowUtilites;
@property(copy, nonatomic) NSString *focusedThemeForPreview; // @synthesize focusedThemeForPreview=_focusedThemeForPreview;
@property(copy, nonatomic) NSDictionary *themeParameters; // @synthesize themeParameters=_themeParameters;
@property(copy, nonatomic) NSDictionary *assetKeysToAssetPaths; // @synthesize assetKeysToAssetPaths=_assetKeysToAssetPaths;
@property(copy, nonatomic) NSArray *slideshowTransitionSettings; // @synthesize slideshowTransitionSettings=_slideshowTransitionSettings;
@property(copy, nonatomic) NSArray *slideshowThemeSettings; // @synthesize slideshowThemeSettings=_slideshowThemeSettings;
@property(copy, nonatomic) NSArray *photoAssets; // @synthesize photoAssets=_photoAssets;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assetsRefreshTimer; // @synthesize assetsRefreshTimer=_assetsRefreshTimer;
@property(retain, nonatomic) UITapGestureRecognizer *rightButtonRecognizer; // @synthesize rightButtonRecognizer=_rightButtonRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftButtonRecognizer; // @synthesize leftButtonRecognizer=_leftButtonRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *playPauseGestureRecognizer; // @synthesize playPauseGestureRecognizer=_playPauseGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // @synthesize menuGestureRecognizer=_menuGestureRecognizer;
@property(retain, nonatomic) UIActivityIndicatorView *preloadSpinnerView; // @synthesize preloadSpinnerView=_preloadSpinnerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *slideshowOptionsView; // @synthesize slideshowOptionsView=_slideshowOptionsView;
@property(retain, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) TVPMarimbaView *marimbaView; // @synthesize marimbaView=_marimbaView;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long slideshowStartIndex; // @synthesize slideshowStartIndex=_slideshowStartIndex;
@property(nonatomic) _Bool displaysTransitionStyleOptions; // @synthesize displaysTransitionStyleOptions=_displaysTransitionStyleOptions;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void).cxx_destruct;	// IMP=0x000000010003a4fc
- (void)_initializeSlideshowMarimbaParametersWithOptions:(id)arg1 displayThemeOptions:(_Bool)arg2;	// IMP=0x0000000100039638
- (void)_cancelExistingTimer;	// IMP=0x00000001000395ec
- (struct CGSize)_getAttributedTextSize:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;	// IMP=0x0000000100039528
- (void)_preloadImagesForAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038e04
- (id)_defaultImageRequestOptions;	// IMP=0x0000000100038d98
- (void)_updateMarimbaDocumentWithAddedAssets:(id)arg1;	// IMP=0x0000000100038910
- (void)_reorderAssets;	// IMP=0x0000000100038524
- (long long)_indexOfAssetPathInOrderedAssets:(id)arg1;	// IMP=0x0000000100038458
- (void)_startSlideshow;	// IMP=0x00000001000382f4
- (void)_fingerTouchAction:(id)arg1;	// IMP=0x000000010003807c
- (void)_didFinishTimedInterval:(id)arg1;	// IMP=0x0000000100037db0
- (void)_dismissImagePreloadSpinnerView;	// IMP=0x0000000100037d64
- (void)_displayImagePreloadSpinnerView;	// IMP=0x0000000100037c24
- (void)_refreshMarimbaPreviewWithPhotoAssets:(id)arg1;	// IMP=0x000000010003796c
- (void)_pauseMarimbaRenderer;	// IMP=0x00000001000378f8
- (void)_unpauseMarimbaRenderer;	// IMP=0x0000000100037850
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;	// IMP=0x0000000100037654
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100037218
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100036cf8
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000100036c24
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100036b84
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100036b50
- (void)_applicationDidBecomeActiveNotification:(id)arg1;	// IMP=0x0000000100036b44
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x0000000100036b38
- (void)_marimbaSlideshowPlaybackFinished:(id)arg1;	// IMP=0x0000000100036aec
- (void)_usedAllPathsNotification:(id)arg1;	// IMP=0x0000000100036a08
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100036a00
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x00000001000369f4
- (id)absolutePathForAssetKey:(id)arg1;	// IMP=0x0000000100035fa0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000100035f54
- (void)_rightAction:(id)arg1;	// IMP=0x0000000100035ed0
- (void)_leftAction:(id)arg1;	// IMP=0x0000000100035e4c
- (void)_playPauseAction:(id)arg1;	// IMP=0x0000000100035de4
- (void)_menuAction:(id)arg1;	// IMP=0x0000000100035d40
- (id)preferredFocusEnvironments;	// IMP=0x0000000100035c78
- (void)dealloc;	// IMP=0x0000000100035c00
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100035b30
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000359c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100035938
- (void)viewDidLoad;	// IMP=0x0000000100035124
- (void)loadView;	// IMP=0x0000000100034abc
- (void)refreshPhotoAssets:(id)arg1;	// IMP=0x000000010003438c
- (void)immediatelyRefreshPhotoAssets:(id)arg1;	// IMP=0x000000010003415c
- (id)init;	// IMP=0x0000000100034094
- (id)initWithPhotoAssets:(id)arg1 displayThemeOptions:(_Bool)arg2;	// IMP=0x0000000100033fd0
- (id)initWithPhotoAssets:(id)arg1;	// IMP=0x0000000100033fc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
