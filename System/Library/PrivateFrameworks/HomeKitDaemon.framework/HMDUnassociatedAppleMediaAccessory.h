/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUnassociatedMediaAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMFSoftwareVersion, HMDDevice;

@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging> {

	BOOL _currentAccessory;
	NSString* _model;
	NSString* _serialNumber;
	HMFSoftwareVersion* _softwareVersion;
	HMDDevice* _device;

}

@property (retain) HMDDevice * device;                                                     //@synthesize device=_device - In the implementation block
@property (retain) NSString * model;                                                       //@synthesize model=_model - In the implementation block
@property (retain) NSString * serialNumber;                                                //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) HMFSoftwareVersion * softwareVersion;                                   //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign,getter=isCurrentAccessory,nonatomic) BOOL currentAccessory;              //@synthesize currentAccessory=_currentAccessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)namespace;
+(Class)modelClass;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)model;
-(id)logIdentifier;
-(HMDDevice *)device;
-(BOOL)isCurrentAccessory;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(void)setDevice:(HMDDevice *)arg1 ;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)descriptionWithPointer:(BOOL)arg1 additionalDescription:(id)arg2 ;
-(HMFSoftwareVersion *)softwareVersion;
-(void)setSoftwareVersion:(HMFSoftwareVersion *)arg1 ;
-(id)initWithIdentifier:(id)arg1 device:(id)arg2 messageDispatcher:(id)arg3 ;
-(id)dumpDescription;
-(void)setCurrentAccessory:(BOOL)arg1 ;
@end

