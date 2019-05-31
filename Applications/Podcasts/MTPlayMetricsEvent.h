//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItemAccessLogEvent, MTEpisodeMetricDataSource;

@interface MTPlayMetricsEvent : NSObject
{
    _Bool _recorded;	// 8 = 0x8
    AVPlayerItemAccessLogEvent *_accessLogEvent;	// 16 = 0x10
    MTEpisodeMetricDataSource *_dataSource;	// 24 = 0x18
}

+ (id)eventWithAccessLog:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000001000970e8
@property(nonatomic, getter=isRecorded) _Bool recorded; // @synthesize recorded=_recorded;
@property(retain, nonatomic) MTEpisodeMetricDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) AVPlayerItemAccessLogEvent *accessLogEvent; // @synthesize accessLogEvent=_accessLogEvent;
- (void).cxx_destruct;	// IMP=0x0000000100097d8c
- (id)description;	// IMP=0x0000000100097c18
- (unsigned long long)hash;	// IMP=0x0000000100097b8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100097a38
- (id)_data;	// IMP=0x0000000100097324
- (void)record;	// IMP=0x0000000100097254
- (id)initWithAccessLogEvent:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000100097174

@end

