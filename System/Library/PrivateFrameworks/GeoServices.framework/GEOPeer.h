/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, NSObject;
@class GEODaemon, NSObject, GEOProxyClient, NSString, NSMutableDictionary;

@interface GEOPeer : NSObject {

	GEODaemon* _daemon;
	NSObject*<OS_xpc_object> _connection;
	GEOProxyClient* _clientIdentifier;
	BOOL _preloading;
	BOOL _preloadingExclusively;
	NSString* _peerID;
	NSString* _debugIdentifier;
	NSMutableDictionary* _entitlementCache;
	id<NSObject> _peerTransaction;
	id<NSObject> _preloadingTransaction;

}

@property (nonatomic,copy) NSString * debugIdentifier;                            //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * entitlementCache;              //@synthesize entitlementCache=_entitlementCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * peerID;                                 //@synthesize peerID=_peerID - In the implementation block
@property (assign,nonatomic) BOOL preloading;                                     //@synthesize preloading=_preloading - In the implementation block
@property (assign,nonatomic) BOOL preloadingExclusively;                          //@synthesize preloadingExclusively=_preloadingExclusively - In the implementation block
@property (nonatomic,readonly) BOOL isLocationd; 
@property (nonatomic,readonly) GEOProxyClient * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(NSString *)bundleVersion;
-(void)_handleEvent:(id)arg1 ;
-(GEOProxyClient *)clientIdentifier;
-(NSString *)peerID;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)initWithConnection:(id)arg1 daemon:(id)arg2 ;
-(BOOL)isLocationd;
-(void)setPreloading:(BOOL)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)preloading;
-(BOOL)preloadingExclusively;
-(void)setPreloadingExclusively:(BOOL)arg1 ;
-(NSString *)debugIdentifier;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)entitlementCache;
-(void)setEntitlementCache:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSObject*<OS_xpc_object>)connection;
@end

