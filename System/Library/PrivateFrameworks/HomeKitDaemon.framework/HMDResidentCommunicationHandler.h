/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSMutableArray, HMFTimer, NSUUID, HMDCentralMessageDispatcher, HMDDevice, NSString;

@interface HMDResidentCommunicationHandler : HMFObject <HMFLogging, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMapTable* _deviceMapping;
	NSMutableArray* _pendingReadRequests;
	NSMapTable* _dispatchedReadRequests;
	HMFTimer* _multiReadCoalesceTimer;
	NSUUID* _homeUUID;
	HMDCentralMessageDispatcher* _remoteDispatcher;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * deviceMapping;                                           //@synthesize deviceMapping=_deviceMapping - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingReadRequests;                               //@synthesize pendingReadRequests=_pendingReadRequests - In the implementation block
@property (nonatomic,readonly) NSMapTable * dispatchedReadRequests;                                //@synthesize dispatchedReadRequests=_dispatchedReadRequests - In the implementation block
@property (nonatomic,retain) HMFTimer * multiReadCoalesceTimer;                                    //@synthesize multiReadCoalesceTimer=_multiReadCoalesceTimer - In the implementation block
@property (nonatomic,readonly) NSUUID * homeUUID;                                                  //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,__weak,readonly) HMDCentralMessageDispatcher * remoteDispatcher;              //@synthesize remoteDispatcher=_remoteDispatcher - In the implementation block
@property (nonatomic,readonly) HMDDevice * preferredDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)_clearAllGeneratedRequests:(id)arg1 error:(id)arg2 ;
+(void)_clearAllPendingRequests:(id)arg1 error:(id)arg2 ;
+(void)_processResponseForMultireadRequest:(id)arg1 overallError:(id)arg2 response:(id)arg3 ;
+(id)createResponseSubset:(id)arg1 overallError:(id)arg2 readRequest:(id)arg3 error:(id*)arg4 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)dealloc;
-(NSString *)description;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)homeUUID;
-(NSMutableArray *)pendingReadRequests;
-(NSMapTable *)dispatchedReadRequests;
-(id)deviceForType:(long long)arg1 ;
-(void)_removeDeviceForType:(long long)arg1 ;
-(NSMapTable *)deviceMapping;
-(long long)preferredDeviceType;
-(HMDDevice *)preferredDevice;
-(HMDCentralMessageDispatcher *)remoteDispatcher;
-(HMFTimer *)multiReadCoalesceTimer;
-(void)setMultiReadCoalesceTimer:(HMFTimer *)arg1 ;
-(void)_sendMultipleCharacteristicRead;
-(void)_processResponse:(id)arg1 overallError:(id)arg2 messageIdentifier:(id)arg3 ;
-(id)initWithHomeUUID:(id)arg1 remoteDispatcher:(id)arg2 ;
-(void)setDevice:(id)arg1 forType:(long long)arg2 ;
-(void)removeDeviceForType:(long long)arg1 ;
-(BOOL)containsDevice:(id)arg1 ;
-(void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 ;
-(void)setDeviceMapping:(NSMapTable *)arg1 ;
@end
