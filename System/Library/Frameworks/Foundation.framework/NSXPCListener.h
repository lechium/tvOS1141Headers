/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSXPCListenerDelegate;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) id<NSXPCListenerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)serviceListener;
+(void)enableTransactions;
+(id)_UUID;
+(id)anonymousListener;
-(id)_initShared;
-(void)invalidate;
-(id<NSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(void)suspend;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)stop;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(id)_queue;
-(id)serviceName;
-(void)_setQueue:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)_xpcConnection;
@end

