/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDSharedHomeUpdateSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMDHome, NSObject, NSMutableArray, HMDSharedHomeUpdateSession, NSString;

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState, NSSecureCoding> {

	BOOL _pendingRequestDataFromResident;
	BOOL _firstFetchComplete;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSMutableArray* _currentResidentDevices;
	HMDSharedHomeUpdateSession* _pendingRequestDataFromResidentSession;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic) BOOL firstFetchComplete;                                                         //@synthesize firstFetchComplete=_firstFetchComplete - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentResidentDevices;                                         //@synthesize currentResidentDevices=_currentResidentDevices - In the implementation block
@property (assign,nonatomic) BOOL pendingRequestDataFromResident;                                             //@synthesize pendingRequestDataFromResident=_pendingRequestDataFromResident - In the implementation block
@property (nonatomic,retain) HMDSharedHomeUpdateSession * pendingRequestDataFromResidentSession;              //@synthesize pendingRequestDataFromResidentSession=_pendingRequestDataFromResidentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)dumpState;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)logIdentifier;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(void)registerForMessages;
-(void)reevaluateNeedForSync;
-(void)residentsChanged:(id)arg1 ;
-(void)handleHomeDataFetchedNotification:(id)arg1 ;
-(void)_updateResidents;
-(void)_startRequestForDataSync;
-(void)setFirstFetchComplete:(BOOL)arg1 ;
-(void)_evaluateNeedForSync;
-(void)setCurrentResidentDevices:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentResidentDevices;
-(void)setPendingRequestDataFromResident:(BOOL)arg1 ;
-(void)setPendingRequestDataFromResidentSession:(HMDSharedHomeUpdateSession *)arg1 ;
-(BOOL)pendingRequestDataFromResident;
-(BOOL)firstFetchComplete;
-(void)_requestDataFromResident:(id)arg1 currentUser:(id)arg2 ;
-(HMDSharedHomeUpdateSession *)pendingRequestDataFromResidentSession;
-(void)requestDataSync;
-(void)_receivedHomeDataFromSourceVersion:(id)arg1 ;
-(void)pendingRequestFromResidentChanged;
-(void)didCompleteHomeUpdateSession:(id)arg1 withError:(id)arg2 ;
-(void)receivedHomeDataFromSourceVersion:(id)arg1 ;
@end

