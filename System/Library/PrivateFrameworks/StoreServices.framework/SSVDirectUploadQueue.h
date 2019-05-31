/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SSXPCConnection, NSHashTable, NSArray, NSMutableArray;

@interface SSVDirectUploadQueue : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	int _daemonLaunchToken;
	SSXPCConnection* _inboundConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	SSXPCConnection* _outboundConnection;
	NSArray* _uploadKinds;
	NSMutableArray* _uploads;

}

@property (copy,readonly) NSArray * uploadKinds; 
-(id)init;
-(void)dealloc;
-(id)initWithUploadKinds:(id)arg1 ;
-(void)_establishInboundConnection;
-(void)_sendSimpleMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_outboundConnection;
-(void)_handleInboundMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendObserversUploadsDidChange;
-(void)_handleAddUploadsMessage:(id)arg1 ;
-(void)_handleChangeUploadsMessage:(id)arg1 ;
-(void)_handleRemoveUploadsMessage:(id)arg1 ;
-(void)addUploadObserver:(id)arg1 ;
-(void)cancelAllUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelUploads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseAllUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)pauseUploads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeUploadObserver:(id)arg1 ;
-(void)resumeAllUploadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)resumeUploads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSArray *)uploadKinds;
@end

