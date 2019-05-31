/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ICDelegationConsumerService;

@interface ICUserCredentialProvider : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	long long _delegationDiscoveryCount;
	ICDelegationConsumerService* _delegationConsumerService;

}
+(id)sharedProvider;
-(id)init;
-(void)performCredentialRequests:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleCredentialRequestIdentityPropertiesForSession:(id)arg1 ;
-(void)_handlePendingDelegationRequestsForSession:(id)arg1 ;
-(void)_handleDelegationAccountUUIDsForSession:(id)arg1 ;
-(void)_handleIdentityProperties:(id)arg1 forIdentity:(id)arg2 loadingError:(id)arg3 credentialRequest:(id)arg4 session:(id)arg5 ;
-(void)_handleRequestIndependentPropertiesForSession:(id)arg1 ;
-(void)performCredentialRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end

