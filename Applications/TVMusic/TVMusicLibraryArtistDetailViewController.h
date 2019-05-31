//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMusicLibraryAlbumsViewController.h"

@class MPModelLibraryResponse, UIControl, UIView;

@interface TVMusicLibraryArtistDetailViewController : TVMusicLibraryAlbumsViewController
{
    UIControl *_artistButton;	// 8 = 0x8
    UIView *_footerView;	// 16 = 0x10
    MPModelLibraryResponse *_musicVideosResponse;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000010009c5c8
@property(retain, nonatomic) MPModelLibraryResponse *musicVideosResponse; // @synthesize musicVideosResponse=_musicVideosResponse;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIControl *artistButton; // @synthesize artistButton=_artistButton;
- (void).cxx_destruct;	// IMP=0x000000010009f0f4
- (void)_selectedArtist;	// IMP=0x000000010009ef9c
- (void)_addArtistButton;	// IMP=0x000000010009ef08
- (id)_musicVideosLibraryRequest;	// IMP=0x000000010009ede0
- (void)_playMusicVideo:(id)arg1;	// IMP=0x000000010009ecbc
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000010009eb14
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010009ea7c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x000000010009ea3c
- (_Bool)updateWithModelResponse:(id)arg1;	// IMP=0x000000010009e95c
- (void)configureCell:(id)arg1 forObject:(id)arg2;	// IMP=0x000000010009e450
- (void)playShuffled:(_Bool)arg1;	// IMP=0x000000010009de74
- (_Bool)didPlayObject:(id)arg1;	// IMP=0x000000010009dd5c
- (_Bool)didSelectObject:(id)arg1;	// IMP=0x000000010009dc44
- (void)setMpResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009d4d4
- (void)viewDidLoad;	// IMP=0x000000010009c77c
- (id)initWithArtist:(id)arg1;	// IMP=0x000000010009c5fc

@end
