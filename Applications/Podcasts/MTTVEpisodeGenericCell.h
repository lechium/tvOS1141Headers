//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MTEpisodeCellProtocol.h"

@class MTEpisode, MTTVEpisodePlayStatusView;

@interface MTTVEpisodeGenericCell : UITableViewCell <MTEpisodeCellProtocol>
{
    _Bool _currentPlayerItem;	// 8 = 0x8
    MTEpisode *_episode;	// 16 = 0x10
    MTTVEpisodePlayStatusView *_playStatusView;	// 24 = 0x18
}

+ (double)height;	// IMP=0x000000010018cc0c
@property(retain, nonatomic) MTTVEpisodePlayStatusView *playStatusView; // @synthesize playStatusView=_playStatusView;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) MTEpisode *episode; // @synthesize episode=_episode;
- (void).cxx_destruct;	// IMP=0x000000010018d060
- (void)_ensureFocusedFloatingContentView;	// IMP=0x000000010018cf3c
- (void)configureSubviews;	// IMP=0x000000010018cec8
- (void)prepareForReuse;	// IMP=0x000000010018ce74
- (void)updatePlayStatusForCurrentPlayerItemDidChange;	// IMP=0x000000010018ce18
- (void)updateIsCurrentPlayerItemState;	// IMP=0x000000010018cd3c
- (void)dealloc;	// IMP=0x000000010018cc70
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010018cc18

@end

