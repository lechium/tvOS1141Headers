/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <MobileCoreServices/LSRecordBuilder.h>

@class LSRegistrationInfo, NSData, NSMutableDictionary, NSNumber, NSString, NSArray, NSURL, NSMutableSet, NSDictionary;

@interface LSBundleRecordBuilder : LSRecordBuilder {

	unsigned _bundleClass;
	LSRegistrationInfo* _registrationInfo;
	unsigned char _retries;
	unsigned _installationType;
	unsigned long long _sequenceNumber;
	BOOL _registerChildItemsTrusted;
	NSData* _bundleAlias;
	unsigned long long _bundleFlags;
	unsigned _plistContentFlags;
	unsigned char _iconFlags;
	unsigned _itemFlags;
	unsigned short _archFlags;
	unsigned _hfsType;
	unsigned _hfsCreator;
	unsigned long long _inode;
	BOOL _canDoHiResMode;
	BOOL _canDoMagnifiedMode;
	BOOL _hiResExplicit;
	NSMutableDictionary* _plistRarities;
	NSMutableDictionary* _commonInfoPlistEntries;
	BOOL _containerized;
	NSNumber* _compatibilityState;
	NSNumber* _installFailureReason;
	NSString* _version;
	NSString* _minSystemVersion;
	NSString* _maxSystemVersion;
	NSString* _sdkVersion;
	NSString* _minExecOSVersion;
	NSString* _shortVersionString;
	NSString* _execPath;
	NSArray* _machOUUIDs;
	NSNumber* _itemID;
	NSString* _teamID;
	NSArray* _activityTypes;
	NSArray* _deviceFamily;
	NSNumber* _installType;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _bundleName;
	NSArray* _alternateNames;
	NSURL* _dataContainerURL;
	NSURL* _bundleContainerURL;
	NSString* _categoryType;
	NSString* _secondCategoryType;
	NSString* _signerIdentity;
	NSString* _appType;
	NSString* _vendorName;
	NSString* _itemName;
	NSString* _codeInfoIdentifier;
	NSString* _signerOrganization;
	NSNumber* _storefront;
	NSNumber* _versionID;
	NSString* _sourceAppIdentifier;
	NSString* _appVariant;
	NSString* _companionAppID;
	NSMutableSet* _counterpartAppIDs;
	NSString* _watchKitVersion;
	NSString* _complicationPrincipalClass;
	NSArray* _supportedComplicationFamilies;
	NSString* _ratingLabel;
	NSNumber* _ratingRank;
	NSString* _genre;
	NSNumber* _genreID;
	NSString* _primaryIconName;
	NSDictionary* _iconsDict;
	NSArray* _iconFileNames;
	NSNumber* _purchaserDSID;
	NSNumber* _downloaderDSID;
	NSNumber* _famlyID;
	NSNumber* _staticDiskUsage;
	NSString* _libraryPath;
	NSArray* _libraryItems;
	NSArray* _documentClaims;
	NSArray* _URLClaims;
	NSArray* _importedTypes;
	NSArray* _exportedTypes;
	NSArray* _services;
	NSArray* _schemesWhitelist;
	NSDictionary* _pluginPlists;
	NSDictionary* _pluginMIDicts;
	NSDictionary* _groupContainers;
	NSDictionary* _entitlements;
	NSDictionary* _sandboxEnvironmentVariables;
	NSDictionary* _extensionSDK;

}

@property (assign,nonatomic) unsigned char retries;                                     //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) unsigned installationType;                                 //@synthesize installationType=_installationType - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL registerChildItemsTrusted;                          //@synthesize registerChildItemsTrusted=_registerChildItemsTrusted - In the implementation block
@property (nonatomic,readonly) BOOL containerized;                                      //@synthesize containerized=_containerized - In the implementation block
@property (nonatomic,readonly) NSNumber * compatibilityState;                           //@synthesize compatibilityState=_compatibilityState - In the implementation block
@property (nonatomic,readonly) NSNumber * installFailureReason;                         //@synthesize installFailureReason=_installFailureReason - In the implementation block
@property (nonatomic,readonly) NSString * version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * minSystemVersion;                             //@synthesize minSystemVersion=_minSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * maxSystemVersion;                             //@synthesize maxSystemVersion=_maxSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * sdkVersion;                                   //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (nonatomic,readonly) NSString * minExecOSVersion;                             //@synthesize minExecOSVersion=_minExecOSVersion - In the implementation block
@property (nonatomic,readonly) NSString * shortVersionString;                           //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,readonly) NSString * execPath;                                     //@synthesize execPath=_execPath - In the implementation block
@property (nonatomic,readonly) NSArray * machOUUIDs;                                    //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (nonatomic,readonly) NSNumber * itemID;                                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * teamID;                                       //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSArray * activityTypes;                                 //@synthesize activityTypes=_activityTypes - In the implementation block
@property (nonatomic,readonly) NSArray * deviceFamily;                                  //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (nonatomic,readonly) NSNumber * installType;                                  //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * bundleName;                                   //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,readonly) NSArray * alternateNames;                                //@synthesize alternateNames=_alternateNames - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                                //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSURL * bundleContainerURL;                              //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,readonly) NSString * categoryType;                                 //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) NSString * secondCategoryType;                           //@synthesize secondCategoryType=_secondCategoryType - In the implementation block
@property (nonatomic,readonly) NSString * signerIdentity;                               //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSString * appType;                                      //@synthesize appType=_appType - In the implementation block
@property (nonatomic,readonly) NSString * vendorName;                                   //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                     //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) NSString * codeInfoIdentifier;                           //@synthesize codeInfoIdentifier=_codeInfoIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * signerOrganization;                           //@synthesize signerOrganization=_signerOrganization - In the implementation block
@property (nonatomic,readonly) NSNumber * storefront;                                   //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,readonly) NSNumber * versionID;                                    //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * appVariant;                                   //@synthesize appVariant=_appVariant - In the implementation block
@property (nonatomic,readonly) NSString * companionAppID;                               //@synthesize companionAppID=_companionAppID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * counterpartAppIDs;                        //@synthesize counterpartAppIDs=_counterpartAppIDs - In the implementation block
@property (nonatomic,readonly) NSString * watchKitVersion;                              //@synthesize watchKitVersion=_watchKitVersion - In the implementation block
@property (nonatomic,readonly) NSString * complicationPrincipalClass;                   //@synthesize complicationPrincipalClass=_complicationPrincipalClass - In the implementation block
@property (nonatomic,readonly) NSArray * supportedComplicationFamilies;                 //@synthesize supportedComplicationFamilies=_supportedComplicationFamilies - In the implementation block
@property (nonatomic,readonly) NSString * ratingLabel;                                  //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) NSNumber * ratingRank;                                   //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                        //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) NSNumber * genreID;                                      //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,readonly) NSString * primaryIconName;                              //@synthesize primaryIconName=_primaryIconName - In the implementation block
@property (nonatomic,readonly) NSDictionary * iconsDict;                                //@synthesize iconsDict=_iconsDict - In the implementation block
@property (nonatomic,readonly) NSArray * iconFileNames;                                 //@synthesize iconFileNames=_iconFileNames - In the implementation block
@property (nonatomic,readonly) NSNumber * purchaserDSID;                                //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * downloaderDSID;                               //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * famlyID;                                      //@synthesize famlyID=_famlyID - In the implementation block
@property (nonatomic,readonly) NSNumber * staticDiskUsage;                              //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,readonly) NSString * libraryPath;                                  //@synthesize libraryPath=_libraryPath - In the implementation block
@property (nonatomic,readonly) NSArray * libraryItems;                                  //@synthesize libraryItems=_libraryItems - In the implementation block
@property (nonatomic,readonly) NSArray * documentClaims;                                //@synthesize documentClaims=_documentClaims - In the implementation block
@property (nonatomic,readonly) NSArray * URLClaims;                                     //@synthesize URLClaims=_URLClaims - In the implementation block
@property (nonatomic,readonly) NSArray * importedTypes;                                 //@synthesize importedTypes=_importedTypes - In the implementation block
@property (nonatomic,readonly) NSArray * exportedTypes;                                 //@synthesize exportedTypes=_exportedTypes - In the implementation block
@property (nonatomic,readonly) NSArray * services;                                      //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) NSArray * schemesWhitelist;                              //@synthesize schemesWhitelist=_schemesWhitelist - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginPlists;                             //@synthesize pluginPlists=_pluginPlists - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginMIDicts;                            //@synthesize pluginMIDicts=_pluginMIDicts - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupContainers;                          //@synthesize groupContainers=_groupContainers - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements;                             //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) NSDictionary * sandboxEnvironmentVariables;              //@synthesize sandboxEnvironmentVariables=_sandboxEnvironmentVariables - In the implementation block
@property (nonatomic,readonly) NSDictionary * extensionSDK;                             //@synthesize extensionSDK=_extensionSDK - In the implementation block
-(NSString *)primaryIconName;
-(NSArray *)supportedComplicationFamilies;
-(NSString *)complicationPrincipalClass;
-(NSNumber *)staticDiskUsage;
-(NSString *)signerOrganization;
-(NSArray *)activityTypes;
-(NSString *)watchKitVersion;
-(NSNumber *)installFailureReason;
-(id)_LSBundleFlagMap;
-(void)addItemInfoFlag:(unsigned)arg1 ;
-(id)_LSPlistRaritiesMap;
-(id)_LSKeyTypeMap;
-(void)addPlistFlag:(unsigned)arg1 ;
-(void)addArchitectureFlag:(unsigned short)arg1 ;
-(void)addIconFlag:(unsigned char)arg1 ;
-(id)getIconsDictionaryFromDict:(id)arg1 ;
-(void)setFlagsFromDictionary:(id)arg1 ;
-(void)setRaritiesFromDictionary:(id)arg1 ;
-(void)setCommonInfoPlistKeysFromDictionary:(id)arg1 ;
-(void)parseCapabilityFlagsFromDict:(id)arg1 ;
-(void)parseURLClaimsFromDict:(id)arg1 ;
-(void)parseIconFilenamesFromDict:(id)arg1 ;
-(void)parseDeviceFamilyFromDict:(id)arg1 ;
-(void)parseArchitecturesFromDict:(id)arg1 ;
-(int)registerSchemesWhitelist:(LSDatabase*)arg1 bundleData:(LSBundleData*)arg2 ;
-(LSBundleData)buildBundleData:(LSDatabase*)arg1 error:(id*)arg2 ;
-(int)activateBindings:(LSDatabase*)arg1 unitID:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
-(unsigned)installationType;
-(BOOL)containerized;
-(NSString *)minSystemVersion;
-(NSString *)maxSystemVersion;
-(NSString *)minExecOSVersion;
-(NSString *)execPath;
-(NSArray *)alternateNames;
-(NSString *)secondCategoryType;
-(NSString *)appType;
-(NSString *)codeInfoIdentifier;
-(NSString *)appVariant;
-(NSString *)companionAppID;
-(NSMutableSet *)counterpartAppIDs;
-(NSDictionary *)iconsDict;
-(NSArray *)iconFileNames;
-(NSNumber *)famlyID;
-(NSArray *)libraryItems;
-(NSArray *)documentClaims;
-(NSArray *)URLClaims;
-(NSArray *)importedTypes;
-(NSArray *)exportedTypes;
-(NSArray *)schemesWhitelist;
-(NSDictionary *)pluginPlists;
-(NSDictionary *)pluginMIDicts;
-(NSDictionary *)groupContainers;
-(NSDictionary *)sandboxEnvironmentVariables;
-(NSDictionary *)extensionSDK;
-(void)setRegistrationInfo:(id)arg1 alias:(CFDataRef)arg2 ;
-(void)setInstallationType:(unsigned)arg1 ;
-(void)addBundleFlag:(unsigned long long)arg1 ;
-(BOOL)parseInfoPlist:(id)arg1 ;
-(BOOL)parseInstallationInfo:(id)arg1 ;
-(void)parseActivityTypesFromDictionary:(id)arg1 ;
-(void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg1 ;
-(unsigned)registerBundleRecord:(LSDatabase*)arg1 error:(id*)arg2 ;
-(BOOL)registerChildItemsTrusted;
-(NSNumber *)compatibilityState;
-(NSString *)sourceAppIdentifier;
-(NSString *)bundleName;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)dealloc;
-(NSString *)categoryType;
-(NSString *)identifier;
-(NSString *)version;
-(NSString *)displayName;
-(NSURL *)dataContainerURL;
-(NSNumber *)installType;
-(NSNumber *)purchaserDSID;
-(NSURL *)bundleContainerURL;
-(NSNumber *)storefront;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSString *)shortVersionString;
-(NSNumber *)ratingRank;
-(NSString *)libraryPath;
-(NSString *)genre;
-(NSNumber *)itemID;
-(NSString *)ratingLabel;
-(NSString *)teamID;
-(NSString *)signerIdentity;
-(NSString *)sdkVersion;
-(NSArray *)deviceFamily;
-(NSNumber *)genreID;
-(NSNumber *)versionID;
-(unsigned char)retries;
-(void)setRetries:(unsigned char)arg1 ;
-(NSArray *)services;
-(NSDictionary *)entitlements;
-(NSArray *)machOUUIDs;
-(NSNumber *)downloaderDSID;
@end
