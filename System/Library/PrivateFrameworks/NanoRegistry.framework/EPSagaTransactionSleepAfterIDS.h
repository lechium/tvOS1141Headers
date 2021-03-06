/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EPTransaction.h>

@protocol EPTransactionDelegate;
@class NSString;

@interface EPSagaTransactionSleepAfterIDS : NSObject <EPTransaction> {

	id<EPTransactionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<EPTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)canRollback;
-(id<EPTransactionDelegate>)delegate;
-(void)setDelegate:(id<EPTransactionDelegate>)arg1 ;
-(void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2 ;
-(void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2 ;
@end

