/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreDESPreferences : NSObject
+(id)sharedPreferences;
-(void)synchronize;
-(BOOL)DESRecordingAlwaysIsEnabled;
-(void)setDESRecordingAlwaysIsEnabled:(BOOL)arg1 ;
-(void)setDESLotteryWinOverrideIsEnabled:(BOOL)arg1 ;
-(BOOL)DESLotteryWinOverrideIsEnabled;
-(id)DESPolicyCDNOverride;
-(void)setDESPolicyCDNOverride:(id)arg1 ;
@end

