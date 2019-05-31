//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISplitViewController.h"

#import "MTEpisodeListViewControllerDelegate.h"
#import "MTTVEpisodeDetailViewControllerDelegate.h"

@class MTEpisodeListViewController<MTTVListViewControllerProtocol>, MTTVContentUnavailableViewController, NSString, NSTimer, UINavigationController, UIViewController;

@interface MTTVEpisodeSplitViewController : UISplitViewController <MTTVEpisodeDetailViewControllerDelegate, MTEpisodeListViewControllerDelegate>
{
    MTEpisodeListViewController<MTTVListViewControllerProtocol> *_episodeList;	// 8 = 0x8
    MTTVContentUnavailableViewController *_emptyContentViewController;	// 16 = 0x10
    long long _listState;	// 24 = 0x18
    UINavigationController *_leftNavController;	// 32 = 0x20
    UINavigationController *_rightNavController;	// 40 = 0x28
    UIViewController *_placeholderDetailViewController;	// 48 = 0x30
    NSTimer *_fastScrollTimer;	// 56 = 0x38
}

@property(retain, nonatomic) NSTimer *fastScrollTimer; // @synthesize fastScrollTimer=_fastScrollTimer;
@property(retain, nonatomic) UIViewController *placeholderDetailViewController; // @synthesize placeholderDetailViewController=_placeholderDetailViewController;
@property(retain, nonatomic) UINavigationController *rightNavController; // @synthesize rightNavController=_rightNavController;
@property(retain, nonatomic) UINavigationController *leftNavController; // @synthesize leftNavController=_leftNavController;
@property(readonly, nonatomic) long long listState; // @synthesize listState=_listState;
@property(retain, nonatomic) MTTVContentUnavailableViewController *emptyContentViewController; // @synthesize emptyContentViewController=_emptyContentViewController;
@property(retain, nonatomic) MTEpisodeListViewController<MTTVListViewControllerProtocol> *episodeList; // @synthesize episodeList=_episodeList;
- (void).cxx_destruct;	// IMP=0x00000001000756fc
- (void)updateEmptyView;	// IMP=0x0000000100075468
- (void)tearDownEmptyContentViewController;	// IMP=0x0000000100075354
- (void)standupEmptyContentViewController;	// IMP=0x00000001000751c8
- (void)setListState:(long long)arg1;	// IMP=0x0000000100075130
- (void)updateNavBarVisibilityForCurrentListState;	// IMP=0x00000001000750d0
- (void)detailListController:(id)arg1 didTransitionToState:(long long)arg2;	// IMP=0x0000000100075030
- (void)detailListController:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100074fe0
- (void)detailListController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100074f74
- (void)episodeDetailViewController:(id)arg1 playEpisode:(id)arg2;	// IMP=0x0000000100074d78
- (void)_showDetailViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100074ad8
- (void)_showDetailsForPlaceholderIfNeededAnimated:(_Bool)arg1;	// IMP=0x0000000100074a8c
- (void)_showDetailsForPlaceholderAnimated:(_Bool)arg1;	// IMP=0x00000001000749ec
- (_Bool)_isShowingDetailViewController;	// IMP=0x0000000100074974
- (_Bool)_isShowingEpisodeDetails;	// IMP=0x00000001000748b4
- (void)_dismissDetailsForCurrentItemIfNeededAnimated:(_Bool)arg1;	// IMP=0x0000000100074868
- (void)_dismissDetailsForCurrentItemAnimated:(_Bool)arg1;	// IMP=0x00000001000747ec
- (void)_showDetailsForFirstItemIfNeededAnimated:(_Bool)arg1;	// IMP=0x000000010007478c
- (void)_showDetailsForFirstItemAnimated:(_Bool)arg1;	// IMP=0x0000000100074644
- (void)_showDetailsForEpisode:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000745a0
- (void)_showDetailsForIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000744bc
- (void)_showDetailsForFocusedItemAnimated:(_Bool)arg1;	// IMP=0x0000000100074418
- (void)_masterListFocusChangeDidBecomeIdle;	// IMP=0x0000000100074408
- (void)_masterListFocusDidChange;	// IMP=0x00000001000743f8
- (void)_showDetailsForFocusUpdateInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100074198
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100073dec
- (id)preferredFocusedView;	// IMP=0x0000000100073cc8
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100073be0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100073afc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100073aa8
- (void)viewDidLoad;	// IMP=0x000000010007387c
- (id)init;	// IMP=0x000000010007382c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
