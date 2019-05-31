/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/CrossDeviceTransportCore.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet, IDSService, NSString;

@interface IDSCrossDeviceTransport : CrossDeviceTransportCore <IDSServiceDelegate> {

	NSObject*<OS_dispatch_queue> _idsServiceQueue;
	NSMutableDictionary* _endpointsRegistry;
	NSMutableSet* _delegateRegistry;
	IDSService* _idsService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithQueue:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)registerIDSService;
-(void)addDelegate:(id)arg1 endpoint:(id)arg2 ;
-(void)removeDelegate:(id)arg1 endpoint:(id)arg2 ;
-(void)unregisterIDSService;
-(void)sendMessage:(id)arg1 toIDSDevicesMatching:(id)arg2 toEndpoint:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 toIDSDevices:(id)arg2 toEndpoint:(id)arg3 validFor:(double)arg4 reply:(/*^block*/id)arg5 ;
-(void)sendMessage:(id)arg1 toIDSDevices:(id)arg2 toEndpoint:(id)arg3 reply:(/*^block*/id)arg4 ;
-(unsigned long long)deliverMessage:(id)arg1 toEndpoint:(id)arg2 ;
@end

