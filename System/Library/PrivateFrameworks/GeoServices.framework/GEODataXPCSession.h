/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEODataSession.h>

@protocol OS_dispatch_queue;
@class GEODataXPCSessionTaskQueue, NSObject, NSString;

@interface GEODataXPCSession : NSObject <GEODataSession> {

	GEODataXPCSessionTaskQueue* _taskQueue;
	NSObject*<OS_dispatch_queue> _sessionIsolation;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;              //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (nonatomic,readonly) GEODataXPCSessionTaskQueue * taskQueue;                     //@synthesize taskQueue=_taskQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(id)initWithConnectionManager:(id)arg1 ;
-(void)startTask:(id)arg1 ;
-(void)restartTask:(id)arg1 ;
-(id)init;
-(GEODataXPCSessionTaskQueue *)taskQueue;
@end
