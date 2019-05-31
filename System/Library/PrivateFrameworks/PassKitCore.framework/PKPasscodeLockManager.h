/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class MCProfileConnection, NSObject, NSHashTable, NSString;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {

	MCProfileConnection* _profileConnection;
	BOOL _isPasscodeSet;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL isPasscodeSet; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isPasscodeSet;
@end

