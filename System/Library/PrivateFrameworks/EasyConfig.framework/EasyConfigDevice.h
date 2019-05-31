/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/EasyConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EasyConfig/EasyConfig-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDictionary, NSString;

@interface EasyConfigDevice : NSObject <NSCopying> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _userQueue;
	NSDictionary* _scanRecord;
	BOOL _started;
	int _firstErr;
	BonjourBrowserRef _airplayBrowser;
	NSDictionary* _airplayBonjourInfo;
	BonjourBrowserRef _raopBrowser;
	NSDictionary* _raopBonjourInfo;
	BonjourBrowserRef _mfiConfigBrowser;
	NSDictionary* _mfiConfigBonjourInfo;
	BonjourBrowserRef _hapBrowser;
	NSDictionary* _hapBonjourInfo;
	unsigned _configSeed;
	HTTPClientPrivateRef _httpClient;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	int _state;
	double _securityStartTime;
	double _securityFinishTime;
	MFiSAPRef _mfiSAP;
	PairingSessionPrivateRef _pairingSession;
	/*^block*/id _promptForSetupCodeBlock;
	unsigned long long _deviceIdentifier;
	unsigned long long _features;
	NSString* _model;
	NSString* _name;
	NSDictionary* _configuration;
	NSDictionary* _configResponse;
	unsigned _pairSetupFlags;
	unsigned _pairVerifyFlags;
	BOOL _pausesAfterApply;
	BOOL _skipPairSetup;
	BOOL _supportsHAP;
	BOOL _supportsHAP2;
	BOOL _supportsMFi;
	BOOL _supportsPairSetup;
	BOOL _supportsTLV;
	BOOL _preConfigMetricsSet;
	SCD_Struct_Ea6 _preConfigMetrics;
	BOOL _postConfigMetricsSet;
	SCD_Struct_Ea7 _postConfigMetrics;
	double _configStartTime;
	double _findPreConfigStartTime;
	double _findPreConfigFoundTime;
	double _findPostConfigStartTime;
	double _findPostConfigFoundTime;
	double _applyConfigStartTime;
	double _applyConfigFinishTime;
	double _postConfigCheckStartTime;
	double _postConfigCheckFinishTime;
	NSDictionary* _deviceInfo;
	double _promptForSetupCodeTime;
	unsigned _enterSetupCodeMs;
	BOOL _hasPairingDelegate;
	SCD_Struct_Ea8* _pairingDelegate;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy) NSDictionary * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) unsigned long long deviceIdentifier;                     //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize userQueue=_userQueue - In the implementation block
@property (assign,nonatomic) unsigned long long features;                             //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,nonatomic) unsigned pairSetupFlags;                                 //@synthesize pairSetupFlags=_pairSetupFlags - In the implementation block
@property (assign,nonatomic) unsigned pairVerifyFlags;                                //@synthesize pairVerifyFlags=_pairVerifyFlags - In the implementation block
@property (assign,nonatomic) BOOL pausesAfterApply;                                   //@synthesize pausesAfterApply=_pausesAfterApply - In the implementation block
@property (assign,nonatomic) BOOL skipPairSetup;                                      //@synthesize skipPairSetup=_skipPairSetup - In the implementation block
+(id)deviceWithInfo:(id)arg1 ;
+(BOOL)supportedScanRecord:(id)arg1 ;
+(id)deviceWithScanRecord:(id)arg1 ;
-(void)setDeviceIdentifier:(unsigned long long)arg1 ;
-(void)_handleError:(int)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(unsigned long long)deviceIdentifier;
-(id)init;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_start;
-(void)start;
-(void)stop;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSString *)model;
-(NSDictionary *)configuration;
-(void)setProgressHandler:(id)arg1 ;
-(void)trySetupCode:(id)arg1 ;
-(void)setPromptForSetupCodeHandler:(/*^block*/id)arg1 ;
-(void)resumePostConfig;
-(void)setPostConfigMetrics:(const SCD_Struct_Ea7*)arg1 ;
-(void)setPreConfigMetrics:(const SCD_Struct_Ea6*)arg1 ;
-(void)setPausesAfterApply:(BOOL)arg1 ;
-(void)setPairingDelegate:(const void*)arg1 ;
-(unsigned long long)features;
-(void)setFeatures:(unsigned long long)arg1 ;
-(BOOL)updated:(id)arg1 ;
-(BOOL)removed:(id)arg1 ;
-(void)_trySetupCode:(id)arg1 ;
-(int)_findDevicePreConfigStart;
-(void)_findDevicePreConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(int)_configureStart:(id)arg1 ;
-(int)_mfiSAPStart;
-(int)_mfiSAPNext:(HTTPMessagePrivate*)arg1 ;
-(int)_pairSetupNext:(HTTPMessagePrivate*)arg1 ;
-(int)_pairVerifyNext:(HTTPMessagePrivate*)arg1 ;
-(int)_applyConfigStart;
-(void)_applyConfigCompletion:(HTTPMessagePrivate*)arg1 ;
-(int)_findDevicePostConfigStart;
-(void)_findDevicePostConfigEvent:(unsigned)arg1 info:(id)arg2 ;
-(void)_postConfigCheckStart:(id)arg1 ;
-(void)_postConfigCheckCompletion:(HTTPMessagePrivate*)arg1 ;
-(void)_logEnded;
-(void)_postNote:(id)arg1 info:(id)arg2 ;
-(void)_postProgress:(int)arg1 info:(id)arg2 ;
-(void)_postProgress:(int)arg1 withResponse:(id)arg2 ;
-(int)_setupClient:(id)arg1 ;
-(int)_startBonjourWithTimeout:(int)arg1 handler:(/*^block*/id)arg2 ;
-(int)_timeoutTimerStart:(int)arg1 block:(/*^block*/id)arg2 ;
-(unsigned)pairSetupFlags;
-(unsigned)pairVerifyFlags;
-(void)setPairVerifyFlags:(unsigned)arg1 ;
-(BOOL)pausesAfterApply;
-(BOOL)skipPairSetup;
-(void)setSkipPairSetup:(BOOL)arg1 ;
-(void)setPairSetupFlags:(unsigned)arg1 ;
-(int)_pairVerifyStart;
-(int)_pairSetupStart;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)_stop:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

