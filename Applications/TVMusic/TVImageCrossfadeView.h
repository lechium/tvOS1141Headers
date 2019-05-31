//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSTimer, UIImageView, _TVImageLoaderQueue;

@interface TVImageCrossfadeView : UIView
{
    NSTimer *_crossfadeTimer;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    _TVImageLoaderQueue *_loaderQueue;	// 24 = 0x18
    NSArray *_artworkCatalogs;	// 32 = 0x20
    double _crossfadePeriod;	// 40 = 0x28
    double _crossfadeDuration;	// 48 = 0x30
    struct UIEdgeInsets _padding;	// 56 = 0x38
}

@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property(nonatomic) double crossfadePeriod; // @synthesize crossfadePeriod=_crossfadePeriod;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) NSArray *artworkCatalogs; // @synthesize artworkCatalogs=_artworkCatalogs;
- (void).cxx_destruct;	// IMP=0x000000010008ca30
- (void)_crossfadeToImage:(id)arg1;	// IMP=0x000000010008c728
- (void)_loadNextImage:(id)arg1;	// IMP=0x000000010008c6cc
- (void)_startTimer;	// IMP=0x000000010008c614
- (void)layoutSubviews;	// IMP=0x000000010008c15c
- (void)didMoveToSuperview;	// IMP=0x000000010008c0f4
- (void)dealloc;	// IMP=0x000000010008c09c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010008bf94

@end

