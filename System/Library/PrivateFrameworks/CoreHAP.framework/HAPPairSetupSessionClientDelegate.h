/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPPairSetupSessionClientDelegate <HAPPairSetupSessionDelegate>
@optional
-(void)pairSetupSessionDidReceiveInvalidSetupCode:(id)arg1;
-(BOOL)pairSetupSession:(id)arg1 didReceiveBackoffRequestWithTimeInterval:(double)arg2;

@required
-(void)pairSetupSession:(id)arg1 didReceiveSetupCodeRequestWithCompletionHandler:(/*^block*/id)arg2;

@end

