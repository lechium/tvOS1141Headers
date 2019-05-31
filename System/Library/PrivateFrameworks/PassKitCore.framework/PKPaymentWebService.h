/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKWebService.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@protocol OS_dispatch_queue, PKPaymentWebServiceArchiver, PKPaymentWebServiceBackgroundDelegate, PKPaymentWebServiceTargetDeviceProtocol;
@class NSURLSession, PKPaymentDevice, NSMutableDictionary, NSObject, NSHashTable, PKPaymentWebServiceContext, PKPaymentWebServiceBackgroundContext, NSURL, NSArray, NSString;

@interface PKPaymentWebService : PKWebService <NSURLSessionDownloadDelegate> {

	NSURLSession* _backgroundSession;
	PKPaymentDevice* _paymentDevice;
	NSMutableDictionary* _passesByLocalURL;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _backgroundDownloadQueue;
	NSHashTable* _delegates;
	BOOL _sharedService;
	PKPaymentWebServiceContext* _context;
	PKPaymentWebServiceBackgroundContext* _backgroundContext;
	id<PKPaymentWebServiceArchiver> _archiver;
	id<PKPaymentWebServiceBackgroundDelegate> _backgroundDelegate;
	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;

}

@property (assign,nonatomic) BOOL sharedService;                                                      //@synthesize sharedService=_sharedService - In the implementation block
@property (retain) PKPaymentWebServiceContext * context;                                              //@synthesize context=_context - In the implementation block
@property (retain) PKPaymentWebServiceBackgroundContext * backgroundContext;                          //@synthesize backgroundContext=_backgroundContext - In the implementation block
@property (readonly) BOOL needsRegistration; 
@property (readonly) NSURL * primaryBrokerURL; 
@property (readonly) BOOL needsConfiguration; 
@property (readonly) int paymentSetupSupportedInRegion; 
@property (readonly) NSArray * delegates; 
@property (retain) id<PKPaymentWebServiceArchiver> archiver;                                          //@synthesize archiver=_archiver - In the implementation block
@property (assign) id<PKPaymentWebServiceBackgroundDelegate> backgroundDelegate;                      //@synthesize backgroundDelegate=_backgroundDelegate - In the implementation block
@property (nonatomic,readonly) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(BOOL)supportsSecureCoding;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)sharedService;
-(PKPaymentWebServiceContext *)context;
-(void)setContext:(PKPaymentWebServiceContext *)arg1 ;
-(unsigned long long)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)unregisterDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 archiver:(id)arg3 ;
-(id)_paymentDevice;
-(BOOL)needsRegistration;
-(int)paymentSetupSupportedInRegion;
-(BOOL)needsConfiguration;
-(unsigned long long)configurePaymentServiceWithCompletion:(/*^block*/id)arg1 ;
-(void)_canRegisterForPeerPaymentWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)networkManifestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)serviceProviderNonceForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)inAppPaymentNonceForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)prepareTransactionDetailsForMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)completeSession:(id)arg1 wrappedPayment:(id)arg2 pass:(id)arg3 applicationData:(id)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)performServiceProviderPayment:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 hostApplicationIdentifier:(id)arg3 applicationData:(id)arg4 pass:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithContext:(id)arg1 targetDevice:(id)arg2 ;
-(void)_handleRetryAfterRegisterWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateRequestWithCurrentTargetDevice:(id)arg1 ;
-(void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)forbiddenErrorWithResponse:(id)arg1 ;
-(void)setSharedService:(BOOL)arg1 ;
-(BOOL)canBypassTrustExtendedValidation;
-(void)_archiveContext;
-(void)_deviceRegistrationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(/*^block*/id)arg2 ;
-(id)logFacility;
-(void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)remotePaymentCredentialsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)remotePaymentCredentialsUpdateForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)passAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)availableProductsWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)provisioningMethodWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)serviceProviderPurchasesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)requirementsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)eligibilityForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)provisionForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)paymentProvisioningNonceWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)moreInfoItemAtURL:(id)arg1 withMetadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRetryAfterTSMSyncForPushTopic:(id)arg1 withRequest:(id)arg2 taskIdentifier:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sharedPaymentServiceChanged:(id)arg1 ;
-(BOOL)_isSandboxAccount;
-(BOOL)_canRegisterForPeerPayment;
-(unsigned long long)updateRegistrationDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_recentConfiguration:(/*^block*/id)arg1 ;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_hasConfiguration;
-(void)_startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_deviceConfigurationDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)registerDeviceAtBrokerURL:(id)arg1 withConsistencyData:(id)arg2 retries:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_resultForResponse:(id)arg1 error:(id)arg2 successHandler:(/*^block*/id)arg3 ;
-(id)_errorWithResult:(unsigned long long)arg1 data:(id)arg2 ;
-(unsigned long long)registerDeviceWithConsistencyData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)primaryBrokerURL;
-(unsigned long long)_updateContextWithRegistrationResponse:(id)arg1 ;
-(unsigned long long)unregisterDeviceWithCompanionSerialNumber:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)verificationRecordForPass:(id)arg1 ;
-(void)_removeVerificationRequestRecord:(id)arg1 ;
-(unsigned long long)_downloadPassAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_deviceProvisioningDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_performVerificationRequest:(id)arg1 selectedChannel:(id)arg2 paymentPass:(id)arg3 taskID:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_addVerificationRequestRecord:(id)arg1 ;
-(id)_fakeVerificationChannelsWithRealChannels:(id)arg1 ;
-(unsigned long long)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)verificationOptionsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)updateVerification:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_downloadPassesWithURLs:(id)arg1 ;
-(void)backgroundDownloadPassesForPushTopic:(id)arg1 sinceLastUpdatedTag:(BOOL)arg2 ;
-(PKPaymentWebServiceBackgroundContext *)backgroundContext;
-(void)_archiveBackgroundContext;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 forSuffixesAndScreenScales:(id)arg2 ;
-(id)_movePassToDownloadCache:(id)arg1 ;
-(void)_passWithData:(id)arg1 response:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_nonceForPass:(id)arg1 serviceURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)_performRewrapRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRemoteAssetDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handlePassListDownloadTask:(id)arg1 data:(id)arg2 ;
-(void)_handlePassDownloadTask:(id)arg1 data:(id)arg2 ;
-(id)_passWithFileURL:(id)arg1 ;
-(void)_cleanupPassDownloadCache;
-(void)backgroundDownloadPassAtURL:(id)arg1 ;
-(unsigned long long)_resultForUnexpectedStatusCode:(long long)arg1 ;
-(id)_downloadCacheLocation;
-(void)startBackgroundURLSessionWithIdentifier:(id)arg1 context:(id)arg2 backgroundDelegate:(id)arg3 ;
-(void)invalidateBackgroundSession;
-(void)signNonce:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)issuerProvisioningCertificatesForRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)provisionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)deprovisionForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)verificationChannelsForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)requestVerificationCodeForPass:(id)arg1 usingChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)devicePassesSinceLastUpdatedTag:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)passesWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performNotifificationActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)backgroundDownloadPassesSinceLastUpdatedTag:(BOOL)arg1 ;
-(void)backgroundDownloadRemotePassAssets:(id)arg1 ;
-(void)backgroundDownloadWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(unsigned long long)passActionWithRemoteContentPassAction:(id)arg1 forPass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)rewrapInAppPayment:(id)arg1 merchantIdentifier:(id)arg2 merchantSession:(id)arg3 hostApplicationIdentifier:(id)arg4 applicationData:(id)arg5 pass:(id)arg6 completion:(/*^block*/id)arg7 ;
-(unsigned long long)availableDevicesWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)checkMerchantStatus:(id)arg1 forDomain:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)serviceProviderPurchaseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)performAction:(id)arg1 onServiceProviderPurchase:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1 ;
-(id<PKPaymentWebServiceBackgroundDelegate>)backgroundDelegate;
-(void)setBackgroundDelegate:(id<PKPaymentWebServiceBackgroundDelegate>)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id<PKPaymentWebServiceArchiver>)archiver;
-(void)setArchiver:(id<PKPaymentWebServiceArchiver>)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSArray *)delegates;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
@end

