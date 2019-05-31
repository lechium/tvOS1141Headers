/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class NSObject, NSURL, NSData, NSMutableDictionary, NSArray;

@interface _LSDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSURL* _systemContainerURL;
	NSURL* _systemGroupContainerURL;
	NSURL* _userContainerURL;
	NSData* _hmacSecret;
	NSMutableDictionary* _darwinNotificationNames;
	unsigned _darwinNotificationNamesUID;
	os_unfair_lock_s _darwinNotificationNamesLock;
	BOOL _inSyncBubble;
	BOOL _inXCTestRigInsecure;
	BOOL _appleInternal;
	BOOL _isServer;
	BOOL _hasServer;
	BOOL _inEducationMode;
	BOOL _hasPersistentPreferences;
	long long _currentDisplayGamut;

}

@property (readonly) unsigned currentSchemaVersion; 
@property (readonly) NSURL * systemContainerURL; 
@property (readonly) NSURL * systemGroupContainerURL; 
@property (readonly) NSURL * userContainerURL; 
@property (readonly) unsigned short databaseStoreFileMode; 
@property (readonly) NSURL * databaseStoreFileURL; 
@property (readonly) NSURL * queriedSchemesMapFileURL; 
@property (readonly) NSURL * identifiersFileURL; 
@property (readonly) NSURL * preferencesFileURL; 
@property (readonly) NSURL * securePeferencesFileURL; 
@property (readonly) NSURL * dbSentinelFileURL; 
@property (readonly) NSURL * dbRecoveryFileURL; 
@property (getter=isServer) BOOL server;                                                           //@synthesize isServer=_isServer - In the implementation block
@property (assign) BOOL hasServer;                                                                 //@synthesize hasServer=_hasServer - In the implementation block
@property (getter=isInEducationMode,readonly) BOOL inEducationMode;                                //@synthesize inEducationMode=_inEducationMode - In the implementation block
@property (readonly) BOOL hasPersistentPreferences;                                                //@synthesize hasPersistentPreferences=_hasPersistentPreferences - In the implementation block
@property (getter=isSimulator,readonly) BOOL simulator; 
@property (getter=isInSyncBubble,readonly) BOOL inSyncBubble;                                      //@synthesize inSyncBubble=_inSyncBubble - In the implementation block
@property (getter=isInXCTestRigInsecure,nonatomic,readonly) BOOL inXCTestRigInsecure;              //@synthesize inXCTestRigInsecure=_inXCTestRigInsecure - In the implementation block
@property (getter=isAppleInternal,nonatomic,readonly) BOOL appleInternal;                          //@synthesize appleInternal=_appleInternal - In the implementation block
@property (nonatomic,readonly) BOOL allowsAlternateIcons; 
@property (nonatomic,readonly) BOOL abortIfMayNotMapDatabase; 
@property (nonatomic,readonly) BOOL issueSandboxExceptionsIfMayNotMapDatabase; 
@property (readonly) double databaseSaveInterval; 
@property (readonly) double databaseSaveLatency; 
@property (readonly) long long concurrentInstallOperations; 
@property (readonly) NSArray * preferredLocalizations; 
@property (readonly) NSData * HMACSecret; 
+(BOOL)appleInternal;
+(BOOL)inSyncBubble;
+(BOOL)inXCTestRigInsecure;
+(BOOL)hasPersistentPreferences;
+(id)systemContainerURL;
+(id)userContainerURL;
+(id)systemGroupContainerURL;
+(id)sharedInstance;
+(BOOL)hasServer;
-(BOOL)isServer;
-(BOOL)isInXCTestRigInsecure;
-(NSURL *)dbRecoveryFileURL;
-(id)serviceNameForConnectionType:(unsigned short)arg1 ;
-(BOOL)isInEducationMode;
-(void)setHasServer:(BOOL)arg1 ;
-(BOOL)hasPersistentPreferences;
-(NSURL *)systemContainerURL;
-(NSURL *)userContainerURL;
-(NSURL *)systemGroupContainerURL;
-(unsigned)currentSchemaVersion;
-(unsigned)proxyUIDForUID:(unsigned)arg1 ;
-(id)darwinNotificationNameForCurrentUser:(id)arg1 ;
-(unsigned)proxyUIDForCurrentEffectiveUID;
-(NSURL *)databaseStoreFileURL;
-(NSURL *)queriedSchemesMapFileURL;
-(NSURL *)identifiersFileURL;
-(NSURL *)preferencesFileURL;
-(NSURL *)securePeferencesFileURL;
-(BOOL)abortIfMayNotMapDatabase;
-(BOOL)isSimulator;
-(BOOL)isInSyncBubble;
-(double)databaseSaveInterval;
-(double)databaseSaveLatency;
-(id)userPreferencesURL;
-(unsigned short)databaseStoreFileMode;
-(NSURL *)dbSentinelFileURL;
-(id)classesWithNameForXCTests:(const char*)arg1 ;
-(BOOL)issueSandboxExceptionsIfMayNotMapDatabase;
-(id)preferencesUpdateNotificationName;
-(id)preferencesFileChangeNotificationName;
-(long long)concurrentInstallOperations;
-(NSData *)HMACSecret;
-(id)databaseUpdateNotificationName;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(BOOL)allowsAlternateIcons;
-(NSArray *)preferredLocalizations;
-(BOOL)isAppleInternal;
-(BOOL)hasServer;
-(void)setServer:(BOOL)arg1 ;
@end

