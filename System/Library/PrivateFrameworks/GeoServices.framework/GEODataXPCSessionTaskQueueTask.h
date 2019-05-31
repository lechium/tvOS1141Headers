/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEODataXPCSessionTaskQueueTask
@property (nonatomic,readonly) unsigned taskQueue; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcRequest; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation; 
@property (nonatomic,readonly) BOOL isCancelled; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity; 
@property (nonatomic,readonly) float taskQueuePriority; 
@property (nonatomic,readonly) double timeoutInterval; 
@required
-(NSObject*<OS_xpc_object>)xpcRequest;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(double)timeoutInterval;
-(void)willSendTask:(/*^block*/id)arg1;
-(void)processResult:(int)arg1 xpcReply:(id)arg2 error:(id)arg3;
-(float)taskQueuePriority;
-(unsigned)taskQueue;
-(BOOL)isCancelled;
-(NSObject*<OS_os_activity>)activity;

@end

