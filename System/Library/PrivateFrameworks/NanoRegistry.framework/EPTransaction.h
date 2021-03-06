/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EPTransaction <NSObject>
@property (assign,nonatomic,__weak) id<EPTransactionDelegate> delegate; 
@required
+(BOOL)canRollback;
-(id<EPTransactionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)beginTransactionWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;
-(void)beginRollbackWithRoutingSlipEntry:(id)arg1 serviceRegistry:(id)arg2;

@end

