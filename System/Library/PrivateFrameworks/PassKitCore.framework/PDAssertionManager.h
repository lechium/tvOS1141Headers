/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PDAssertionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSXPCListener, NSMutableArray, NSObject, NSString;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate> {

	NSHashTable* _observers;
	NSXPCListener* _coordinatorListener;
	NSMutableArray* _coordinators;
	NSObject*<OS_dispatch_queue> _managerSerialQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_removeAllAssertionCoordinators;
-(void)_removeAssertionCoordinator:(id)arg1 ;
-(void)_addAssertionCoordinator:(id)arg1 ;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(BOOL)assertionCoordinator:(id)arg1 assertionExistsOfType:(unsigned long long)arg2 ;
-(BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2 ;
-(void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2 ;
-(void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
@end

