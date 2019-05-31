/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXPineBoardServer.framework/AXPineBoardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXSystemAppServer <NSObject>
@optional
-(BOOL)isPasscodeLockVisible;

@required
+(id)server;
-(long long)activeInterfaceOrientation;
-(void)rebootDevice;
-(void)pid:(/*^block*/id)arg1;
-(BOOL)isSiriVisible;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isReceivingAirPlay;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)isMediaPlaying;
-(int)pid;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1;
-(BOOL)openSiri;
-(BOOL)dismissSiri;
-(BOOL)isDockVisible;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isControlCenterVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isSiriTalkingOrListening;
-(void)wakeUpDeviceIfNecessary;

@end

