/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/DMFConfigurationSourceClientInterface.h>

@protocol DMFConfigurationSourceClientDelegate, OS_dispatch_queue;
@class DMFStatusReportingRequirements, DMFConnection, NSXPCListener, NSXPCConnection, DMFRegisterConfigurationSourceRequest, NSObject, CATOperationQueue, NSString;

@interface DMFConfigurationSourceClient : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate, DMFConfigurationSourceClientInterface> {

	BOOL _invalid;
	id<DMFConfigurationSourceClientDelegate> _delegate;
	DMFStatusReportingRequirements* _statusReportingRequirements;
	DMFConnection* _connection;
	NSXPCListener* _listener;
	NSXPCConnection* _incomingConnection;
	DMFRegisterConfigurationSourceRequest* _registrationRequest;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,retain) DMFConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * incomingConnection;                                      //@synthesize incomingConnection=_incomingConnection - In the implementation block
@property (assign,getter=isInvalid,nonatomic) BOOL invalid;                                             //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) DMFRegisterConfigurationSourceRequest * registrationRequest;               //@synthesize registrationRequest=_registrationRequest - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                  //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) CATOperationQueue * operationQueue;                                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic,__weak) id<DMFConfigurationSourceClientDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) DMFStatusReportingRequirements * statusReportingRequirements;              //@synthesize statusReportingRequirements=_statusReportingRequirements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)machService;
-(id)init;
-(void)invalidate;
-(id<DMFConfigurationSourceClientDelegate>)delegate;
-(void)setDelegate:(id<DMFConfigurationSourceClientDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)name;
-(void)resume;
-(void)setOperationQueue:(CATOperationQueue *)arg1 ;
-(CATOperationQueue *)operationQueue;
-(DMFConnection *)connection;
-(void)setConnection:(DMFConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(void)operationDidStart:(id)arg1 ;
-(DMFStatusReportingRequirements *)statusReportingRequirements;
-(void)setStatusReportingRequirements:(DMFStatusReportingRequirements *)arg1 ;
-(id)initWithConnection:(id)arg1 organizationIdentifier:(id)arg2 displayName:(id)arg3 localMachServiceName:(id)arg4 ;
-(DMFRegisterConfigurationSourceRequest *)registrationRequest;
-(void)registerConfigurationSource;
-(NSXPCConnection *)incomingConnection;
-(void)registrationOperationDidFinish:(id)arg1 ;
-(void)statusReportingOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assetResolutionOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIncomingConnection:(NSXPCConnection *)arg1 ;
-(void)enqueueOperationToReportStatusChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enqueueOperationToResolveAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)probe:(/*^block*/id)arg1 ;
-(void)configurationStatusDidChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)configurationEngineRequestedAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRegistrationRequest:(DMFRegisterConfigurationSourceRequest *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)isInvalid;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

