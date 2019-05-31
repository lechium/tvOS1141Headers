/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/DEDSeedingClientDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_dispatch_source, OS_os_log, OS_os_transaction;
@class NSObject, DEDBugSessionConfiguration, NSMutableDictionary, DEDBugSession, DEDSeedingClient, NSString;

@interface DEDSeedingFinisher : NSObject <DEDFinisher, DEDSeedingClientDelegate, NSSecureCoding, DEDSecureArchiving> {

	NSObject*<OS_dispatch_source> _timerSource;
	DEDBugSessionConfiguration* _config;
	NSMutableDictionary* _uploads;
	unsigned long long _totalUploadSize;
	NSObject*<OS_os_log> _log;
	DEDBugSession* _session;
	NSObject*<OS_os_transaction> _transaction;
	DEDSeedingClient* _client;
	NSMutableDictionary* _promises;

}

@property (retain) DEDBugSessionConfiguration * config;                   //@synthesize config=_config - In the implementation block
@property (retain) NSMutableDictionary * uploads;                         //@synthesize uploads=_uploads - In the implementation block
@property (assign) unsigned long long totalUploadSize;                    //@synthesize totalUploadSize=_totalUploadSize - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                              //@synthesize log=_log - In the implementation block
@property (__weak) DEDBugSession * session;                               //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (retain) DEDSeedingClient * client;                             //@synthesize client=_client - In the implementation block
@property (retain) NSMutableDictionary * promises;                        //@synthesize promises=_promises - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(void)setClient:(DEDSeedingClient *)arg1 ;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)save;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(DEDBugSessionConfiguration *)config;
-(NSObject*<OS_os_log>)log;
-(void)cleanup;
-(void)setConfig:(DEDBugSessionConfiguration *)arg1 ;
-(void)setUploads:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)uploads;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1 ;
-(void)didCancelCollectionOnExtension:(id)arg1 ;
-(void)didCollectAttachmentGroup:(id)arg1 ;
-(void)didAdoptAttachmentGroup:(id)arg1 ;
-(id)attachmentHandler;
-(id)prepareSessionDirectoryForSubmission:(id)arg1 ;
-(void)setTotalUploadSize:(unsigned long long)arg1 ;
-(NSMutableDictionary *)promises;
-(unsigned long long)totalUploadSize;
-(void)startProgressNotifier;
-(void)setPromises:(NSMutableDictionary *)arg1 ;
-(void)updateSessionUploadProgress;
-(BOOL)uploadsAreComplete;
-(id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3 ;
-(id)archiveItemsInDirectory:(id)arg1 ;
-(void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)uploadTask:(id)arg1 didSendBytes:(long long)arg2 ;
-(DEDSeedingClient *)client;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
@end

