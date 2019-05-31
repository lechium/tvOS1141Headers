/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RPBroadcastExtensionProtocol.h>
#import <libobjc.A.dylib/RPBroadcastDaemonProtocol.h>

@class NSXPCListener, NSExtension, NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface RPBroadcastExtensionProxy : NSObject <NSXPCListenerDelegate, RPBroadcastExtensionProtocol, RPBroadcastDaemonProtocol> {

	/*^block*/id _serviceInfoHandler;
	/*^block*/id _broadcastURLHandler;
	/*^block*/id _errorHandler;
	NSXPCListener* _listener;
	NSExtension* _broadcastUploadExtension;
	NSXPCConnection* _connection;
	/*^block*/id _connectionReadyHandler;
	NSXPCListenerEndpoint* _listenerEndpoint;

}

@property (nonatomic,retain) NSXPCListener * listener;                              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSExtension * broadcastUploadExtension;                //@synthesize broadcastUploadExtension=_broadcastUploadExtension - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                          //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) id connectionReadyHandler;                               //@synthesize connectionReadyHandler=_connectionReadyHandler - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;              //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,copy) id serviceInfoHandler;                                   //@synthesize serviceInfoHandler=_serviceInfoHandler - In the implementation block
@property (nonatomic,copy) id broadcastURLHandler;                                  //@synthesize broadcastURLHandler=_broadcastURLHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                                         //@synthesize errorHandler=_errorHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)ping;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)invalidateConnection;
-(void)updateServiceInfo:(id)arg1 ;
-(void)updateBroadcastURL:(id)arg1 ;
-(void)finishBroadcastWithError:(id)arg1 ;
-(void)processPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBroadcastUploadExtension:(NSExtension *)arg1 ;
-(void)setConnectionReadyHandler:(id)arg1 ;
-(NSExtension *)broadcastUploadExtension;
-(id)initWithBroadcastUploadExtension:(id)arg1 ;
-(id)initWithBroadcastUploadListenerEndpoint:(id)arg1 ;
-(void)establishConnectionWithHandler:(/*^block*/id)arg1 ;
-(id)serviceInfoHandler;
-(void)setServiceInfoHandler:(id)arg1 ;
-(id)broadcastURLHandler;
-(void)setBroadcastURLHandler:(id)arg1 ;
-(id)connectionReadyHandler;
@end

