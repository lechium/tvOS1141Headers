/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
#import <libobjc.A.dylib/CDPDCircleProxy.h>

@class CDPContext, NSString;

@interface CDPDCircleProxyImpl : NSObject <CDPDCircleProxy> {

	CDPContext* _cdpContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CDPContext * cdpContext;               //@synthesize cdpContext=_cdpContext - In the implementation block
+(BOOL)registerCredentialsFromContext:(id)arg1 ;
+(BOOL)registerCredentialsFromContext:(id)arg1 force:(BOOL)arg2 ;
+(BOOL)canAuthenticate;
+(BOOL)tryRegisteringCredentialsFromContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(int)circleStatus:(id*)arg1 ;
-(BOOL)viewMemberForPCSMaster:(id*)arg1 ;
-(int)_authenticatedCircleStatus:(id*)arg1 ;
-(int)_circleStatus:(id*)arg1 ;
-(BOOL)_performSOSCBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1 ;
-(BOOL)_viewMemberForView:(CFStringRef)arg1 error:(id*)arg2 ;
-(id)peerId;
-(unsigned long long)peerCount;
-(id)peerDeviceNamesByPeerID;
-(id)generateRecoveryKeyWithInfo:(id)arg1 error:(id*)arg2 ;
-(id)generateVerifierWithRcoveryKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)synchronizeCircleViews;
-(BOOL)requestToJoinCircle:(id*)arg1 ;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1 ;
-(BOOL)requestToResetCircle:(id*)arg1 ;
-(BOOL)requestToResetCloudKitData:(id*)arg1 ;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1 ;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2 ;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2 ;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)removeNonViewAwarePeers:(id*)arg1 ;
-(BOOL)isLastBackupMakingPeer:(id*)arg1 ;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(CDPContext *)arg1 ;
@end

