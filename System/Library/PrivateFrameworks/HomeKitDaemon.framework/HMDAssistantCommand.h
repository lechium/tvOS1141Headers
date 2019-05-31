/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAHACommand.h>
#import <libobjc.A.dylib/AFServiceCommand.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHomeManager, HMDAssistantGather, NSObject, NSArray, NSString, NSUUID, HMDAssistantCommandHelper, HMDHome;

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging> {

	BOOL _completionHandlerCalled;
	HMDHomeManager* _homeManager;
	HMDAssistantGather* _gather;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _homeKitObjects;
	long long _numberOfHomes;
	NSString* _primaryHomeName;
	NSUUID* _primaryHomeUUID;
	NSString* _currentHomeName;
	NSUUID* _currentHomeUUID;
	HMDAssistantCommandHelper* _assistantCommandHelper;
	HMDHome* _home;
	unsigned long long _startTime;

}

@property (nonatomic,retain) HMDAssistantGather * gather;                                     //@synthesize gather=_gather - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * homeKitObjects;                                        //@synthesize homeKitObjects=_homeKitObjects - In the implementation block
@property (assign,nonatomic) long long numberOfHomes;                                         //@synthesize numberOfHomes=_numberOfHomes - In the implementation block
@property (nonatomic,retain) NSString * primaryHomeName;                                      //@synthesize primaryHomeName=_primaryHomeName - In the implementation block
@property (nonatomic,retain) NSUUID * primaryHomeUUID;                                        //@synthesize primaryHomeUUID=_primaryHomeUUID - In the implementation block
@property (nonatomic,retain) NSString * currentHomeName;                                      //@synthesize currentHomeName=_currentHomeName - In the implementation block
@property (nonatomic,retain) NSUUID * currentHomeUUID;                                        //@synthesize currentHomeUUID=_currentHomeUUID - In the implementation block
@property (nonatomic,retain) HMDAssistantCommandHelper * assistantCommandHelper;              //@synthesize assistantCommandHelper=_assistantCommandHelper - In the implementation block
@property (assign,nonatomic) BOOL completionHandlerCalled;                                    //@synthesize completionHandlerCalled=_completionHandlerCalled - In the implementation block
@property (nonatomic,retain) HMDHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                             //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)logCategory;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(unsigned long long)startTime;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)getReportingUnits:(id)arg1 hapCharacteristicType:(id)arg2 attribute:(id)arg3 ;
-(id)convertValue:(id)arg1 fromUnits:(id)arg2 toUnits:(id)arg3 ;
-(id)setValue:(id)arg1 format:(id)arg2 units:(id)arg3 ;
-(BOOL)isAttributeValue:(id)arg1 equalTo:(id)arg2 ;
-(id)serviceFromObject:(id)arg1 ;
-(BOOL)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6 ;
-(id)getLocaleUnits:(id)arg1 ;
-(NSArray *)homeKitObjects;
-(NSString *)currentHomeName;
-(NSUUID *)currentHomeUUID;
-(NSString *)primaryHomeName;
-(NSUUID *)primaryHomeUUID;
-(id)getoverridingHomeUUIDFromName:(id)arg1 ;
-(void)reportOutcome:(id)arg1 results:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)filterObjects:(id)arg1 forRoom:(id)arg2 andZone:(id)arg3 ;
-(id)filterObjects:(id)arg1 forGroup:(id)arg2 ;
-(id)filterObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3 ;
-(void)_logEvent:(id)arg1 ;
-(BOOL)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4 ;
-(void)reportResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)getValueOfType:(id)arg1 action:(id)arg2 ;
-(HMDAssistantCommandHelper *)assistantCommandHelper;
-(void)reportUnlockRequired:(/*^block*/id)arg1 ;
-(id)entityFromActionSet:(id)arg1 ;
-(BOOL)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3 ;
-(void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2 ;
-(id)compareForBoundary:(id)arg1 withMetadata:(id)arg2 ;
-(void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2 ;
-(id)addStatusCharacteristicsIfNeeded:(id)arg1 ;
-(id)readRequestsForCharacteristic:(id)arg1 ;
-(id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6 ;
-(id)actionSetFromObject:(id)arg1 ;
-(void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4 ;
-(id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(BOOL)arg3 metadata:(id)arg4 ;
-(void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2 ;
-(id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4 ;
-(BOOL)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6 ;
-(id)updateValue:(id)arg1 forAction:(id)arg2 ;
-(id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3 ;
-(long long)numberOfHomes;
-(id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 overrideServiceTypeIfNeeded:(id*)arg3 ;
-(id)objectsWithIdentifierList:(id)arg1 ;
-(void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6 ;
-(void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 ;
-(void)addBridgedAcessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3 ;
-(void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3 ;
-(void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4 ;
-(id)parseColorEncoding:(id)arg1 ;
-(id)filterObjects:(id)arg1 forCharacteristics:(id)arg2 ;
-(id)filterObjects:(id)arg1 byCharacteristicType:(id)arg2 ;
-(void)setGather:(HMDAssistantGather *)arg1 ;
-(void)setCompletionHandlerCalled:(BOOL)arg1 ;
-(BOOL)completionHandlerCalled;
-(void)setNumberOfHomes:(long long)arg1 ;
-(HMDAssistantGather *)gather;
-(void)setPrimaryHomeName:(NSString *)arg1 ;
-(void)setPrimaryHomeUUID:(NSUUID *)arg1 ;
-(void)setCurrentHomeName:(NSString *)arg1 ;
-(void)setCurrentHomeUUID:(NSUUID *)arg1 ;
-(void)setHomeKitObjects:(NSArray *)arg1 ;
-(void)setAssistantCommandHelper:(HMDAssistantCommandHelper *)arg1 ;
-(void)handleCommandWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

