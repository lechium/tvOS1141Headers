//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVItem, MPCPlaybackEngine, NSError;

@protocol MPCPlaybackEngineDelegate <NSObject>

@optional
- (void)engine:(MPCPlaybackEngine *)arg1 requiresAuthorizationToPlayItem:(MPAVItem *)arg2 authorizationHandler:(void (^)(_Bool, NSError *))arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToPlayItem:(MPAVItem *)arg2 withError:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToPlayFirstItem:(MPAVItem *)arg2 withError:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didFailToActivateWithError:(NSError *)arg2 resolution:(void (^)(_Bool))arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 prepareForActivationWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)engineDidPauseForLeaseEnd:(MPCPlaybackEngine *)arg1;
@end

