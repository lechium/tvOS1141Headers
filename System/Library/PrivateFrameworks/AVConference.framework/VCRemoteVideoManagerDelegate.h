/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCRemoteVideoManagerDelegate <NSObject>
@optional
-(void)remoteVideoServerDidDie;

@required
-(void)releaseQueueForStreamToken:(long long)arg1;
-(void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
-(void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
-(void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
-(void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
-(void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
-(void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;

@end

