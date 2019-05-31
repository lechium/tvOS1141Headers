/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCListener, NSString;

@interface TVCKSearchAppService : NSObject <NSXPCListenerDelegate> {

	BOOL _started;
	NSObject*<OS_dispatch_queue> _acceptSerialQueue;
	NSMutableSet* _activeConnections;
	NSXPCListener* _serviceListener;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> acceptSerialQueue;              //@synthesize acceptSerialQueue=_acceptSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeConnections;                            //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,retain) NSXPCListener * serviceListener;                             //@synthesize serviceListener=_serviceListener - In the implementation block
@property (assign,getter=isStarted,nonatomic) BOOL started;                               //@synthesize started=_started - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isStarted;
-(NSXPCListener *)serviceListener;
-(id)_init;
-(void)start;
-(void)setStarted:(BOOL)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setAcceptSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActiveConnections:(NSMutableSet *)arg1 ;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_dispatch_queue>)acceptSerialQueue;
-(NSMutableSet *)activeConnections;
-(void)_handleInvalidationForConnection:(id)arg1 ;
@end

