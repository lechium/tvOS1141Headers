//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSingleton.h"

@class NSString;

@interface MTSiriAnalyticsController : MTSingleton
{
    NSString *_pendingRequest;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *pendingRequest; // @synthesize pendingRequest=_pendingRequest;
- (void).cxx_destruct;	// IMP=0x000000010004642c
- (void)playerRateChanged;	// IMP=0x00000001000461e4
- (void)observePlaybackStartEventForRefId:(id)arg1;	// IMP=0x0000000100046188
- (id)init;	// IMP=0x00000001000460f0

@end
