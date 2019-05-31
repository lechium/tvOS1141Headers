/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>

@class GEOLogContext, NSHashTable, NSLock, NSString;

@interface GEOLogger : NSObject <GEOExperimentConfigurationObserver> {

	GEOLogContext* _cachedLogContext;
	NSHashTable* _logContextDelegates;
	NSLock* _logContextDelegatesLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerQueue;
+(void)executeLoggerBlock:(/*^block*/id)arg1 ;
+(id)sharedLogger;
-(void)registerLogMsgState:(id)arg1 ;
-(void)unregisterLogMsgStateOfType:(int)arg1 ;
-(id)sharedLogManagerInstance;
-(void)captureLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 ;
-(void)captureLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 withLogContext:(id)arg3 ;
-(void)_captureLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 withMergedContext:(id)arg3 ;
-(void)_generateAndQueueLogMessagesForLogMsgEvent:(id)arg1 userSessionSnapshot:(id)arg2 currentContext:(id)arg3 ;
-(id)_cachedStateOfType:(int)arg1 ;
-(void)cachedStateOfType:(int)arg1 getCachedStateOfTypeBlock:(/*^block*/id)arg2 ;
-(void)registerLogMsgStatesInContext:(id)arg1 ;
-(void)registerLogContextDelegate:(id)arg1 ;
-(void)unregisterLogContextDelegate:(id)arg1 ;
-(void)unregisterAllLogContextDelegates;
-(id)init;
-(void)dealloc;
@end

