/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSAppDocumentControllerDelegate.h>
#import <libobjc.A.dylib/VSApplicationDelegate.h>
#import <libobjc.A.dylib/VSStateMachineDelegate.h>

@protocol VSApplicationControllerDelegate;
@class VSIdentityProvider, VSAuditToken, VSStateMachine, NSError, NSOperationQueue, VSApplication, VSApplicationControllerResponseHandler, VSAppDocumentController, JSValue, VSPreferences, NSString;

@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate> {

	BOOL _allowUI;
	id<VSApplicationControllerDelegate> _delegate;
	VSIdentityProvider* _identityProvider;
	VSAuditToken* _auditToken;
	VSStateMachine* _stateMachine;
	NSError* _delegateError;
	NSError* _onLaunchError;
	NSOperationQueue* _privateQueue;
	VSApplication* _application;
	VSApplicationControllerResponseHandler* _responseHandler;
	VSAppDocumentController* _appDocumentController;
	JSValue* _applicationReadyCallback;
	VSPreferences* _preferences;

}

@property (nonatomic,retain) VSStateMachine * stateMachine;                                         //@synthesize stateMachine=_stateMachine - In the implementation block
@property (retain) NSError * delegateError;                                                         //@synthesize delegateError=_delegateError - In the implementation block
@property (retain) NSError * onLaunchError;                                                         //@synthesize onLaunchError=_onLaunchError - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;                                 //@synthesize identityProvider=_identityProvider - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                       //@synthesize privateQueue=_privateQueue - In the implementation block
@property (retain) VSApplication * application;                                                     //@synthesize application=_application - In the implementation block
@property (nonatomic,retain) VSApplicationControllerResponseHandler * responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) VSAppDocumentController * appDocumentController;                       //@synthesize appDocumentController=_appDocumentController - In the implementation block
@property (nonatomic,retain) JSValue * applicationReadyCallback;                                    //@synthesize applicationReadyCallback=_applicationReadyCallback - In the implementation block
@property (assign,nonatomic) BOOL allowUI;                                                          //@synthesize allowUI=_allowUI - In the implementation block
@property (nonatomic,retain) VSPreferences * preferences;                                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic,__weak) id<VSApplicationControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                               //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(id)init;
-(oneway void)release;
-(id<VSApplicationControllerDelegate>)delegate;
-(void)setDelegate:(id<VSApplicationControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)setPreferences:(VSPreferences *)arg1 ;
-(VSPreferences *)preferences;
-(VSApplication *)application;
-(void)setApplication:(VSApplication *)arg1 ;
-(VSAuditToken *)auditToken;
-(VSApplicationControllerResponseHandler *)responseHandler;
-(void)setResponseHandler:(VSApplicationControllerResponseHandler *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(id)initWithIdentityProvider:(id)arg1 ;
-(id)_bootURL;
-(void)_notifyDidStart;
-(NSError *)delegateError;
-(NSError *)onLaunchError;
-(void)_notifyStartDidFailWithError:(id)arg1 ;
-(void)setDelegateError:(NSError *)arg1 ;
-(void)setOnLaunchError:(NSError *)arg1 ;
-(void)_notifyDelegateWithBlock:(/*^block*/id)arg1 ;
-(void)setAllowUI:(BOOL)arg1 ;
-(void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2 ;
-(void)_completeRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentDocument:(id)arg1 ;
-(void)_beginAuthentication;
-(JSValue *)applicationReadyCallback;
-(void)_applicationReadyWithSuccess:(BOOL)arg1 javascriptErrorValue:(id)arg2 ;
-(void)setApplicationReadyCallback:(JSValue *)arg1 ;
-(id)_applicationLaunchParams;
-(VSAppDocumentController *)appDocumentController;
-(BOOL)allowUI;
-(void)setAppDocumentController:(VSAppDocumentController *)arg1 ;
-(void)_notifyDidReceiveViewModel:(id)arg1 ;
-(void)_notifyDidReceiveViewModelError:(id)arg1 ;
-(void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3 ;
-(id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2 ;
-(void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2 ;
-(void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2 ;
-(id)_makeJavaScriptRequest;
-(void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2 ;
-(void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2 ;
-(void)applicationDidStart:(id)arg1 ;
-(void)application:(id)arg1 startDidFailWithError:(id)arg2 ;
-(void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2 ;
-(id)launchParamsForApplication:(id)arg1 ;
-(id)activeAppDocumentForApplication:(id)arg1 ;
-(void)transitionToWaitingForBothLaunchCallbacksState;
-(void)transitionToReadyState;
-(void)transitionToNotifyingOfLaunchFailureState;
-(void)transitionToInvalidState;
-(void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1 ;
-(void)submitRequest:(id)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setStateMachine:(VSStateMachine *)arg1 ;
-(VSStateMachine *)stateMachine;
@end

