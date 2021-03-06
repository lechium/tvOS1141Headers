/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBSettingsGatewayClientInterface <NSObject>
@required
-(void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2 activeQuietModeAssertionCount:(unsigned long long)arg3;
-(void)behaviorOverrideStatusChanged:(long long)arg1 source:(unsigned long long)arg2;
-(void)privilegedSenderTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)privilegedSenderAddressBookGroupRecordIDChanged:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
-(void)behaviorOverridesChanged:(id)arg1 source:(unsigned long long)arg2;
-(void)behaviorOverridesEffectiveWhileUnlockedChanged:(BOOL)arg1 source:(unsigned long long)arg2;

@end

