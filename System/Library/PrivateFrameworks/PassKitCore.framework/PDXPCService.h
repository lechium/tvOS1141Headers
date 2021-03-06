/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface> {

	NSXPCConnection* _connection;
	NSString* _className;
	BOOL _callbacksSuspended;
	NSObject*<OS_dispatch_queue> _readWriteQueue;
	int _remoteProcessIdentifier;
	NSString* _remoteProcessApplicationIdentifier;

}

@property (nonatomic,readonly) int remoteProcessIdentifier;                                //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;              //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessBundleIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(void)serviceResumed;
-(void)serviceSuspended;
-(id)initWithConnection:(id)arg1 ;
-(void)clearConnectionReference;
-(int)remoteProcessIdentifier;
-(NSString *)remoteProcessBundleIdentifier;
-(NSString *)remoteProcessApplicationIdentifier;
@end

