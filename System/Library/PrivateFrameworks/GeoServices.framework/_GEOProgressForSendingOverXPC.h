/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/_GEOMirroredProgress.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _remoteConnections;

}

@property (readonly) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(id)initWithMirroredProgress:(id)arg1 ;
-(id)initWithMirroredProgress:(id)arg1 endpoint:(id)arg2 ;
-(void)_broadcastOverXPCConnections:(id)arg1 ;
-(void)_connectionDidInvalidate;
-(void)cancel;
-(void)dealloc;
-(void)_update;
-(NSObject*<OS_xpc_object>)endpoint;
@end

