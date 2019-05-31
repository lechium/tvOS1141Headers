/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCTransportXPCClientProtocol <NSObject>
@required
-(void)propertiesDidChange:(id)arg1 forConnectionWithUUID:(id)arg2 previousProperties:(id)arg3;
-(void)propertiesDidChange:(id)arg1 forEndpointWithUUID:(id)arg2 previousProperties:(id)arg3 connectionUUID:(id)arg4;
-(void)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)authStateDidChange:(int)arg1 forConnectionWithUUID:(id)arg2 previousAuthState:(int)arg3 authType:(int)arg4 connectionIsAuthenticated:(BOOL)arg5 connectionWasAuthenticated:(BOOL)arg6;

@end

