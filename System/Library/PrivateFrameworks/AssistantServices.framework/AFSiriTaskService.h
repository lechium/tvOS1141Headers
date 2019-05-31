/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCListener, AFSiriTaskDeliveryHandler, NSString;

@interface AFSiriTaskService : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	AFSiriTaskDeliveryHandler* _deliveryHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_machServiceNameForAppTaskServiceWithBundleIdentifier:(id)arg1 ;
+(id)appTaskService;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

