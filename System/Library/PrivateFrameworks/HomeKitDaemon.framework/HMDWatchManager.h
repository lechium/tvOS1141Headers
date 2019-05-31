/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol HMDWatchManagerDelegate, OS_dispatch_queue;
@class NSMutableSet, NSObject, IDSService, NSArray, NSString;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate> {

	NSMutableSet* _connectedWatches;
	BOOL _pairedWithWatch;
	id<HMDWatchManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	IDSService* _service;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                    //@synthesize service=_service - In the implementation block
@property (getter=isPairedWithWatch) BOOL pairedWithWatch;                              //@synthesize pairedWithWatch=_pairedWithWatch - In the implementation block
@property (__weak) id<HMDWatchManagerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * watches; 
@property (nonatomic,copy,readonly) NSArray * connectedWatches; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
+(BOOL)isCompatibleWatchDevice:(id)arg1 ;
-(IDSService *)service;
-(id)init;
-(id<HMDWatchManagerDelegate>)delegate;
-(void)setDelegate:(id<HMDWatchManagerDelegate>)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isPairedWithWatch;
-(NSArray *)connectedWatches;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 connectedDevicesChanged:(id)arg2 ;
-(void)__initializeConnectedDevices;
-(void)_updateConnectedDevices:(id)arg1 ;
-(void)notifyDelegateOfAddedConnectedWatch:(id)arg1 ;
-(void)notifyDelegateOfRemovedConnectedWatch:(id)arg1 ;
-(void)removeConnectedWatch:(id)arg1 ;
-(void)addConnectedWatch:(id)arg1 ;
-(NSArray *)watches;
-(void)setPairedWithWatch:(BOOL)arg1 ;
-(id)connectedWatchFromDeviceID:(id)arg1 ;
@end

