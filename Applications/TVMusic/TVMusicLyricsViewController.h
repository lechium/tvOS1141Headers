//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MPModelPlayEvent, MPModelSong, NSData, NSOperationQueue, NSString, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView;

@interface TVMusicLyricsViewController : UIViewController
{
    UIImageView *_artworkImageView;	// 8 = 0x8
    UILabel *_lyricsLabel;	// 16 = 0x10
    UIScrollView *_lyricsScrollView;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    UILabel *_songTitleLabel;	// 40 = 0x28
    UILabel *_songSubtitleLabel;	// 48 = 0x30
    double _startViewTime;	// 56 = 0x38
    MPModelSong *_song;	// 64 = 0x40
    NSString *_PAFFeatureName;	// 72 = 0x48
    NSData *_PAFRecommendationData;	// 80 = 0x50
    MPModelPlayEvent *_PAFContainerData;	// 88 = 0x58
    NSString *_lyricsText;	// 96 = 0x60
    NSString *_lyricsID;	// 104 = 0x68
}

+ (id)HTMLifyNewlines:(id)arg1;	// IMP=0x0000000100010380
+ (id)attributedStringFromLyricsString:(id)arg1;	// IMP=0x000000010001016c
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(copy, nonatomic) NSString *lyricsText; // @synthesize lyricsText=_lyricsText;
@property(retain, nonatomic) MPModelPlayEvent *PAFContainerData; // @synthesize PAFContainerData=_PAFContainerData;
@property(retain, nonatomic) NSData *PAFRecommendationData; // @synthesize PAFRecommendationData=_PAFRecommendationData;
@property(copy, nonatomic) NSString *PAFFeatureName; // @synthesize PAFFeatureName=_PAFFeatureName;
- (void).cxx_destruct;	// IMP=0x0000000100010620
@property(readonly, nonatomic) NSOperationQueue *lyricsOperationQueue;
- (void)_handleTogglePlayPause;	// IMP=0x0000000100010104
- (void)_reportPAFEventForLyricsView;	// IMP=0x000000010000ff48
- (void)_showErrorAlertWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010000fdac
- (void)viewWillLayoutSubviews;	// IMP=0x000000010000f658
- (id)preferredFocusEnvironments;	// IMP=0x000000010000f5e8
@property(readonly, nonatomic) NSString *songArtist;
@property(readonly, nonatomic) NSString *songAlbum;
@property(readonly, nonatomic) NSString *songTitle;
- (_Bool)_showLyrics:(id)arg1 withLyricsID:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f1d8
- (void)_loadAndDisplayStoreLyrics;	// IMP=0x000000010000ee7c
- (void)_hideActivityIndicator;	// IMP=0x000000010000ee30
- (void)_showActivityIndicator;	// IMP=0x000000010000ed28
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010000ecd8
- (void)viewDidLoad;	// IMP=0x000000010000e594
- (id)initWithSong:(id)arg1;	// IMP=0x000000010000e50c

@end

