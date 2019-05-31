/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSMutableSet, NSMutableDictionary;

@interface ATStatusMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _statusQueue;
	NSHashTable* _statusObservers;
	NSMapTable* _observerDataClasses;
	NSMutableSet* _statuses;
	NSMutableDictionary* _statusDictionary;

}
+(id)sharedMonitor;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)allStatus;
-(void)setDataClasses:(id)arg1 forObserver:(id)arg2 ;
-(void)updateStatusWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)updateStatus:(id)arg1 ;
-(void)updateStatusValuesWithDictionary:(id)arg1 ;
-(void)updateAssets:(id)arg1 ;
@end
