/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriCoreConnectionProvider <NSObject>
@required
+(void)getMetricsContext:(/*^block*/id)arg1;
-(id)connectionType;
-(void)readData:(/*^block*/id)arg1;
-(void)setDelegate:(id)arg1;
-(id)initWithQueue:(id)arg1;
-(void)close;
-(void)writeData:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isMultipath;
-(BOOL)isCanceled;
-(BOOL)isReady;
-(id)analysisInfo;
-(BOOL)supportsInitialPayload;
-(void)openConnectionForURL:(id)arg1 withConnectionId:(id)arg2 initialPayload:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)hasActiveConnection;
-(id)headerDataWithForceReconnect:(BOOL)arg1;
-(BOOL)shouldFallbackQuickly;
-(void)updateConnectionMetrics:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)isPeerConnectionError:(id)arg1;
-(BOOL)isPeerNotNearbyError:(id)arg1;
-(BOOL)isNetworkDownError:(id)arg1;
-(BOOL)shouldFallbackFromError:(id)arg1;
-(id)resolvedHost;
-(void)setProviderConnectionPolicy:(id)arg1;
-(void)setPolicyRoute:(id)arg1;
-(void)setPrefersWWAN:(BOOL)arg1;
-(void)setConnectByPOPMethod:(BOOL)arg1;
-(void)setEnforceExtendedValidation:(BOOL)arg1;
-(BOOL)providerStatsIndicatePoorLinkQuality;
-(BOOL)isEstablishing;

@end
