/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CMMotionAlarmManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSMutableDictionary* fAlarms;
	BOOL fListening;

}
+(id)instance;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startListeners;
-(void)_stopListeners;
-(void)_handleAlarmFire:(id)arg1 ;
-(BOOL)_registerAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_launchRemoteAppWithError:(id*)arg1 delegate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_teardown;
@end
