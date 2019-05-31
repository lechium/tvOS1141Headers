//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKRecordZoneID, NSError, NSObject<OS_dispatch_source>, NSOperationQueue;

@interface SATViCloudServicesManager : NSObject
{
    _Bool _isFetchOperationInFlight;	// 8 = 0x8
    CKRecordZoneID *_cloudKitZoneIDForUser;	// 16 = 0x10
    NSError *_operationError;	// 24 = 0x18
    NSOperationQueue *_ckOperationsQueue;	// 32 = 0x20
    CDUnknownBlockType _requestCompletionHandler;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;	// 48 = 0x30
}

+ (id)sharedServicesManager;	// IMP=0x00000001000826ac
@property(retain, nonatomic) NSObject<OS_dispatch_source> *requestTimeoutTimer; // @synthesize requestTimeoutTimer=_requestTimeoutTimer;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionHandler; // @synthesize requestCompletionHandler=_requestCompletionHandler;
@property(nonatomic) _Bool isFetchOperationInFlight; // @synthesize isFetchOperationInFlight=_isFetchOperationInFlight;
@property(retain, nonatomic) NSOperationQueue *ckOperationsQueue; // @synthesize ckOperationsQueue=_ckOperationsQueue;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(retain, nonatomic) CKRecordZoneID *cloudKitZoneIDForUser; // @synthesize cloudKitZoneIDForUser=_cloudKitZoneIDForUser;
- (void).cxx_destruct;	// IMP=0x0000000100083a88
- (id)_ckContainerIdentifier;	// IMP=0x000000010008390c
- (void)_cancelFetchingCloudChangesForiCloudUser;	// IMP=0x0000000100083860
- (void)_cancelRequestTimeoutTimer;	// IMP=0x00000001000837b8
- (void)_startRequestTimeoutTimer;	// IMP=0x000000010008336c
- (void)beginFetchingCloudChangesForiCloudUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000828a4
- (void)resetInfo;	// IMP=0x00000001000827c0
- (id)init;	// IMP=0x000000010008272c

@end
