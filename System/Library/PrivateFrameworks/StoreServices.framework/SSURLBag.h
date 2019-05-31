/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, SSURLBagContext, NSDictionary, NSObject, NSMutableArray, NSString;

@interface SSURLBag : NSObject {

	SSXPCConnection* _connection;
	SSURLBagContext* _context;
	NSDictionary* _dictionary;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _expirationTime;
	BOOL _ignoreCacheForNextLookup;
	NSMutableArray* _pendingLookups;
	NSString* _storeFrontIdentifier;

}

@property (readonly) SSURLBagContext * URLBagContext; 
+(void)setURLBag:(id)arg1 forContext:(id)arg2 ;
+(id)URLBagForContext:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(SSURLBagContext *)URLBagContext;
-(void)_loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_drainPendingLookupsWithError:(id)arg1 ;
-(void)_loadURLBag;
-(void)getTrustForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)existingBagDictionary;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_connection;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
@end

