//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseFeedManager.h"

@class NSMutableDictionary;

@interface MTSubscriptionManager : MTBaseFeedManager
{
    NSMutableDictionary *_feedUrlsToParams;	// 8 = 0x8
}

+ (_Bool)isSubscribing;	// IMP=0x00000001000fb2cc
@property(retain, nonatomic) NSMutableDictionary *feedUrlsToParams; // @synthesize feedUrlsToParams=_feedUrlsToParams;
- (void).cxx_destruct;	// IMP=0x00000001000fb2f8
- (void)showSubscriptionFailureDialog:(id)arg1;	// IMP=0x00000001000fb074
- (void)removeSubscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000fafc8
- (void)addSubscribeParams:(id)arg1 forFeedUrl:(id)arg2;	// IMP=0x00000001000faef8
- (id)subscribeParamsForFeedUrl:(id)arg1;	// IMP=0x00000001000fae38
- (void)subscribeToPodcastWithParams:(id)arg1;	// IMP=0x00000001000fab30
- (void)task:(id)arg1 didFailWithError:(id)arg2 orStatusCode:(long long)arg3;	// IMP=0x00000001000fa890
- (_Bool)_addEpisode:(id)arg1 toMyEpisodesInPodcast:(id)arg2 persist:(_Bool)arg3;	// IMP=0x00000001000fa5f0
- (_Bool)_addNewestEpisodeToPodcast:(id)arg1;	// IMP=0x00000001000fa3c8
- (_Bool)_addLatestSeasonToPodcast:(id)arg1;	// IMP=0x00000001000f9fe8
- (void)task:(id)arg1 didCompleteWithData:(id)arg2;	// IMP=0x00000001000f9290
- (id)init;	// IMP=0x00000001000f9208

@end

