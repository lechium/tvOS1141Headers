/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CUXPCAgent, NSXPCConnection, CUXPCAgentConnection, NSString;

@interface SFNFCTagReaderUIController : NSObject {

	BOOL _activateCalled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	long long _nfcTagScanCount;
	BOOL _nfcTagScanPending;
	CUXPCAgent* _xpcAgent;
	NSXPCConnection* _xpcCnx;
	CUXPCAgentConnection* _xpcUICnx;
	/*^block*/id _invalidationHandler;
	long long _mode;
	NSString* _purpose;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) long long mode;                                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * purpose;                                        //@synthesize purpose=_purpose - In the implementation block
-(void)setPurpose:(NSString *)arg1 ;
-(NSString *)purpose;
-(id)init;
-(void)invalidate;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)_ensureXPCStarted;
-(void)uiActivatedWithCompletion:(/*^block*/id)arg1 ;
-(void)uiInvalidatedWithCompletion:(/*^block*/id)arg1 ;
-(void)nfcTagScannedCount:(long long)arg1 ;
-(void)_nfcTagScannedCount;
-(void)nfcTagScanned;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

