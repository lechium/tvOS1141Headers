/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMerging.h>

@protocol _HMAccesorySettingGroupDelegate, OS_dispatch_queue;
@class NSMutableSet, NSUUID, NSString, _HMContext, NSObject, HMAccessorySettings, NSArray;

@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMFMerging> {

	NSMutableSet* _settings;
	NSMutableSet* _groups;
	id<_HMAccesorySettingGroupDelegate> _delegate;
	NSUUID* _identifier;
	NSString* _name;
	_HMContext* _context;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMAccessorySettings* _accessorySettings;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMAccessorySettings * accessorySettings;                         //@synthesize accessorySettings=_accessorySettings - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) id<_HMAccesorySettingGroupDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)supportedSettingsClasses;
+(id)supportedGroupsClasses;
-(id)init;
-(id<_HMAccesorySettingGroupDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HMAccesorySettingGroupDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(NSArray *)settings;
-(NSUUID *)identifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(NSArray *)groups;
-(id)shortDescription;
-(id)initWithName:(id)arg1 ;
-(void)configureWithAccessorySettings:(id)arg1 context:(id)arg2 ;
-(void)setAccessorySettings:(HMAccessorySettings *)arg1 ;
-(void)_handleAddedSetting:(id)arg1 ;
-(void)_handleRemovedSetting:(id)arg1 ;
-(void)_handleAddedGroup:(id)arg1 ;
-(void)_handleRemovedGroup:(id)arg1 ;
-(void)notifyDelegateOfAddedSetting:(id)arg1 ;
-(void)notifyDelegateOfRemovedSetting:(id)arg1 ;
-(void)notifyDelegateOfAddedGroup:(id)arg1 ;
-(void)notifyDelegateOfRemovedGroup:(id)arg1 ;
-(BOOL)mergeSettings:(id)arg1 ;
-(BOOL)mergeGroups:(id)arg1 ;
-(void)addSetting:(id)arg1 toGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeSetting:(id)arg1 fromGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addGroup:(id)arg1 toGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeGroup:(id)arg1 fromGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMAccessorySettings *)accessorySettings;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)_registerNotificationHandlers;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)messageDestination;
-(BOOL)mergeObject:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(id)settingWithIdentifier:(id)arg1 ;
-(void)removeSetting:(id)arg1 ;
-(void)addGroup:(id)arg1 ;
-(id)groupWithIdentifier:(id)arg1 ;
-(void)removeGroup:(id)arg1 ;
@end

