/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStoreServer, NSXPCListener, NSXPCListenerEndpoint;

@interface PLXPCPhotoLibraryStoreContainer : NSObject {

	NSXPCStoreServer* _server;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCStoreServer * server;                             //@synthesize server=_server - In the implementation block
@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
+(id)sharedInstance;
+(id)newDefaultContainer;
-(void)dealloc;
-(NSXPCStoreServer *)server;
-(id)initWithServer:(id)arg1 listener:(id)arg2 ;
-(NSXPCListenerEndpoint *)listenerEndpoint;
@end
