/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class _CDClientContext, _CDContextualKeyPath, _CDContextualChangeRegistration, NSDictionary, NSObject, _CDContextualPredicate;

@interface SunriseSunsetProvider : NSObject {

	_CDClientContext* _duetContextStore;
	_CDContextualKeyPath* _duetKeyPath;
	_CDContextualChangeRegistration* _duetRegistration;
	NSDictionary* _duetInfo;
	NSObject*<OS_dispatch_semaphore> _duetDispatchSemaphore;
	BOOL _sunriseSunsetNotificationEnabled;
	/*^block*/id _callbackBlock;
	/*^block*/id _duetCallback;
	_CDContextualPredicate* _predicate;
	int _logLevel;

}

@property (assign) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
-(id)copySunriseSunsetInfo:(int)arg1 ;
-(void)updateSunriseSunsetInfo;
-(void)unregisterNotification;
-(void)unregisterBlock;
-(id)copySunsetSunriseInfoFromContext;
-(void)registerBlock:(/*^block*/id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setLogLevel:(int)arg1 ;
-(int)logLevel;
@end
