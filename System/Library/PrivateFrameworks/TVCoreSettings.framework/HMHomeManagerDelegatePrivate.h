/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>
@optional
-(void)homeManagerWillStartBatchNotifications:(id)arg1;
-(void)homeManagerDidEndBatchNotifications:(id)arg1;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
-(void)homeManagerDidUpdateApplicationData:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
-(void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2;
-(void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2;
-(void)homeManagerDidUpdateDataSyncInProgress:(id)arg1;

@end

