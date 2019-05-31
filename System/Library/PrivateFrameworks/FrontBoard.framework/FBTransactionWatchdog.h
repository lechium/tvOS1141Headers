/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,retain,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(FBTransaction *)transaction;
-(void)invalidate;
-(void)dealloc;
-(void)_dumpDebugInfo;
-(void)_watchdogTimerFired;
-(id)initWithTransaction:(id)arg1 ;
@end

