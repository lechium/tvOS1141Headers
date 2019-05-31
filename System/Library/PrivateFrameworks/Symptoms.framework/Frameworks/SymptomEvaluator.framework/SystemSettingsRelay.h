/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString;

@interface SystemSettingsRelay : NSObject <MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> queue;
	CTServerConnectionRef _serverConnection;
	BOOL _observedAutoBugCapturePreference;
	BOOL _wifiEnabled;
	BOOL _airplaneModeSwitchEnabled;
	BOOL _cellDataSwitchEnabled;
	BOOL _rnfEnabled;
	BOOL _autoBugCaptureHasUserConsent;
	BOOL _diagnosticsAndUsageEnabled;
	BOOL _symptomExpertSystemEnabled;
	BOOL _arbitratorExpertSystemEnabled;
	BOOL _isDeviceUnderTest;
	NSArray* _wifiKnownNetworkSSIDs;

}

@property (readonly) NSArray * wifiKnownNetworkSSIDs;                 //@synthesize wifiKnownNetworkSSIDs=_wifiKnownNetworkSSIDs - In the implementation block
@property (readonly) BOOL wifiEnabled;                                //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (readonly) BOOL airplaneModeSwitchEnabled;                  //@synthesize airplaneModeSwitchEnabled=_airplaneModeSwitchEnabled - In the implementation block
@property (readonly) BOOL cellDataSwitchEnabled;                      //@synthesize cellDataSwitchEnabled=_cellDataSwitchEnabled - In the implementation block
@property (readonly) BOOL rnfEnabled;                                 //@synthesize rnfEnabled=_rnfEnabled - In the implementation block
@property (readonly) BOOL diagnosticsAndUsageEnabled;                 //@synthesize diagnosticsAndUsageEnabled=_diagnosticsAndUsageEnabled - In the implementation block
@property (readonly) BOOL autoBugCaptureHasUserConsent;               //@synthesize autoBugCaptureHasUserConsent=_autoBugCaptureHasUserConsent - In the implementation block
@property (readonly) BOOL symptomExpertSystemEnabled;                 //@synthesize symptomExpertSystemEnabled=_symptomExpertSystemEnabled - In the implementation block
@property (readonly) BOOL arbitratorExpertSystemEnabled;              //@synthesize arbitratorExpertSystemEnabled=_arbitratorExpertSystemEnabled - In the implementation block
@property (readonly) BOOL isDeviceUnderTest;                          //@synthesize isDeviceUnderTest=_isDeviceUnderTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)defaultRelay;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)autoBugCaptureHasUserConsent;
-(BOOL)symptomExpertSystemEnabled;
-(BOOL)airplaneModeSwitchEnabled;
-(BOOL)wifiEnabled;
-(BOOL)cellDataSwitchEnabled;
-(BOOL)isDeviceUnderTest;
-(BOOL)arbitratorExpertSystemEnabled;
-(void)_serverConnectionCallback:(CFStringRef)arg1 info:(CFDictionaryRef)arg2 reference:(void*)arg3 ;
-(void)_setAirplaneModeSwitchEnabled:(BOOL)arg1 ;
-(void)_setWifiEnabled:(BOOL)arg1 ;
-(void)_setCellDataSwitchEnabled:(BOOL)arg1 ;
-(void)_setRnfEnabled:(BOOL)arg1 ;
-(void)_setAutoBugCaptureHasUserConsent:(BOOL)arg1 ;
-(void)_observeAutoBugCapturePreference;
-(void)grabKnownWiFiNetworks;
-(void)_removeAutoBugCaptureObserver;
-(void)updateExpertSystemsEnabling;
-(void)_setSymptomExpertSystemEnabled:(BOOL)arg1 ;
-(void)_setArbitratorExpertSystemEnabled:(BOOL)arg1 ;
-(void)_setDiagnosticsAndUsageEnabled:(BOOL)arg1 ;
-(NSArray *)wifiKnownNetworkSSIDs;
-(BOOL)rnfEnabled;
-(BOOL)diagnosticsAndUsageEnabled;
@end

