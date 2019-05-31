//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZUniversalPlaybackPositionTransactionContext.h"

@class NSMutableDictionary, NSString;

@interface MTUniversalPlaybackPositionTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext>
{
    NSMutableDictionary *_mediaItems;	// 8 = 0x8
    double _syncStartTime;	// 16 = 0x10
}

+ (id)UPPDomainVersion;	// IMP=0x00000001000890b8
+ (void)setUPPDomainVersion:(id)arg1;	// IMP=0x0000000100089014
@property(nonatomic) double syncStartTime; // @synthesize syncStartTime=_syncStartTime;
@property(retain, nonatomic) NSMutableDictionary *mediaItems; // @synthesize mediaItems=_mediaItems;
- (void).cxx_destruct;	// IMP=0x0000000100089184
- (id)lastSyncedDomainVersion;	// IMP=0x000000010008911c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

