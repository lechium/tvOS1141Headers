/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject {

	NSDictionary* _parameters;
	/*^block*/id _reply;
	NSXPCConnection* _connection;

}

@property (retain) NSDictionary * parameters;                 //@synthesize parameters=_parameters - In the implementation block
@property (copy) id reply;                                    //@synthesize reply=_reply - In the implementation block
@property (__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setReply:(id)arg1 ;
-(id)reply;
@end

