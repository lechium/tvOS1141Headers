//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AirPlayReceiverUIDelegate.h"
#import "TVAirPlaySessionDelegate.h"

@class NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface TVAirPlayReceiverDelegate : NSObject <AirPlayReceiverUIDelegate, TVAirPlaySessionDelegate>
{
    NSObject<OS_dispatch_queue> *_receiverQueue;	// 8 = 0x8
    NSNumber *_audioSessionID;	// 16 = 0x10
    double _lastElapsedTime;	// 24 = 0x18
    double _lastDuration;	// 32 = 0x20
}

+ (int)_allowInterruption:(id *)arg1;	// IMP=0x000000010000f890
@property(readonly, nonatomic) double lastDuration; // @synthesize lastDuration=_lastDuration;
@property(readonly, nonatomic) double lastElapsedTime; // @synthesize lastElapsedTime=_lastElapsedTime;
@property(copy, nonatomic) NSNumber *audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *receiverQueue; // @synthesize receiverQueue=_receiverQueue;
- (void).cxx_destruct;	// IMP=0x000000010000f8f8
- (void)session:(id)arg1 didPerformEvent:(id)arg2 withInfo:(id)arg3;	// IMP=0x000000010000f6c0
- (int)airplayUIStopVideo:(id)arg1;	// IMP=0x000000010000f2c4
- (int)airplayUIStartVideo:(id)arg1 outputParams:(id *)arg2;	// IMP=0x000000010000eb74
- (int)airplayUIUpdateAudioProgress:(double)arg1 duration:(double)arg2;	// IMP=0x000000010000e7fc
- (int)airplayUIUpdateAudioMetaData:(id)arg1;	// IMP=0x000000010000e7f4
- (int)airplayUIStopAudio:(id)arg1;	// IMP=0x000000010000e3f8
- (int)airplayUIStartAudio:(id)arg1 outputParams:(id *)arg2;	// IMP=0x000000010000deac
- (void)airplayUIActivity;	// IMP=0x000000010000de64
- (int)airplayUIHideProgress;	// IMP=0x000000010000dba4
- (int)airplayUIShowProgress;	// IMP=0x000000010000d8e4
- (int)airplayUIStopPresentation:(id)arg1;	// IMP=0x000000010000d4e8
- (int)airplayUIStartPresentation:(id)arg1 outputParams:(id *)arg2;	// IMP=0x000000010000cdcc
- (int)airplayUIPerform:(id)arg1 inputParams:(id)arg2 outputParams:(id *)arg3;	// IMP=0x000000010000c4b4
- (int)airplayUISetProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;	// IMP=0x000000010000c030
- (id)airplayUIGetProperty:(id)arg1 qualifier:(id)arg2 error:(int *)arg3;	// IMP=0x000000010000bbc4
- (id)init;	// IMP=0x000000010000bac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
