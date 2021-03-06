/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDAccountRegistryDelegate, OS_dispatch_queue;
@class NSMutableSet, HMDAccount, HMDLocalAccountContext, HMDDevice, IDSService, NSObject, HMFExponentialBackoffTimer, HMFTimer, NSArray, NSString;

@interface HMDAccountRegistry : HMFObject <HMFTimerDelegate, IDSServiceDelegate, HMFLogging> {

	NSMutableSet* _accounts;
	BOOL _monitoring;
	BOOL _resolved;
	HMDAccount* _currentAccount;
	HMDLocalAccountContext* _localAccountContext;
	HMDDevice* _currentDevice;
	id<HMDAccountRegistryDelegate> _delegate;
	IDSService* _service;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFExponentialBackoffTimer* _accountChangeBackoffTimer;
	HMFTimer* _devicesChangeBackoffTimer;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                            //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                          //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMFExponentialBackoffTimer * accountChangeBackoffTimer;              //@synthesize accountChangeBackoffTimer=_accountChangeBackoffTimer - In the implementation block
@property (nonatomic,readonly) HMFTimer * devicesChangeBackoffTimer;                                //@synthesize devicesChangeBackoffTimer=_devicesChangeBackoffTimer - In the implementation block
@property (assign,getter=isMonitoring,nonatomic) BOOL monitoring;                                   //@synthesize monitoring=_monitoring - In the implementation block
@property (assign,getter=isResolved,nonatomic) BOOL resolved;                                       //@synthesize resolved=_resolved - In the implementation block
@property (retain) HMDLocalAccountContext * localAccountContext;                                    //@synthesize localAccountContext=_localAccountContext - In the implementation block
@property (assign,nonatomic,__weak) HMDAccount * currentAccount;                                    //@synthesize currentAccount=_currentAccount - In the implementation block
@property (assign,nonatomic,__weak) HMDDevice * currentDevice;                                      //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,retain) NSArray * accounts; 
@property (__weak) id<HMDAccountRegistryDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                                //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRegistry;
+(id)shortDescription;
+(id)logCategory;
-(IDSService *)service;
-(void)stopMonitoring;
-(id)init;
-(id<HMDAccountRegistryDelegate>)delegate;
-(HMDDevice *)currentDevice;
-(void)setDelegate:(id<HMDAccountRegistryDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)shortDescription;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)startMonitoring;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMDAccount *)currentAccount;
-(id)deviceForDestination:(id)arg1 shouldCreate:(BOOL)arg2 ;
-(id)accountForDestination:(id)arg1 shouldCreate:(BOOL)arg2 ;
-(NSArray *)accounts;
-(void)setCurrentDevice:(HMDDevice *)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(HMDLocalAccountContext *)localAccountContext;
-(id)initWithIDSService:(id)arg1 ;
-(HMFExponentialBackoffTimer *)accountChangeBackoffTimer;
-(HMFTimer *)devicesChangeBackoffTimer;
-(void)updateLocalAccountContext;
-(void)updateCurrentAccount;
-(void)notifyDelegateAccountAdded:(id)arg1 ;
-(void)notifyDelegateAccountRemove:(id)arg1 ;
-(void)updateCurrentDevice;
-(void)setCurrentAccount:(HMDAccount *)arg1 ;
-(void)notifyDelegateCurrentDeviceChanged:(id)arg1 ;
-(void)addAccount:(id)arg1 ;
-(BOOL)isMonitoring;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)setResolved:(BOOL)arg1 ;
-(void)_updateLocalAccount;
-(void)_cleanupDevices:(id)arg1 ;
-(void)removeAccount:(id)arg1 ;
-(BOOL)isResolved;
-(void)setLocalAccountContext:(HMDLocalAccountContext *)arg1 ;
-(void)_updateLocalDevices;
@end

