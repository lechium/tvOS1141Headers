/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDictionary, DMFAppManagementInformation;

@interface DMFApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPlaceholder;
	BOOL _isRestricted;
	BOOL _isBlocked;
	BOOL _isUserBasedVPP;
	BOOL _isDeviceBasedVPP;
	BOOL _isLicenseExpired;
	BOOL _isLicenseRevoked;
	BOOL _isUPP;
	BOOL _isValidated;
	BOOL _isAppStoreVendable;
	BOOL _isBetaApp;
	BOOL _isAdHocCodeSigned;
	BOOL _hasUpdateAvailable;
	unsigned long long _type;
	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSNumber* _storeItemIdentifier;
	NSNumber* _externalVersionIdentifier;
	NSString* _version;
	NSString* _shortVersion;
	NSNumber* _staticUsage;
	NSNumber* _dynamicUsage;
	NSNumber* _onDemandResourcesUsage;
	NSNumber* _sharedUsage;
	unsigned long long _installationState;
	NSString* _VPNUUIDString;
	NSDictionary* _configuration;
	NSDictionary* _feedback;
	DMFAppManagementInformation* _managementInformation;

}

@property (assign,nonatomic) unsigned long long type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemIdentifier;                                   //@synthesize storeItemIdentifier=_storeItemIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                             //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * version;                                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;                                          //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSNumber * staticUsage;                                           //@synthesize staticUsage=_staticUsage - In the implementation block
@property (nonatomic,copy) NSNumber * dynamicUsage;                                          //@synthesize dynamicUsage=_dynamicUsage - In the implementation block
@property (nonatomic,copy) NSNumber * onDemandResourcesUsage;                                //@synthesize onDemandResourcesUsage=_onDemandResourcesUsage - In the implementation block
@property (nonatomic,copy) NSNumber * sharedUsage;                                           //@synthesize sharedUsage=_sharedUsage - In the implementation block
@property (assign,nonatomic) unsigned long long installationState;                           //@synthesize installationState=_installationState - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                                             //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (assign,nonatomic) BOOL isRestricted;                                              //@synthesize isRestricted=_isRestricted - In the implementation block
@property (assign,nonatomic) BOOL isBlocked;                                                 //@synthesize isBlocked=_isBlocked - In the implementation block
@property (assign,nonatomic) BOOL isUserBasedVPP;                                            //@synthesize isUserBasedVPP=_isUserBasedVPP - In the implementation block
@property (assign,nonatomic) BOOL isDeviceBasedVPP;                                          //@synthesize isDeviceBasedVPP=_isDeviceBasedVPP - In the implementation block
@property (assign,nonatomic) BOOL isLicenseExpired;                                          //@synthesize isLicenseExpired=_isLicenseExpired - In the implementation block
@property (assign,nonatomic) BOOL isLicenseRevoked;                                          //@synthesize isLicenseRevoked=_isLicenseRevoked - In the implementation block
@property (assign,nonatomic) BOOL isUPP;                                                     //@synthesize isUPP=_isUPP - In the implementation block
@property (assign,nonatomic) BOOL isValidated;                                               //@synthesize isValidated=_isValidated - In the implementation block
@property (assign,nonatomic) BOOL isAppStoreVendable;                                        //@synthesize isAppStoreVendable=_isAppStoreVendable - In the implementation block
@property (assign,nonatomic) BOOL isBetaApp;                                                 //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (assign,nonatomic) BOOL isAdHocCodeSigned;                                         //@synthesize isAdHocCodeSigned=_isAdHocCodeSigned - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateAvailable;                                        //@synthesize hasUpdateAvailable=_hasUpdateAvailable - In the implementation block
@property (nonatomic,copy) NSString * VPNUUIDString;                                         //@synthesize VPNUUIDString=_VPNUUIDString - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;                                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * feedback;                                          //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) DMFAppManagementInformation * managementInformation;              //@synthesize managementInformation=_managementInformation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForInstallationState:(unsigned long long)arg1 ;
-(NSNumber *)onDemandResourcesUsage;
-(NSNumber *)sharedUsage;
-(NSDictionary *)feedback;
-(void)setFeedback:(NSDictionary *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setInstallationState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPlaceholder;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)displayName;
-(BOOL)isRestricted;
-(BOOL)isDeviceBasedVPP;
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
-(void)setIsDeviceBasedVPP:(BOOL)arg1 ;
-(void)setIsBlocked:(BOOL)arg1 ;
-(BOOL)isAppStoreVendable;
-(NSNumber *)staticUsage;
-(NSNumber *)dynamicUsage;
-(NSNumber *)storeItemIdentifier;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(BOOL)isBetaApp;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)setStaticUsage:(NSNumber *)arg1 ;
-(void)setDynamicUsage:(NSNumber *)arg1 ;
-(void)setOnDemandResourcesUsage:(NSNumber *)arg1 ;
-(void)setSharedUsage:(NSNumber *)arg1 ;
-(void)setIsRestricted:(BOOL)arg1 ;
-(BOOL)isUserBasedVPP;
-(void)setIsUserBasedVPP:(BOOL)arg1 ;
-(BOOL)isLicenseExpired;
-(void)setIsLicenseExpired:(BOOL)arg1 ;
-(BOOL)isLicenseRevoked;
-(void)setIsLicenseRevoked:(BOOL)arg1 ;
-(BOOL)isUPP;
-(void)setIsUPP:(BOOL)arg1 ;
-(BOOL)isValidated;
-(void)setIsValidated:(BOOL)arg1 ;
-(void)setIsAppStoreVendable:(BOOL)arg1 ;
-(void)setIsBetaApp:(BOOL)arg1 ;
-(void)setIsAdHocCodeSigned:(BOOL)arg1 ;
-(BOOL)hasUpdateAvailable;
-(void)setHasUpdateAvailable:(BOOL)arg1 ;
-(NSString *)VPNUUIDString;
-(void)setVPNUUIDString:(NSString *)arg1 ;
-(DMFAppManagementInformation *)managementInformation;
-(void)setManagementInformation:(DMFAppManagementInformation *)arg1 ;
-(id)_stringForType:(unsigned long long)arg1 ;
-(BOOL)isBlocked;
-(unsigned long long)installationState;
-(void)setStoreItemIdentifier:(NSNumber *)arg1 ;
-(BOOL)isAdHocCodeSigned;
@end

