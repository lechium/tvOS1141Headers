/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCConnectionHealthMonitor : NSObject {

	opaque_pthread_rwlock_t _stateRWLock;
	unsigned char _lastReportedIndex;
	ConnectionStats _currentReceivingStats;
	ConnectionStatsHistory _statsHistory;
	opaque_pthread_rwlock_t _peerStateRWLock;
	ConnectionStatsHistory _peerStatsHistory;
	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign) id<VCConnectionHealthMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<VCConnectionHealthMonitorDelegate>)delegate;
-(void)setDelegate:(id<VCConnectionHealthMonitorDelegate>)arg1 ;
-(void)dealloc;
-(void)updateReceiveStats;
-(unsigned)generateStatsBlob;
-(void)processPeerStatsBlob:(unsigned)arg1 ;
-(void)receiveNewPacket:(BOOL)arg1 ;
-(void)resetConnectionStats:(BOOL)arg1 ;
-(void)updateStatsHistory;
-(void)updateRatiosForHistory:(ConnectionStatsHistory*)arg1 withIndex:(int)arg2 ;
-(void)reportConnectionHealthWithStatsHistory:(ConnectionStatsHistory*)arg1 index:(int)arg2 isPeerStats:(BOOL)arg3 ;
-(void)resetHistory:(ConnectionStatsHistory*)arg1 ;
-(BOOL)isPrimaryConnectionImprovedFromHistory:(ConnectionStatsHistory*)arg1 withIndex:(int)arg2 ;
-(BOOL)isHistoryImproved:(char*)arg1 currentIndex:(int)arg2 ;
-(BOOL)isHistoryValid:(char*)arg1 ;
@end

