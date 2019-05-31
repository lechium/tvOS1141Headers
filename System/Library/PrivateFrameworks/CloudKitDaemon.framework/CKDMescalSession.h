/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKDClientContext, NSError, NSObject, NSOperationQueue;

@interface CKDMescalSession : NSObject {

	BOOL _isSetup;
	BOOL _renewing;
	CKDClientContext* _context;
	NSError* _lastSetupError;
	NSObject*<OS_dispatch_queue> _opQueue;
	NSObject*<OS_dispatch_group> _renewalGroup;
	NSOperationQueue* _renewQueue;
	FPSAPContextOpaque_Ref _mescalSession;
	FairPlayHWInfo_ _mescalHWInfo;

}

@property (assign) BOOL isSetup;                                                     //@synthesize isSetup=_isSetup - In the implementation block
@property (assign) BOOL renewing;                                                    //@synthesize renewing=_renewing - In the implementation block
@property (nonatomic,retain) NSError * lastSetupError;                               //@synthesize lastSetupError=_lastSetupError - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> opQueue;                   //@synthesize opQueue=_opQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> renewalGroup;              //@synthesize renewalGroup=_renewalGroup - In the implementation block
@property (nonatomic,retain) NSOperationQueue * renewQueue;                          //@synthesize renewQueue=_renewQueue - In the implementation block
@property (assign,nonatomic) FPSAPContextOpaque_Ref mescalSession;                   //@synthesize mescalSession=_mescalSession - In the implementation block
@property (assign,nonatomic) FairPlayHWInfo_ mescalHWInfo;                           //@synthesize mescalHWInfo=_mescalHWInfo - In the implementation block
@property (nonatomic,__weak,readonly) CKDClientContext * context;                    //@synthesize context=_context - In the implementation block
-(id)init;
-(void)dealloc;
-(CKDClientContext *)context;
-(id)initWithContext:(id)arg1 ;
-(FPSAPContextOpaque_Ref)mescalSession;
-(void)setMescalSession:(FPSAPContextOpaque_Ref)arg1 ;
-(void)exchangeData:(id)arg1 serverVersion:(int)arg2 qualityOfService:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)resetMescalSession;
-(BOOL)isSetup;
-(id)signatureHeadersForRequest:(id)arg1 ;
-(void)signData:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)renewMescalSessionForRequest:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)opQueue;
-(void)setOpQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsSetup:(BOOL)arg1 ;
-(void)_teardownLocked;
-(void)_getHardwareInfo:(FairPlayHWInfo_*)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_reallyExchangeData:(id)arg1 serverVersion:(int)arg2 qualityOfService:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_setUpWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)renewing;
-(void)setRenewing:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)renewalGroup;
-(NSOperationQueue *)renewQueue;
-(void)setLastSetupError:(NSError *)arg1 ;
-(NSError *)lastSetupError;
-(void)_renewMescalSessionForRequestLocked:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)_reallySignData:(id)arg1 qualityOfService:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setRenewalGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setRenewQueue:(NSOperationQueue *)arg1 ;
-(FairPlayHWInfo_)mescalHWInfo;
-(void)setMescalHWInfo:(FairPlayHWInfo_)arg1 ;
-(void)_teardown;
@end

