/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <Foundation/NSXPCConnection.h>

@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {

	NSUUID* _uuid;
	BOOL _isUsingTokenService;

}
+(void)initialize;
+(id)secondaryConnection;
+(id)defaultConnectionIfExists;
+(id)secondaryConnectionIfExists;
+(id)defaultConnection;
+(id)mobileDocumentsURL;
+(id)homeDirectoryURL;
+(id)syncedDesktopURL;
+(id)syncedDocumentsURL;
+(id)syncedRootURLs;
+(id)cloudDocsAppSupportURL;
+(id)cloudDocsCachesURL;
+(id)t_connectionForUUID:(id)arg1 ;
+(void)t_setDefaultConnection:(id)arg1 ;
+(void)t_setMobileDocumentsURL:(id)arg1 ;
+(void)invalidateCachedURLProperties;
-(id)initUsingUserLocalDaemonTokenService;
-(BRXPCSyncProxy*)newSyncTokenProxy;
-(BRXPCSyncProxy*)newSyncProxy;
-(void)_setupAndResume;
-(id)initUsingUserLocalDaemon;
@end

