/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface UNSApplicationDescription : NSObject {

	BOOL _requiresLocalNotifications;
	BOOL _shouldUseDefaultDataProvider;
	BOOL _systemApplication;
	BOOL _usesCloudKit;
	BOOL _supportsContentAvailableRemoteNotifications;
	BOOL _restricted;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSURL* _dataContainerURL;
	NSString* _universalApplicationIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSURL * dataContainerURL;                                         //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,copy) NSString * universalApplicationIdentifier;                        //@synthesize universalApplicationIdentifier=_universalApplicationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalNotifications;                                //@synthesize requiresLocalNotifications=_requiresLocalNotifications - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDefaultDataProvider;                              //@synthesize shouldUseDefaultDataProvider=_shouldUseDefaultDataProvider - In the implementation block
@property (assign,getter=isSystemApplication,nonatomic) BOOL systemApplication;              //@synthesize systemApplication=_systemApplication - In the implementation block
@property (assign,nonatomic) BOOL usesCloudKit;                                              //@synthesize usesCloudKit=_usesCloudKit - In the implementation block
@property (assign,nonatomic) BOOL supportsContentAvailableRemoteNotifications;               //@synthesize supportsContentAvailableRemoteNotifications=_supportsContentAvailableRemoteNotifications - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                            //@synthesize restricted=_restricted - In the implementation block
+(id)descriptionWithApplication:(id)arg1 ;
+(id)descriptionWithBundleIdentifier:(id)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)dataContainerURL;
-(BOOL)isRestricted;
-(BOOL)supportsContentAvailableRemoteNotifications;
-(BOOL)usesCloudKit;
-(BOOL)isSystemApplication;
-(BOOL)requiresLocalNotifications;
-(void)setDataContainerURL:(NSURL *)arg1 ;
-(void)setUniversalApplicationIdentifier:(NSString *)arg1 ;
-(void)setRequiresLocalNotifications:(BOOL)arg1 ;
-(void)setShouldUseDefaultDataProvider:(BOOL)arg1 ;
-(void)setSystemApplication:(BOOL)arg1 ;
-(void)setUsesCloudKit:(BOOL)arg1 ;
-(void)setSupportsContentAvailableRemoteNotifications:(BOOL)arg1 ;
-(NSString *)universalApplicationIdentifier;
-(BOOL)shouldUseDefaultDataProvider;
-(void)setRestricted:(BOOL)arg1 ;
@end

