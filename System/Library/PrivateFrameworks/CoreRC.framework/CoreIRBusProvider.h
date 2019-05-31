/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreIRBus.h>
#import <libobjc.A.dylib/IRInterfaceDelegate.h>

@class CoreIRDeviceProvider, IRInterface, NSString;

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate> {

	CoreIRDeviceProvider* _localDevice;
	IRInterface* _interface;

}

@property (nonatomic,retain,readonly) IRInterface * interface;              //@synthesize interface=_interface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)deviceDictClasses;
-(void)dealloc;
-(Class)classForCoder;
-(void)setManager:(id)arg1 ;
-(IRInterface *)interface;
-(id)localDevice;
-(void)didRemoveDevice:(id)arg1 ;
-(BOOL)setPairedAppleRemote:(id)arg1 error:(id*)arg2 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 error:(id*)arg3 ;
-(id)addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)propertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithInterface:(id)arg1 ;
-(BOOL)recreateDevices;
-(void)migrateOldRemotes;
-(void)willAddToManager:(id)arg1 ;
-(void)didAddDevice:(id)arg1 ;
-(void)updateLearnedProtocols;
-(void)updateAllowHibernation;
-(id)getExistingDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 ;
-(id)_addDeviceWithType:(unsigned long long)arg1 matching:(id)arg2 transportProperties:(id)arg3 error:(id*)arg4 ;
-(BOOL)saveDevicePrefsWithDict:(id)arg1 error:(id*)arg2 ;
-(void)_recreatePairedDeviceFromDefaults:(id)arg1 key:(id)arg2 ;
-(BOOL)addMappingsFromRemote:(id)arg1 toLearningSession:(id)arg2 ;
-(id)copyDevicePrefs:(id*)arg1 ;
-(id)_addAppleRemoteWithDeviceUID:(unsigned char)arg1 ;
-(BOOL)deleteDevicePrefsWithUUID:(id)arg1 UUIDKey:(id)arg2 ;
-(void)willRemoveDevice:(id)arg1 ;
-(BOOL)setPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 object:(id)arg3 key:(id)arg4 ;
-(id)copyPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 key:(id)arg3 ;
-(void)_removeMappingForCommand:(unsigned long long)arg1 from:(id)arg2 ;
-(id)_findAppleRemoteWithUID:(unsigned char)arg1 ;
-(void)interface:(id)arg1 receivedCommand:(id)arg2 ;
-(id)thirdPartyRemotes;
-(BOOL)updatePersistentValue:(id)arg1 forProperty:(id)arg2 ofDevice:(id)arg3 ;
-(BOOL)mergePersistentMappingsFromSession:(id)arg1 ofDevice:(id)arg2 ;
-(id)appleIRDeviceWithUID:(unsigned char)arg1 create:(BOOL)arg2 ;
@end
