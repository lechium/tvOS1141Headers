/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDXPCProtocol.h>

@protocol OS_os_log;
@class NSObject, DEDController, NSString;

@interface DEDXPCInbound : NSObject <DEDXPCProtocol> {

	NSObject*<OS_os_log> _log;
	DEDController* _delegate;

}

@property (retain) NSObject*<OS_os_log> log;                        //@synthesize log=_log - In the implementation block
@property (__weak) DEDController * delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(DEDController *)delegate;
-(void)setDelegate:(DEDController *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)pong;
-(void)ping;
-(void)pingSession:(id)arg1 ;
-(void)listAvailableExtensionsForSession:(id)arg1 ;
-(void)getSessionStatusWithSession:(id)arg1 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)pongSession:(id)arg1 ;
-(void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2 ;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2 ;
-(void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2 ;
-(void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3 ;
-(void)commitSession:(id)arg1 ;
-(void)didCommitSession:(id)arg1 ;
-(void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3 ;
-(void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3 ;
-(void)didCancelSession:(id)arg1 ;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3 ;
-(void)discoverAllAvailableDevices;
-(void)stopDeviceDiscovery;
-(void)startPairSetupForDevice:(id)arg1 ;
-(void)promptPINForDevice:(id)arg1 ;
-(void)tryPIN:(id)arg1 forDevice:(id)arg2 ;
-(void)successPINForDevice:(id)arg1 ;
-(void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4 ;
-(void)gotDeviceUpdate:(id)arg1 ;
-(void)didDiscoverDevices:(id)arg1 ;
-(void)didStartBugSessionWithInfo:(id)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)cancelSession:(id)arg1 ;
@end

