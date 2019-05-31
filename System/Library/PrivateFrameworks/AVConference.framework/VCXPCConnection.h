/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSData;

@interface VCXPCConnection : NSObject {

	NSObject*<OS_xpc_object> _connection;
	int _pid;
	id context;
	NSData* tokenData;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _isPersistent;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_dispatch_queue> _timeoutTimerQueue;
	BOOL _timeoutTimerStarted;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection; 
@property (assign) int pid; 
@property (nonatomic,retain) id context; 
@property (nonatomic,retain) NSData * tokenData; 
@property (getter=isPersistent) BOOL persistent; 
+(void)selfTerminateDueToTimeout:(int)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isPersistent;
-(void)setPersistent:(BOOL)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(void)startTimeoutTimer;
-(void)stopTimeoutTimer;
-(void)createTimeoutTimer;
-(void)destroyTimeoutTimer;
-(int)pid;
@end

