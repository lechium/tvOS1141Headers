/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/DEDFinisher.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@protocol OS_os_log;
@class DEDBugSession, NSObject, NSArray, NSMutableArray, NSString;

@interface DEDRadarFinisher : NSObject <NSURLSessionDataDelegate, DEDFinisher, NSSecureCoding, DEDSecureArchiving> {

	float _percentComplete;
	DEDBugSession* _session;
	NSObject*<OS_os_log> _log;
	NSArray* _attachments;
	NSMutableArray* _finishedAttachments;

}

@property (__weak) DEDBugSession * session;                           //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
@property (assign) float percentComplete;                             //@synthesize percentComplete=_percentComplete - In the implementation block
@property (retain) NSArray * attachments;                             //@synthesize attachments=_attachments - In the implementation block
@property (retain) NSMutableArray * finishedAttachments;              //@synthesize finishedAttachments=_finishedAttachments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
-(DEDBugSession *)session;
-(void)setSession:(DEDBugSession *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)percentComplete;
-(NSObject*<OS_os_log>)log;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(NSArray *)attachments;
-(void)setFinishedAttachments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)finishedAttachments;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(void)finishSession:(id)arg1 withConfiguration:(id)arg2 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
@end

