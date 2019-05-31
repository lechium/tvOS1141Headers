/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {

	void* _window;
	NPTunnelFlow* _flow;

}

@property (assign) void* window;                     //@synthesize window=_window - In the implementation block
@property (retain) NPTunnelFlow * flow;              //@synthesize flow=_flow - In the implementation block
-(void)write:(id)arg1 ;
-(void*)window;
-(void)dealloc;
-(void)setWindow:(void*)arg1 ;
-(NPTunnelFlow *)flow;
-(void)setFlow:(NPTunnelFlow *)arg1 ;
-(id)initWithConfiguration:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 appRule:(id)arg4 flowProperties:(id)arg5 delegate:(id)arg6 ;
-(unsigned long long)initialWindowSize;
-(BOOL)addNewFlow:(id)arg1 ;
-(unsigned long long)maxFrameSize;
-(void)createTuscanyClient;
-(unsigned)dayPassSessionCounter;
-(long long)currentMTU;
-(BOOL)selectBestEdge;
-(void)startConnectionTimer;
-(void)cancelConnectionTimer;
-(void)cancelConnection;
-(void)sendUsageReportWithSuccess:(BOOL)arg1 rtt:(unsigned long long)arg2 geohash:(id)arg3 fallbackReason:(long long)arg4 ;
-(void)pingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeFlow:(unsigned long long)arg1 ;
@end

