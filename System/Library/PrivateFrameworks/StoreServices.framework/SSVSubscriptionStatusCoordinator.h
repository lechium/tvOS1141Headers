/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionStatusRequest, NSObject, SSVSubscriptionStatus, NSDate, NSMutableArray;

@interface SSVSubscriptionStatusCoordinator : NSObject {

	SSVSubscriptionStatusRequest* _activeRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _didReset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSVSubscriptionStatus* _lastKnownStatus;
	NSDate* _lastStatusDate;
	int _notificationToken;
	NSMutableArray* _statusBlocks;

}

@property (copy,readonly) SSVSubscriptionStatus * lastKnownStatus; 
+(id)copyStatusFromUserDefaults;
+(void)updateUserDefaultsWithStatus:(id)arg1 ;
+(id)_existingSharedCoordinator;
+(id)_changeNotificationSuspensionAccessQueue;
+(void)_sendChangeNotification;
+(void)sendChangeNotification;
+(void)beginSuspendingSubscriptionStatusChangeNotifications;
+(void)endSuspendingSubscriptionStatusChangeNotifications;
+(void)removeUserDefaultsForAccountIdentifier:(id)arg1 ;
+(void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2 ;
+(id)sharedCoordinator;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_externalChangeNotification;
-(void)_validateLastKnownStatus;
-(void)_deviceStoreFrontChangedNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3 ;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)_invalidateLastKnownStatus;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
@end

