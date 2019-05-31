/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSString;

@interface RadioAvailabilityController : NSObject <ICEnvironmentMonitorObserver, MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	NSObject*<OS_dispatch_queue> _restrictionLoadQueue;
	BOOL _hasSuccessfullyLoadedURLBag;
	BOOL _isRadioAvailable;
	NSNumber* _isRadioAvailableFromBag;
	BOOL _isRadioRestricted;
	NSNumber* _lastActiveAccountUniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasLoadedRadioAvailability; 
@property (getter=isRadioAvailable,nonatomic,readonly) BOOL radioAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)isRadioAvailable;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)_currentStoreFrontIdentifier;
-(id)_userDefaultsDomain;
-(void)_updateRadioAvailabilityAllowingNotifications:(BOOL)arg1 ;
-(void)_reloadRadioBagAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reloadRadioRestriction;
-(void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_calculateRadioRestricted;
-(BOOL)hasLoadedRadioAvailability;
-(void)getRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
@end

