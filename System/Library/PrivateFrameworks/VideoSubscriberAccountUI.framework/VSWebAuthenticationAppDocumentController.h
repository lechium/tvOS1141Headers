/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSMessagePortFeatureDelegate.h>
#import <libobjc.A.dylib/VSMessageQueueDelegate.h>

@class NSString;

@interface VSWebAuthenticationAppDocumentController : VSAppDocumentController <VSMessagePortFeatureDelegate, VSMessageQueueDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendMessage:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)didAddMessagesToMessageQueue:(id)arg1 ;
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
-(void)messagePort:(id)arg1 didReceiveMessage:(id)arg2 ;
-(BOOL)_updateWebAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(id)_webAuthenticationViewModelWithViewModel:(id)arg1 ;
-(BOOL)_updateWebAuthenticationViewModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithAppDocument:(id)arg1 ;
@end

