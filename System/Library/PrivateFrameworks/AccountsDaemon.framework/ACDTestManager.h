/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:05 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener, NSString, NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject {

	NSXPCListener* _accountStoreConnectionListener;
	NSXPCListener* _oauthSignerConnectionListener;
	NSXPCListener* _authenticationDialogConnectionListener;
	NSString* _storePath;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteAccountStoreEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint; 
+(id)testServer;
-(id)_pseudoUniqueDatabasePath;
-(void)startTestServer;
-(void)stopTestServer;
-(NSXPCListenerEndpoint *)remoteAccountStoreEndpoint;
-(NSXPCListenerEndpoint *)remoteOAuthSignerEndpoint;
@end

