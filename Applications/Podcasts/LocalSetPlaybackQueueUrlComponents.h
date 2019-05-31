//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LocalSetPlaybackQueueUrlComponents : NSObject
{
    unsigned long long _commandType;	// 8 = 0x8
    NSString *_podcastUuid;	// 16 = 0x10
    NSString *_podcastAdamId;	// 24 = 0x18
    NSString *_episodeAdamId;	// 32 = 0x20
    NSString *_stationUuid;	// 40 = 0x28
    long long _playbackOrder;	// 48 = 0x30
}

@property(nonatomic) long long playbackOrder; // @synthesize playbackOrder=_playbackOrder;
@property(retain, nonatomic) NSString *stationUuid; // @synthesize stationUuid=_stationUuid;
@property(retain, nonatomic) NSString *episodeAdamId; // @synthesize episodeAdamId=_episodeAdamId;
@property(retain, nonatomic) NSString *podcastAdamId; // @synthesize podcastAdamId=_podcastAdamId;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
@property(nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
- (void).cxx_destruct;	// IMP=0x00000001000b77bc

@end
