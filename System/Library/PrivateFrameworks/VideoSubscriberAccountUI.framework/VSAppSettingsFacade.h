/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSIdentityProvider, NSArray, NSOperationQueue, NSOperation, VSPersistentStorage, VSRestrictionsCenter, VSOptional;

@interface VSAppSettingsFacade : NSObject {

	BOOL _needsUpdateApps;
	int _registrationToken;
	VSIdentityProvider* _identityProvider;
	NSArray* _decidedApps;
	NSArray* _voucherApps;
	NSOperationQueue* _privateQueue;
	NSOperation* _currentPresentationOperation;
	VSPersistentStorage* _storage;
	VSRestrictionsCenter* _restrictionsCenter;
	VSOptional* _identityProviderID;
	NSArray* _featuredAdamIDs;
	NSArray* _knownAppBundles;
	NSArray* _unredeemedVouchers;

}

@property (nonatomic,copy) NSArray * decidedApps;                                     //@synthesize decidedApps=_decidedApps - In the implementation block
@property (nonatomic,copy) NSArray * voucherApps;                                     //@synthesize voucherApps=_voucherApps - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                         //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) NSOperation * currentPresentationOperation;              //@synthesize currentPresentationOperation=_currentPresentationOperation - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                           //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSRestrictionsCenter * restrictionsCenter;               //@synthesize restrictionsCenter=_restrictionsCenter - In the implementation block
@property (nonatomic,copy) VSOptional * identityProviderID;                           //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) NSArray * featuredAdamIDs;                                 //@synthesize featuredAdamIDs=_featuredAdamIDs - In the implementation block
@property (nonatomic,copy) NSArray * knownAppBundles;                                 //@synthesize knownAppBundles=_knownAppBundles - In the implementation block
@property (nonatomic,copy) NSArray * unredeemedVouchers;                              //@synthesize unredeemedVouchers=_unredeemedVouchers - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateApps;                                    //@synthesize needsUpdateApps=_needsUpdateApps - In the implementation block
@property (assign,nonatomic) int registrationToken;                                   //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                   //@synthesize identityProvider=_identityProvider - In the implementation block
-(VSPersistentStorage *)storage;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(void)dealloc;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(VSOptional *)identityProviderID;
-(NSArray *)knownAppBundles;
-(VSRestrictionsCenter *)restrictionsCenter;
-(void)setRestrictionsCenter:(VSRestrictionsCenter *)arg1 ;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(NSArray *)unredeemedVouchers;
-(void)setKnownAppBundles:(NSArray *)arg1 ;
-(void)setNeedsUpdateApps:(BOOL)arg1 ;
-(NSOperation *)currentPresentationOperation;
-(void)setDecidedApps:(NSArray *)arg1 ;
-(void)setVoucherApps:(NSArray *)arg1 ;
-(void)setCurrentPresentationOperation:(NSOperation *)arg1 ;
-(NSArray *)featuredAdamIDs;
-(id)_fetchOperationForAdamIDs:(id)arg1 ;
-(BOOL)needsUpdateApps;
-(void)_updateApps;
-(void)_setNeedsUpdateApps;
-(void)setFeaturedAdamIDs:(NSArray *)arg1 ;
-(id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2 ;
-(void)setUnredeemedVouchers:(NSArray *)arg1 ;
-(NSArray *)decidedApps;
-(NSArray *)voucherApps;
-(int)registrationToken;
-(void)setRegistrationToken:(int)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
@end

