//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTVEpisodeSplitViewController.h"

@class MTPlaylist;

@interface MTTVStationDetailViewController : MTTVEpisodeSplitViewController
{
    MTPlaylist *_playlist;	// 8 = 0x8
}

@property(readonly, nonatomic) MTPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;	// IMP=0x0000000100045448
- (void)_masterListFocusDidChange;	// IMP=0x00000001000453ec
- (id)placeholderDetailViewController;	// IMP=0x0000000100045344
- (void)viewDidLoad;	// IMP=0x000000010004528c
- (id)initWithPlaylist:(id)arg1;	// IMP=0x000000010004520c

@end
