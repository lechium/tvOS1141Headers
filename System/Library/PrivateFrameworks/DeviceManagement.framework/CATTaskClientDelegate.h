/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTaskClientDelegate <NSObject>
@optional
-(void)clientDidDisconnect:(id)arg1;
-(void)clientWillInvalidate:(id)arg1;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)clientDidConnect:(id)arg1;
-(void)clientDidInvalidate:(id)arg1;

@required
-(void)client:(id)arg1 didInterruptWithError:(id)arg2;

@end

