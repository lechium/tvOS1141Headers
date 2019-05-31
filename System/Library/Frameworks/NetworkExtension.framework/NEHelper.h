/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface NEHelper : NSObject {

	NSObject*<OS_xpc_object> _connection;
	/*^block*/id _incomingMessageHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _initMessage;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (readonly) NSObject*<OS_xpc_object> initMessage;              //@synthesize initMessage=_initMessage - In the implementation block
@property (copy) id incomingMessageHandler;                             //@synthesize incomingMessageHandler=_incomingMessageHandler - In the implementation block
-(void)dealloc;
-(id)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithDelegateClassID:(int)arg1 queue:(id)arg2 ;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)setIncomingMessageHandler:(id)arg1 ;
-(id)incomingMessageHandler;
-(NSObject*<OS_xpc_object>)initMessage;
@end

