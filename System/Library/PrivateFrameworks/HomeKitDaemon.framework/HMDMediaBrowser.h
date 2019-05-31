/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDMediaBrowserDelegate, OS_dispatch_queue;
@class NSMutableSet, HMDHomeManager, NSObject, HMFTimer, HMFMessageDispatcher, HMDUnassociatedMediaAccessory, NSArray, NSString;

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {

	NSMutableSet* _accessoryAdvertisements;
	BOOL _discoverUnassociatedAccessories;
	BOOL _discoverAssociatedAccessories;
	BOOL _updateAvailableEndpoints;
	id<HMDMediaBrowserDelegate> _delegate;
	HMDHomeManager* _homeManager;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	void* _discoverySession;
	void* _discoverySessionCallbackToken;
	HMFTimer* _discoveryPollTimer;
	NSMutableSet* _identifiersOfAssociatedMediaAccessories;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                          //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                        //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) void* discoverySession;                                            //@synthesize discoverySession=_discoverySession - In the implementation block
@property (assign,nonatomic) void* discoverySessionCallbackToken;                                 //@synthesize discoverySessionCallbackToken=_discoverySessionCallbackToken - In the implementation block
@property (nonatomic,retain) HMFTimer * discoveryPollTimer;                                       //@synthesize discoveryPollTimer=_discoveryPollTimer - In the implementation block
@property (assign,nonatomic) BOOL updateAvailableEndpoints;                                       //@synthesize updateAvailableEndpoints=_updateAvailableEndpoints - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher; 
@property (nonatomic,retain) NSMutableSet * identifiersOfAssociatedMediaAccessories;              //@synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories - In the implementation block
@property (__weak) id<HMDMediaBrowserDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) HMDHomeManager * homeManager;                                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (copy,readonly) HMDUnassociatedMediaAccessory * currentAccessory; 
@property (copy,readonly) NSArray * accessoryAdvertisements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(id<HMDMediaBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaBrowserDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)shortDescription;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSArray *)accessoryAdvertisements;
-(HMDUnassociatedMediaAccessory *)currentAccessory;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(id)dumpDescription;
-(NSMutableSet *)identifiersOfAssociatedMediaAccessories;
-(void)updateAccessories:(id)arg1 ;
-(id)unassociatedAccessoryFromAdvertisementData:(id)arg1 ;
-(void)_startDiscoveringAccessories;
-(void)startDiscoveringAssociatedAccessories;
-(void)stopDiscoveringAssociatedAccessories;
-(void)deregisterAccessories:(id)arg1 ;
-(void)startDiscoveringUnassociatedAccessories;
-(void)stopDiscoveringUnassociatedAccessories;
-(void)setIdentifiersOfAssociatedMediaAccessories:(NSMutableSet *)arg1 ;
-(void)_notifyDelegateOfAddedAdvertisements:(id)arg1 ;
-(void)_notifyDelegateOfRemovedAdvertisements:(id)arg1 ;
-(void)_notifyDelegateOfRemovedSessions:(id)arg1 ;
-(void*)discoverySession;
-(void)checkForUpdatedAvailableEndpoints:(CFArrayRef)arg1 ;
-(void)_handleAvailableEndpoints:(CFArrayRef)arg1 ;
-(void)_removeSessions:(id)arg1 ;
-(void)_removeAdvertisements:(id)arg1 ;
-(void)_stopDiscoveringAccessories;
-(void)_addAdvertisements:(id)arg1 ;
-(void)setUpdateAvailableEndpoints:(BOOL)arg1 ;
-(void)_notifyDelegateOfUpdatedEndpoints:(id)arg1 ;
-(HMFTimer *)discoveryPollTimer;
-(BOOL)updateAvailableEndpoints;
-(void*)discoverySessionCallbackToken;
-(void)setDiscoverySessionCallbackToken:(void*)arg1 ;
-(void)setDiscoveryPollTimer:(HMFTimer *)arg1 ;
@end

