/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDAppleMediaAccessory, NSSet, NSObject, HMFMessageDispatcher, NSString;

@interface HMDAccessorySymptomHandler : HMFObject <NSSecureCoding, HMFLogging, HMDHomeMessageReceiver> {

	BOOL _canInitiateFix;
	int _deviceProblemNotificationToken;
	NSUUID* _uuid;
	HMDAppleMediaAccessory* _accessory;
	NSSet* _currentSymptoms;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	long long _fixState;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDAppleMediaAccessory * accessory;                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSSet * currentSymptoms;                                         //@synthesize currentSymptoms=_currentSymptoms - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic) int deviceProblemNotificationToken;                              //@synthesize deviceProblemNotificationToken=_deviceProblemNotificationToken - In the implementation block
@property (assign,nonatomic) BOOL canInitiateFix;                                             //@synthesize canInitiateFix=_canInitiateFix - In the implementation block
@property (assign,nonatomic) long long fixState;                                              //@synthesize fixState=_fixState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSUUID *)uuid;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMDAppleMediaAccessory *)accessory;
-(void)auditAccessoryStatus;
-(void)_auditAccessoryStatus;
-(NSSet *)currentSymptoms;
-(void)_updateStatus:(id)arg1 ;
-(void)setCurrentSymptoms:(NSSet *)arg1 ;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(BOOL)isValidToken;
-(int)deviceProblemNotificationToken;
-(void)setDeviceProblemNotificationToken:(int)arg1 ;
-(void)_registerMessages;
-(void)_handleFixErrorMessage:(id)arg1 ;
-(void)_handleNewProblemFlags:(unsigned long long)arg1 ;
-(BOOL)canInitiateFix;
-(long long)fixState;
-(id)initWithAccessory:(id)arg1 symptoms:(id)arg2 ;
-(void)setCanInitiateFix:(BOOL)arg1 ;
-(void)setFixState:(long long)arg1 ;
-(void)problemFlagsChangedTo:(unsigned long long)arg1 ;
-(void)_handleAccessoryStatus:(id)arg1 message:(id)arg2 ;
@end

