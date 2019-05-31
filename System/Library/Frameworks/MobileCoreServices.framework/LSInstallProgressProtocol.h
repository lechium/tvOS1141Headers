/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LSInstallProgressProtocol <NSObject>
@required
-(void)addObserver;
-(void)_lsPing:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeObserver;
-(void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(BOOL)arg3;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2;

@end

