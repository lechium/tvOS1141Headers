/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSHTTPServerRequestHandlerDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSRunLoop;

@interface SSHTTPServer : NSObject <SSHTTPServerRequestHandlerDelegate> {

	NSMutableDictionary* _definedResponses;
	NSMutableArray* _incomingRequests;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	CFSocketRef _socket;
	NSRunLoop* _runLoop;
	BOOL _allowsSecure;
	BOOL _verbose;
	short _port;
	int _downloadSpeed;
	int _state;
	long long _responsesDelivered;

}

@property (nonatomic,readonly) BOOL allowsSecure;                         //@synthesize allowsSecure=_allowsSecure - In the implementation block
@property (assign,nonatomic) int downloadSpeed;                           //@synthesize downloadSpeed=_downloadSpeed - In the implementation block
@property (assign,nonatomic) short port;                                  //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) long long responsesDelivered;              //@synthesize responsesDelivered=_responsesDelivered - In the implementation block
@property (nonatomic,readonly) int state;                                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL verbose;                                //@synthesize verbose=_verbose - In the implementation block
+(BOOL)_isPortOccupied:(short)arg1 ;
+(void)setBagBaseOverride:(id)arg1 forType:(int)arg2 ;
+(id)_bagBaseOverrideWithOriginal:(id)arg1 isNewBag:(BOOL)arg2 ;
+(id)sharedServer;
-(id)init;
-(void)dealloc;
-(int)state;
-(BOOL)start;
-(void)stop;
-(short)port;
-(id)serverLocalhostURL;
-(void)setResponseForPath:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_ipAddress;
-(void)setDownloadSpeed:(int)arg1 ;
-(/*^block*/id)responseBlockForPath:(id)arg1 ;
-(long long)responsesDelivered;
-(void)interceptBag:(int)arg1 makeRealRequest:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)serverURL;
-(void)_handleConnectWithType:(unsigned long long)arg1 handle:(int)arg2 ;
-(BOOL)allowsSecure;
-(int)downloadSpeed;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)setPort:(short)arg1 ;
@end

