/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BYBuddyDaemonProximityTargetProtocol <NSObject>
@required
-(void)proximititySetupCompleted:(id)arg1;
-(void)displayProximityPinCode:(id)arg1 visual:(BOOL)arg2;
-(void)dismissProximityPinCode;
-(void)proximityConnectionPreparing:(id)arg1;
-(void)proximityConnectionInitiated;
-(void)proximityConnectionTerminated;
-(void)receivedLanguage:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4;

@end

