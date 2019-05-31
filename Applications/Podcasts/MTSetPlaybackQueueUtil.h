//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTSetPlaybackQueueUtil : NSObject
{
}

+ (long long)_automaticCommandStatusForRequestStatus:(long long)arg1;	// IMP=0x00000001000829f8
+ (_Bool)_setPlaybackQueueForPodcastAdamId:(id)arg1 siriAssetInfo:(id)arg2 playbackOrder:(long long)arg3 startPlayback:(_Bool)arg4 reason:(unsigned long long)arg5 interactive:(_Bool)arg6 enqueuedByAnotherUser:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000100082458
+ (_Bool)_setManifest:(id)arg1 queueType:(long long)arg2 startPlayback:(_Bool)arg3 forceLocal:(_Bool)arg4 reason:(unsigned long long)arg5 interactive:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000001000822f0
+ (_Bool)_setPlaybackQueueForMyPodcastsWithOrder:(long long)arg1 startPlayback:(_Bool)arg2 forceLocal:(_Bool)arg3 reason:(unsigned long long)arg4 interactive:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100082028
+ (long long)subscribeCommandStatusForErrorCode:(long long)arg1;	// IMP=0x0000000100082008
+ (long long)queueCommandStatusForRequestStatus:(long long)arg1 queueType:(long long)arg2;	// IMP=0x0000000100081fe8
+ (_Bool)setAutoResumePlaybackQueueAndStartPlayback:(_Bool)arg1 forceLocal:(_Bool)arg2 reason:(unsigned long long)arg3 interactive:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100081fb8
+ (_Bool)subscribeWithCommandURL:(id)arg1 siriAssetInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100081b70
+ (_Bool)setPlaybackQueueFromURL:(id)arg1 siriAssetInfo:(id)arg2 enqueuerDSID:(id)arg3 startPlayback:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100081584
+ (_Bool)isSubscribeCommandURL:(id)arg1;	// IMP=0x0000000100081570
+ (_Bool)isSetPlaybackQueueURL:(id)arg1;	// IMP=0x000000010008155c

@end

