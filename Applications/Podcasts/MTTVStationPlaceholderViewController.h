//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MTPlaylist, UIImageView;

@interface MTTVStationPlaceholderViewController : UIViewController
{
    MTPlaylist *_station;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTPlaylist *station; // @synthesize station=_station;
- (void).cxx_destruct;	// IMP=0x000000010010a1f0
- (id)_fetchArtwork;	// IMP=0x000000010010a110
- (_Bool)_isDarkBackground;	// IMP=0x000000010010a0c0
- (void)_updateColors;	// IMP=0x000000010010a034
- (void)_update;	// IMP=0x0000000100109f8c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100109e54
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100109db8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100109d68
- (void)viewDidLoad;	// IMP=0x0000000100109d18
- (void)loadView;	// IMP=0x0000000100109c7c
- (id)initWithStation:(id)arg1;	// IMP=0x0000000100109c08

@end
