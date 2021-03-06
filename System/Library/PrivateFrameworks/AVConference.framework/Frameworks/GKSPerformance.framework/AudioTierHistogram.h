/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, AudioTier, NSObject;

@interface AudioTierHistogram : NSObject {

	NSMutableDictionary* histogram;
	AudioTier* currentTier;
	double startTime;
	NSObject*<OS_dispatch_queue> awdAudioTierQueue;

}
-(id)init;
-(void)dealloc;
-(void)end;
-(id)newReport;
-(void)newAudioTier:(unsigned)arg1 duplication:(unsigned)arg2 bundling:(unsigned)arg3 codecPayload:(unsigned)arg4 codecBitrate:(unsigned)arg5 mode:(unsigned)arg6 ;
-(void)accumulateTime:(double)arg1 forAudioTier:(id)arg2 ;
@end

