//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPNowPlayingContentItem, MPNowPlayingInfoCenter, NSArray, NSProgress, NSString;

@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
- (MPNowPlayingContentItem *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemForID:(NSString *)arg2;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDForOffset:(long long)arg2;

@optional
- (MPNowPlayingContentItem *)contentItemForOffset:(long long)arg1;
- (NSString *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 childContentItemIDAtIndex:(long long)arg2 ofItem:(MPNowPlayingContentItem *)arg3;
- (NSArray *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 currentLanguageOptionsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 availableLanguageOptionsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 infoForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 lyricsForContentItem:(MPNowPlayingContentItem *)arg2 completion:(void (^)(MPNowPlayingInfoLyricsItem *, NSError *))arg3;
- (NSProgress *)nowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1 artworkForContentItem:(MPNowPlayingContentItem *)arg2 size:(struct CGSize)arg3 completion:(void (^)(UIImage *, NSError *))arg4;
- (NSString *)playbackQueueIdentifierForNowPlayingInfoCenter:(MPNowPlayingInfoCenter *)arg1;
@end

