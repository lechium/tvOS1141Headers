/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTAssetMonitor : VTEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_didReceiveNewAssetAvailable;
-(void)notifyNewAssetDownloaded;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 ;
@end

