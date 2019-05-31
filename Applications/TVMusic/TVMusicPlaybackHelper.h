//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVMusicPlaybackHelper : NSObject
{
}

+ (_Bool)_isPlayingOnLocalDevice;	// IMP=0x0000000100093948
+ (_Bool)_isAppleMusicSubscriber;	// IMP=0x00000001000938cc
+ (_Bool)_isVideoItemType:(unsigned long long)arg1;	// IMP=0x00000001000938bc
+ (void)_playSongsScopedToContainer:(id)arg1 songVariants:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3 sortDescriptors:(id)arg4;	// IMP=0x0000000100093804
+ (void)_playSongsWithRequest:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x00000001000937d8
+ (void)_queueSongsWithRequest:(id)arg1 playNext:(_Bool)arg2;	// IMP=0x00000001000936d8
+ (void)_playSongsWithRequest:(id)arg1 initialPlaybackType:(unsigned long long)arg2;	// IMP=0x0000000100093610
+ (void)_playSongsWithRequest:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 initialPlaybackType:(unsigned long long)arg4;	// IMP=0x0000000100093514
+ (void)_playRequestWithItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3 requestBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010009320c
+ (void)_playUsingAirPlayWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x0000000100092df8
+ (void)_playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3 checkSubscriptionStatus:(_Bool)arg4;	// IMP=0x0000000100092ad0
+ (void)_playVideoItemWithRequest:(id)arg1 item:(id)arg2;	// IMP=0x000000010009281c
+ (id)_songsRequestForContainer:(id)arg1 songVariants:(unsigned long long)arg2;	// IMP=0x000000010009261c
+ (void)playSongsInContainer:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x0000000100092600
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4 inSectionKind:(id)arg5 sectionSortDescriptors:(id)arg6 initialPlaybackType:(unsigned long long)arg7;	// IMP=0x00000001000924b8
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 itemSortDescriptors:(id)arg4 inSectionKind:(id)arg5 sectionSortDescriptors:(id)arg6;	// IMP=0x00000001000923ec
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3 sortDescriptors:(id)arg4;	// IMP=0x0000000100092368
+ (void)playSongsInContainer:(id)arg1 startIdentifiers:(id)arg2 shuffle:(_Bool)arg3;	// IMP=0x000000010009230c
+ (void)playSongsInContainer:(id)arg1 startModelObject:(id)arg2 dontReloadForSameSong:(_Bool)arg3 sortDescriptors:(id)arg4;	// IMP=0x0000000100091e0c
+ (void)playSongsInContainer:(id)arg1 startModelObject:(id)arg2 dontReloadForSameSong:(_Bool)arg3;	// IMP=0x0000000100091db0
+ (void)shuffleAllLibrarySongs;	// IMP=0x0000000100091cb8
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x00000001000917a4
+ (void)playItemType:(unsigned long long)arg1 withPersistentID:(id)arg2;	// IMP=0x0000000100091794
+ (void)playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x0000000100091784
+ (void)playWithPlaybackIntent:(id)arg1 initialPlaybackType:(unsigned long long)arg2;	// IMP=0x0000000100091770
+ (void)playWithPlaybackIntent:(id)arg1;	// IMP=0x0000000100091758
+ (void)playFromRequest:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x000000010009172c
+ (void)playFromRequest:(id)arg1 startItemIdentifiers:(id)arg2 shuffle:(_Bool)arg3;	// IMP=0x00000001000916d0
+ (void)playItemType:(unsigned long long)arg1 withMPObject:(id)arg2 startItemIdentifiers:(id)arg3 shuffle:(_Bool)arg4;	// IMP=0x0000000100091410
+ (void)playItemType:(unsigned long long)arg1 withMPObject:(id)arg2;	// IMP=0x00000001000913fc
+ (_Bool)canPlayItemWithStoreID:(id)arg1 playbackAction:(unsigned long long)arg2;	// IMP=0x00000001000911f0
+ (_Bool)canPlayItemType:(unsigned long long)arg1 withPersistentID:(id)arg2 playbackAction:(unsigned long long)arg3;	// IMP=0x0000000100090f3c

@end
