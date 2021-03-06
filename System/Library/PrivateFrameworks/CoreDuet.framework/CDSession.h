/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDDClientConnection, NSSet, NSMutableDictionary, NSObject, NSArray;

@interface CDSession : NSObject {

	CDDClientConnection* _cddClientConnection;
	NSSet* _deviceList;
	NSMutableDictionary* _cachedAttributes;
	NSMutableDictionary* _cachedBudgets;
	NSObject*<OS_dispatch_queue> _cacheSerializerQ;
	unsigned long long _clientId;
	BOOL _verbose;
	BOOL _enabledCaching;
	int _deviceChangeToken;
	int duetRestartToken;
	NSArray* nonBundles;
	/*^block*/id _deviceHandler;
	BOOL _unlocked;

}

@property (retain) NSSet * deviceList;                                         //@synthesize deviceList=_deviceList - In the implementation block
@property (retain) NSMutableDictionary * cachedAttributes;                     //@synthesize cachedAttributes=_cachedAttributes - In the implementation block
@property (retain) NSMutableDictionary * cachedBudgets;                        //@synthesize cachedBudgets=_cachedBudgets - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> cacheSerializerQ;              //@synthesize cacheSerializerQ=_cacheSerializerQ - In the implementation block
@property (assign) BOOL verbose;                                               //@synthesize verbose=_verbose - In the implementation block
@property (assign) unsigned long long clientId;                                //@synthesize clientId=_clientId - In the implementation block
@property (assign) BOOL enabledCaching;                                        //@synthesize enabledCaching=_enabledCaching - In the implementation block
@property (assign) int deviceChangeToken;                                      //@synthesize deviceChangeToken=_deviceChangeToken - In the implementation block
@property (copy) id deviceHandler;                                             //@synthesize deviceHandler=_deviceHandler - In the implementation block
@property (readonly) CDDClientConnection * cddClientConnection;                //@synthesize cddClientConnection=_cddClientConnection - In the implementation block
@property (assign) BOOL unlocked;                                              //@synthesize unlocked=_unlocked - In the implementation block
+(id)sharedSessionWithClientId:(unsigned long long)arg1 ;
-(void)setClientId:(unsigned long long)arg1 ;
-(unsigned long long)clientId;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setCachedAttributes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedAttributes;
-(CDDClientConnection *)cddClientConnection;
-(int)deviceChangeToken;
-(id)initWithClientId:(unsigned long long)arg1 enableCaching:(BOOL)arg2 ;
-(BOOL)loadDylibs;
-(BOOL)isClassCLocked;
-(void)setUnlocked:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheSerializerQ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 clientId:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSMutableDictionary *)cachedBudgets;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 withOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)attributeComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)attributeFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)getDevicesInternal;
-(id)deviceHandler;
-(BOOL)registerForDeviceChanges;
-(BOOL)setNonAppBundleIdWithError:(id)arg1 error:(id*)arg2 ;
-(id)registerBudgetWithName:(id)arg1 value:(long long)arg2 type:(long long)arg3 error:(id*)arg4 ;
-(BOOL)deleteClientDataWithError:(id*)arg1 ;
-(id)attributeFromFullname:(id)arg1 error:(id*)arg2 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)attributeExtendedComponentsFromRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)getDevices;
-(id)copyDevicesUncached;
-(BOOL)setDevicesChangedHandlerWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)getDeviceFromDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)broadcastSystemDataWithError:(id*)arg1 ;
-(BOOL)setNonAppBundlIdWithError:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActiveComplications:(id)arg1 error:(id*)arg2 ;
-(BOOL)setGlancesLingeredOn:(id)arg1 error:(id*)arg2 ;
-(BOOL)unlocked;
-(void)setCachedBudgets:(NSMutableDictionary *)arg1 ;
-(void)setCacheSerializerQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)enabledCaching;
-(void)setEnabledCaching:(BOOL)arg1 ;
-(void)setDeviceChangeToken:(int)arg1 ;
-(void)setDeviceHandler:(id)arg1 ;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(id)initWithClientId:(unsigned long long)arg1 ;
-(id)attributeForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)budgetForName:(id)arg1 type:(long long)arg2 error:(id*)arg3 ;
-(id)attributeNamesWithError:(id*)arg1 ;
-(id)registerAttributeWithName:(id)arg1 type:(long long)arg2 dataProtectionClass:(id)arg3 error:(id*)arg4 ;
-(id)representationStringFromAttribute:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(id)budgetNamesWithError:(id*)arg1 ;
-(NSSet *)deviceList;
-(void)setDeviceList:(NSSet *)arg1 ;
@end

