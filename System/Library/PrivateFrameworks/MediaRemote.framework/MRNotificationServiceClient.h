/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRMediaRemoteServiceClient;

@interface MRNotificationServiceClient : NSObject {

	MRMediaRemoteServiceClient* _serviceClient;

}
-(id)initWithServiceClient:(id)arg1 ;
-(void)registerCallbacks;
-(BOOL)_shouldPostNotifications;
-(void)_processActivePlayerPathChanges:(id)arg1 ;
-(void)_processActiveOriginChanges:(id)arg1 ;
-(void)_dispatchAsychWithPriority:(/*^block*/id)arg1 ;
-(void)_processOriginChanges:(id)arg1 ;
-(void)_notificationFired:(id)arg1 originNotification:(id)arg2 nowPlayingNotification:(id)arg3 ;
-(void)_processActiveApplicationChanges:(id)arg1 ;
-(void)_processApplicationChanges:(id)arg1 ;
-(void)_notificationFired:(id)arg1 playerPathNotifcation:(id)arg2 originNotification:(id)arg3 nowPlayingNotification:(id)arg4 ;
-(void)_processActivePlayerChanges:(id)arg1 ;
-(void)_processPlayerChanges:(id)arg1 ;
-(void)_handleActiveOriginDidChangeNotification:(id)arg1 ;
-(void)_handleOriginDidRegisterNotification:(id)arg1 ;
-(void)_handleOriginDidUnregisterNotification:(id)arg1 ;
-(void)_handleActiveApplicationDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationDidRegisterNotification:(id)arg1 ;
-(void)_handleApplicationDidUnregisterNotification:(id)arg1 ;
-(void)_handleAnyApplicationIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationClientStateDidChangeNotification:(id)arg1 ;
-(void)_handleApplicationDisplayNameDidChangeNotification:(id)arg1 ;
-(void)_handleActivePlayerDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerDidRegisterNotification:(id)arg1 ;
-(void)_handlePlayerDidUnregisterNotification:(id)arg1 ;
-(void)_handlePlayerPlaybackQueueDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerContentItemsDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerContentItemArtworkDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerSupportedCommandsDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerNowPlayingInfoDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerPlaybackStateDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1 ;
-(void)_handlePlayerStateDidChangeNotification:(id)arg1 ;
-(void)_handleDeviceInfoDidChangeNotification:(id)arg1 ;
-(void)_handleActiveSystemEndpointDidChangeNotification:(id)arg1 ;
@end

