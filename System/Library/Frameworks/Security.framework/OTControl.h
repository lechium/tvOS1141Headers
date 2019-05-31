/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface OTControl : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)controlObject:(id*)arg1 ;
-(void)restore:(id)arg1 dsid:(id)arg2 secret:(id)arg3 escrowRecordID:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)signIn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)signOut:(/*^block*/id)arg1 ;
-(void)preflightBottledPeer:(id)arg1 dsid:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)launchBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)scrubBottledPeer:(id)arg1 bottleID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)signingKey:(/*^block*/id)arg1 ;
-(void)encryptionKey:(/*^block*/id)arg1 ;
-(void)listOfRecords:(/*^block*/id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)reset:(/*^block*/id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end
