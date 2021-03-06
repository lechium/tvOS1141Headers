/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface HMDWatchSystemState : HMFObject {

	BOOL _companionReachable;
	NSHashTable* _watchSystemStateDelegates;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                     //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * watchSystemStateDelegates;                        //@synthesize watchSystemStateDelegates=_watchSystemStateDelegates - In the implementation block
@property (assign,getter=isCompanionReachable,nonatomic) BOOL companionReachable;              //@synthesize companionReachable=_companionReachable - In the implementation block
+(id)sharedState;
-(id)init;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)isCompanionReachable;
-(void)newIncomingMessageFromClient;
-(void)_callDidUpdateReachabilityChangeForCompanion:(BOOL)arg1 forDelegate:(id)arg2 ;
-(NSHashTable *)watchSystemStateDelegates;
-(void)_callDidReceiveNewIncomingMessageForDelegate:(id)arg1 ;
-(void)setCompanionReachable:(BOOL)arg1 ;
-(void)registerDelegate:(id)arg1 ;
@end

