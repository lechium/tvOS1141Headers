//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTTVPlayerManager : NSObject
{
    id <TVPPlayback><TVPAVFPlayback> _player;	// 8 = 0x8
}

+ (id)defaultPlayer;	// IMP=0x00000001000bc728
+ (id)sharedInstance;	// IMP=0x00000001000bc670
@property(retain, nonatomic) id <TVPPlayback><TVPAVFPlayback> player; // @synthesize player=_player;
- (void).cxx_destruct;	// IMP=0x00000001000bc828
- (id)init;	// IMP=0x00000001000bc784

@end

