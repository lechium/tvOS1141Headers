/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAccessibility.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <libAccessibility.dylib/libAccessibility.dylib-Structs.h>
@class NSUserDefaults, NSMutableSet, NSMutableArray, NSMutableDictionary, NSObject;

@interface AXSupportDefaultsObserver : NSObject {

	NSUserDefaults* _axDomain;
	NSMutableSet* _observedPrefs;
	NSMutableArray* _actions;
	NSMutableDictionary* _actionLastNotifications;
	NSObject*<OS_dispatch_queue> _lastNotificationsQueue;

}
-(void)startObservingPreference:(CFStringRef)arg1 andBroadcastDarwinNotification:(CFStringRef)arg2 ;
-(void)startObservingPreference:(CFStringRef)arg1 andPerformBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

