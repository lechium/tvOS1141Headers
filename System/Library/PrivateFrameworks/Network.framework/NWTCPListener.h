/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_tcp_listener;
@class NWEndpoint, NSError, NSObject, NWParameters;

@interface NWTCPListener : NSObject {

	NWEndpoint* _localEndpoint;
	NSError* _error;
	NSObject*<OS_tcp_listener> _internalListener;
	NWParameters* _parameters;
	NWEndpoint* _endpoint;
	id _delegate;

}

@property (retain) NSObject*<OS_tcp_listener> internalListener;              //@synthesize internalListener=_internalListener - In the implementation block
@property (retain) NWParameters * parameters;                                //@synthesize parameters=_parameters - In the implementation block
@property (retain) NWEndpoint * endpoint;                                    //@synthesize endpoint=_endpoint - In the implementation block
@property (__weak) id delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (retain) NWEndpoint * localEndpoint;                               //@synthesize localEndpoint=_localEndpoint - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)handleError:(int)arg1 ;
-(void)cancel;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NWParameters *)parameters;
-(void)setParameters:(NWParameters *)arg1 ;
-(NWEndpoint *)endpoint;
-(id)initWithParameters:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_tcp_listener>)internalListener;
-(void)setInternalListener:(NSObject*<OS_tcp_listener>)arg1 ;
-(void)handleNewConnection:(id)arg1 ;
-(id)initWithLaunchdKey:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)initWithBonjourServiceEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(void)setLocalEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)localEndpoint;
-(void)startInternal;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
@end
