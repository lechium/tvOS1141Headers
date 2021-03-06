/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject, NSHashTable;

@interface MNXPCTransactionManager : NSObject {

	NSObject*<OS_os_transaction> _xpcTransaction;
	NSHashTable* _requesters;

}
+(id)sharedInstance;
-(void)addHighMemoryThresholdRequest:(id)arg1 ;
-(void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2 ;
@end

