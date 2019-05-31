/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorDelegate.h>
#import <libobjc.A.dylib/PKPaymentAuthorizationCoordinatorPrivateDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class PKPeerPaymentControllerInternalState, PKPeerPaymentAccount, PKPaymentPass, PKPeerPaymentContactResolver, PKPaymentAuthorizationCoordinator, NSObject, NSError, PKPeerPaymentWebService, NSString, PKPeerPaymentRecipient, PKPeerPaymentQuote, PKPeerPaymentPerformResponse, PKPeerPaymentRequestToken;

@interface PKPeerPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {

	PKPeerPaymentControllerInternalState* _is;
	PKPeerPaymentAccount* _account;
	PKPaymentPass* _peerPaymentPass;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPaymentAuthorizationCoordinator* _performQuoteAuthorizationCoordinator;
	NSObject*<OS_dispatch_group> _performQuoteGroup;
	NSObject*<OS_dispatch_queue> _performQuoteCallbackQueue;
	BOOL _performQuoteSuccess;
	NSError* _performQuoteError;
	PKPeerPaymentWebService* _webService;

}

@property (nonatomic,readonly) PKPeerPaymentWebService * webService;                             //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) unsigned long long mode; 
@property (nonatomic,readonly) PKPeerPaymentAccount * account; 
@property (nonatomic,readonly) PKPaymentPass * peerPaymentPass; 
@property (nonatomic,copy,readonly) NSString * senderPhoneOrEmail; 
@property (nonatomic,copy,readonly) NSString * recipientPhoneOrEmail; 
@property (nonatomic,copy,readonly) PKPeerPaymentRecipient * recipient; 
@property (nonatomic,copy,readonly) NSString * recipientDisplayName; 
@property (nonatomic,readonly) PKPeerPaymentQuote * quote; 
@property (nonatomic,readonly) PKPeerPaymentPerformResponse * performQuoteResponse; 
@property (nonatomic,readonly) PKPeerPaymentRequestToken * requestToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayableErrorForError:(id)arg1 ;
+(BOOL)errorIsIdentityVerificationRequiredError:(id)arg1 ;
+(BOOL)errorIsTermsAcceptanceRequiredError:(id)arg1 ;
+(id)_displayableErrorOverrideForUnderlyingError:(id)arg1 ;
+(unsigned long long)proposedResolutionForError:(id)arg1 ;
+(id)_peerPaymentPassURL;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)state;
-(void)reset;
-(unsigned long long)mode;
-(PKPeerPaymentWebService *)webService;
-(PKPeerPaymentRecipient *)recipient;
-(PKPeerPaymentQuote *)quote;
-(PKPeerPaymentRequestToken *)requestToken;
-(id)initWithPeerPaymentWebService:(id)arg1 ;
-(id)displayNameForRecipientAddress:(id)arg1 ;
-(id)internalState;
-(void)_setState:(unsigned long long)arg1 notify:(BOOL)arg2 ;
-(id)_defaultAlternateFundingSourceForMode:(unsigned long long)arg1 ;
-(BOOL)_ensureState:(unsigned long long)arg1 ;
-(void)_setPerformQuoteSuccess:(BOOL)arg1 ;
-(id)summaryItemsForQuote:(id)arg1 ;
-(void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)formalRequestTokenForAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg1 ;
-(void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)recipientPhoneOrEmail;
-(void)_handleAccountChanged:(id)arg1 ;
-(void)_resetToState:(unsigned long long)arg1 ;
-(NSString *)recipientDisplayName;
-(id)displayableErrorForError:(id)arg1 ;
-(void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestQuoteWithRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_refreshRecipientWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateLastUsedAlternateFundingSource;
-(id)performQuoteOrientation;
-(void)performQuote:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)displayNameForRecipientAddress:(id)arg1 foundInContacts:(BOOL*)arg2 ;
-(void)aggDAuthorizedQuoteWithSuccess:(BOOL)arg1 authorizedQuote:(id)arg2 ;
-(id)externalizedControllerState;
-(BOOL)restoreStateWithExternalizedControllerState:(id)arg1 ;
-(NSString *)senderPhoneOrEmail;
-(PKPeerPaymentPerformResponse *)performQuoteResponse;
-(void)identifyRecipientWithRoutingNumber:(id)arg1 accountNumber:(id)arg2 accountName:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)identifyRecipientSelf;
-(void)selectMode:(unsigned long long)arg1 ;
-(void)quoteWithAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performQuoteWithCompletion:(/*^block*/id)arg1 ;
-(void)statusForPaymentIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)handleIdentityVerificationWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleTermsAcceptanceRequiredWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPaymentPass *)peerPaymentPass;
-(void)identifyRecipientWithAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTokenForAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPeerPaymentAccount *)account;
@end

