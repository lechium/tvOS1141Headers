/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcher.h>

@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSXPCListenerEndpoint, NSArray;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher> {

	NSXPCConnection* _connection;
	NSMutableArray* _tokenIDs;
	NSMutableDictionary* _removalHandlers;
	/*^block*/id _insertionHandler;

}

@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) NSArray * tokenIDs; 
-(id)initWithEndpoint:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithConnection:(id)arg1 ;
-(void)insertedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setupWithConnection:(id)arg1 ;
-(void)setInsertionHandler:(/*^block*/id)arg1 ;
-(NSArray *)tokenIDs;
-(id)initWithInsertionHandler:(/*^block*/id)arg1 ;
-(void)addRemovalHandler:(/*^block*/id)arg1 forTokenID:(id)arg2 ;
@end
