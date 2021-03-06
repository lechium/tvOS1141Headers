/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SFClient, SFService, SFSession;

@interface DMFSetupSharingService : NSObject {

	/*^block*/id _progressHandler;
	/*^block*/id _preAuthorizationReceivedHandler;
	/*^block*/id _configurationReceivedHandler;
	/*^block*/id _serviceCompletionHandler;
	SFClient* _preventExitForLocaleClient;
	SFService* _service;
	SFSession* _activeSession;

}

@property (nonatomic,readonly) SFClient * preventExitForLocaleClient;              //@synthesize preventExitForLocaleClient=_preventExitForLocaleClient - In the implementation block
@property (nonatomic,readonly) SFService * service;                                //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) SFSession * activeSession;                            //@synthesize activeSession=_activeSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log; 
@property (nonatomic,copy) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,copy) id preAuthorizationReceivedHandler;                     //@synthesize preAuthorizationReceivedHandler=_preAuthorizationReceivedHandler - In the implementation block
@property (nonatomic,copy) id configurationReceivedHandler;                        //@synthesize configurationReceivedHandler=_configurationReceivedHandler - In the implementation block
@property (nonatomic,copy) id serviceCompletionHandler;                            //@synthesize serviceCompletionHandler=_serviceCompletionHandler - In the implementation block
-(SFService *)service;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(NSObject*<OS_os_log>)log;
-(void)setProgressHandler:(id)arg1 ;
-(void)_sessionStarted:(id)arg1 ;
-(id)initWithHandlerQueue:(id)arg1 ;
-(void)beginServiceWithShowPINHandler:(/*^block*/id)arg1 ;
-(void)_serviceCompletedWithError:(id)arg1 ;
-(void)_sessionSecured:(id)arg1 ;
-(void)_sessionEnded:(id)arg1 withError:(id)arg2 ;
-(SFSession *)activeSession;
-(SFClient *)preventExitForLocaleClient;
-(id)serviceCompletionHandler;
-(void)setServiceCompletionHandler:(id)arg1 ;
-(void)_handlePreAuthorizationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleBasicConfigurationRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleEnrollConfiguratorRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleProvisionallyEnrollInDEPRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)preAuthorizationReceivedHandler;
-(id)configurationReceivedHandler;
-(void)setPreAuthorizationReceivedHandler:(id)arg1 ;
-(void)setConfigurationReceivedHandler:(id)arg1 ;
-(void)setActiveSession:(SFSession *)arg1 ;
-(id)progressHandler;
@end

