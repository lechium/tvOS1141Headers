/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
@required
-(void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)controlOutputStreamDidOpen:(id)arg1;
-(void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
-(void)controlOutputStreamDidComplete:(id)arg1;

@end
