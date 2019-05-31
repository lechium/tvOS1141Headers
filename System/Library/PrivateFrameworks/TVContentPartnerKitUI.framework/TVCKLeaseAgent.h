/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <TVServices/TVSStateMachine.h>

@protocol TVCKLeaseAgentDelegate;
@class NSString, NSTimer, TVCKDataItem, NSNumber;

@interface TVCKLeaseAgent : TVSStateMachine {

	unsigned _FPMediaKind;
	unsigned long long _dsid;
	id<TVCKLeaseAgentDelegate> _delegate;
	FPLeaseSyncOpaque_Ref _lease;
	NSString* _leaseID;
	NSTimer* _renewalTimer;
	TVCKDataItem* _item;
	NSString* _storeMediaKind;
	double _leaseDuration;
	double _numLeaseStartRetries;
	unsigned long long _numRenewalRetries;
	NSNumber* _sagaID;

}

@property (assign,nonatomic) FPLeaseSyncOpaque_Ref lease;                             //@synthesize lease=_lease - In the implementation block
@property (nonatomic,retain) NSString * leaseID;                                      //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,retain) NSTimer * renewalTimer;                                  //@synthesize renewalTimer=_renewalTimer - In the implementation block
@property (nonatomic,retain) TVCKDataItem * item;                                     //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * storeMediaKind;                               //@synthesize storeMediaKind=_storeMediaKind - In the implementation block
@property (assign,nonatomic) double leaseDuration;                                    //@synthesize leaseDuration=_leaseDuration - In the implementation block
@property (assign,nonatomic) double numLeaseStartRetries;                             //@synthesize numLeaseStartRetries=_numLeaseStartRetries - In the implementation block
@property (assign,nonatomic) unsigned long long numRenewalRetries;                    //@synthesize numRenewalRetries=_numRenewalRetries - In the implementation block
@property (nonatomic,retain) NSNumber * sagaID;                                       //@synthesize sagaID=_sagaID - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKLeaseAgentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(id)_documentForOperation:(id)arg1 mediaItem:(id)arg2 clientData:(id)arg3 leaseID:(id)arg4 storeMediaKind:(id)arg5 ;
+(void)stopAllLeases;
-(TVCKDataItem *)item;
-(id<TVCKLeaseAgentDelegate>)delegate;
-(void)setDelegate:(id<TVCKLeaseAgentDelegate>)arg1 ;
-(void)setItem:(TVCKDataItem *)arg1 ;
-(double)leaseDuration;
-(FPLeaseSyncOpaque_Ref)lease;
-(void)setLease:(FPLeaseSyncOpaque_Ref)arg1 ;
-(id)_initiateLease;
-(id)_invalidateAgentWithError:(id)arg1 ;
-(NSString *)leaseID;
-(NSString *)storeMediaKind;
-(void)_leaseRenewalLoaded:(id)arg1 ;
-(void)_stopLease;
-(id)_invalidateAgentWithError:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)_renewLease:(id)arg1 ;
-(void)setRenewalTimer:(NSTimer *)arg1 ;
-(NSTimer *)renewalTimer;
-(void)setNumRenewalRetries:(unsigned long long)arg1 ;
-(NSNumber *)sagaID;
-(void)_leaseAcquisitionLoaded:(id)arg1 error:(id)arg2 ;
-(id)_errorFromDictionary:(id)arg1 ;
-(id)_decodeResponseDictionary:(id)arg1 ;
-(BOOL)_errorIsRecoverable:(int)arg1 ;
-(id)initWithMediaItem:(id)arg1 stateChangedHandler:(/*^block*/id)arg2 ;
-(void)startLease;
-(void)stopLease;
-(void)setLeaseID:(NSString *)arg1 ;
-(void)setStoreMediaKind:(NSString *)arg1 ;
-(void)setLeaseDuration:(double)arg1 ;
-(double)numLeaseStartRetries;
-(void)setNumLeaseStartRetries:(double)arg1 ;
-(unsigned long long)numRenewalRetries;
-(void)setSagaID:(NSNumber *)arg1 ;
-(void)_initializeStateMachine;
@end

