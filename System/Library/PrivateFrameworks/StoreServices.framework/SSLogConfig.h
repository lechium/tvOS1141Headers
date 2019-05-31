/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSString, SSLogFileOptions, NSObject;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying> {

	BOOL _writeToDisk;
	NSString* _category;
	unsigned long long _environment;
	NSString* _subsystem;
	SSLogFileOptions* _backingLogFileOptions;
	NSObject*<OS_os_log> _backingOSLogObject;
	NSObject*<OS_dispatch_queue> _propertyAccessQueue;
	NSString* _outputDirectory;
	NSString* _outputFilename;

}

@property (nonatomic,retain) SSLogFileOptions * backingLogFileOptions;                      //@synthesize backingLogFileOptions=_backingLogFileOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> backingOSLogObject;                       //@synthesize backingOSLogObject=_backingOSLogObject - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyAccessQueue;              //@synthesize propertyAccessQueue=_propertyAccessQueue - In the implementation block
@property (nonatomic,copy) NSString * category;                                             //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * outputDirectory;                                      //@synthesize outputDirectory=_outputDirectory - In the implementation block
@property (nonatomic,copy) NSString * outputFilename;                                       //@synthesize outputFilename=_outputFilename - In the implementation block
@property (nonatomic,copy) NSString * subsystem;                                            //@synthesize subsystem=_subsystem - In the implementation block
@property (assign,nonatomic) BOOL writeToDisk;                                              //@synthesize writeToDisk=_writeToDisk - In the implementation block
@property (nonatomic,readonly) BOOL debugLogsEnabled; 
@property (nonatomic,readonly) SSLogFileOptions * logFileOptions; 
@property (nonatomic,readonly) NSObject*<OS_os_log> OSLogObject; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) BOOL shouldLogToDisk; 
+(id)sharedStoreServicesConfig;
+(id)sharedConfig;
+(id)sharedPrivacyConfig;
+(id)sharediTunesStoreConfig;
+(id)sharedAccountsConfig;
+(id)sharedAccountsAuthenticationConfig;
+(id)sharedAccountsStorefrontConfig;
+(id)sharedDaemonConfig;
+(id)sharedAccountsMigrationConfig;
+(id)sharedAccountsCookiesConfig;
+(id)sharedBagConfig;
+(id)sharedBagCacheConfig;
+(id)sharedFollowUpConfig;
+(id)sharedDaemonConfigOversize;
+(id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3 ;
+(BOOL)_debugLogsEnabled:(id)arg1 ;
+(id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2 ;
+(id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2 ;
+(BOOL)_deviceIsRunningInternalBuild;
+(BOOL)_deviceIsRunningSeedBuild;
+(BOOL)_deviceIsRunningInternalOrSeedBuild;
+(id)sharedAccountsLogoutConfig;
+(id)sharedAccountsMigrationConfigOversize;
+(id)sharedFairPlayAnisetteConfig;
+(id)sharedFeatureEnablerMigrationConfig;
+(id)sharediTunesStoreConfigOversize;
+(id)sharedPushNotificationConfig;
+(id)sharedStoreServicesConfigOversize;
+(id)sharedWriteToDiskConfig;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(unsigned long long)environment;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldLog;
-(NSObject*<OS_os_log>)OSLogObject;
-(BOOL)shouldLogToDisk;
-(BOOL)debugLogsEnabled;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setWriteToDisk:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyAccessQueue;
-(SSLogFileOptions *)backingLogFileOptions;
-(NSString *)outputDirectory;
-(NSString *)outputFilename;
-(void)setBackingLogFileOptions:(SSLogFileOptions *)arg1 ;
-(NSObject*<OS_os_log>)backingOSLogObject;
-(void)setBackingOSLogObject:(NSObject*<OS_os_log>)arg1 ;
-(BOOL)writeToDisk;
-(void)setOutputDirectory:(NSString *)arg1 ;
-(SSLogFileOptions *)logFileOptions;
-(void)setPropertyAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setOutputFilename:(NSString *)arg1 ;
-(NSString *)subsystem;
@end
