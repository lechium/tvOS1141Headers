/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSNetServiceDelegate.h>

@protocol HMFNetServiceDelegate, OS_dispatch_queue;
@class NSString, NSArray, NSMutableDictionary, NSNetService, HMFNetAddress, NSObject, NSMutableArray, NSDictionary;

@interface HMFNetService : HMFObject <NSNetServiceDelegate> {

	NSString* _type;
	NSString* _name;
	NSString* _domain;
	unsigned long long _port;
	NSArray* _addresses;
	NSMutableDictionary* _TXTRecord;
	NSNetService* _internal;
	BOOL _resolving;
	HMFNetAddress* _hostName;
	id<HMFNetServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSMutableArray* _resolveBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * resolveBlocks;                          //@synthesize resolveBlocks=_resolveBlocks - In the implementation block
@property (assign,getter=isResolving,nonatomic) BOOL resolving;                         //@synthesize resolving=_resolving - In the implementation block
@property (nonatomic,readonly) NSNetService * internal;                                 //@synthesize internal=_internal - In the implementation block
@property (__weak) id<HMFNetServiceDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long port; 
@property (copy,readonly) HMFNetAddress * hostName;                                     //@synthesize hostName=_hostName - In the implementation block
@property (copy,readonly) NSArray * addresses; 
@property (nonatomic,copy,readonly) NSString * domain;                                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * TXTRecord; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)errorFromNetServiceErrorDict:(id)arg1 ;
-(HMFNetAddress *)hostName;
-(void)setHostname:(id)arg1 ;
-(id)init;
-(id<HMFNetServiceDelegate>)delegate;
-(void)setDelegate:(id<HMFNetServiceDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(NSString *)type;
-(NSString *)domain;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(unsigned long long)port;
-(id)initWithNetService:(id)arg1 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(NSArray *)addresses;
-(void)setAddresses:(NSArray *)arg1 ;
-(void)updateTXTRecordWithData:(id)arg1 ;
-(void)notifyUpdatedAddresses:(id)arg1 ;
-(void)notifyUpdatedTXTRecord:(id)arg1 ;
-(void)setTXTRecord:(NSDictionary *)arg1 ;
-(void)removeAllTXTRecordObjects;
-(id)bestAddress;
-(void)_reallyResolveWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableArray *)resolveBlocks;
-(NSNetService *)internal;
-(void)startMonitoring;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)confirmWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)TXTRecord;
-(void)resolveWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isResolving;
-(void)setResolving:(BOOL)arg1 ;
@end

