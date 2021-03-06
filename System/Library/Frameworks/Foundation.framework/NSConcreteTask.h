/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTask.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSPort;

@interface NSConcreteTask : NSTask {

	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	NSPort* _tmpPort;
	long long _suspendCount;
	int _pid;
	int _platformExitInfo;
	BOOL _hasExeced;
	BOOL _isRunning;
	BOOL _hasPostedDeathNotification;
	BOOL _terminationRun;
	char _qos;

}
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(id)launchPath;
-(void)setLaunchPath:(id)arg1 ;
-(BOOL)launchWithDictionary:(id)arg1 error:(id*)arg2 ;
-(int)terminationStatus;
-(void)launch;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)interrupt;
-(void)terminate;
-(long long)suspendCount;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(long long)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(BOOL)arg1 ;
-(long long)terminationReason;
-(void)setEnvironment:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)environment;
-(BOOL)isRunning;
-(BOOL)suspend;
-(BOOL)resume;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(/*^block*/id)terminationHandler;
-(long long)qualityOfService;
-(id)arguments;
@end

