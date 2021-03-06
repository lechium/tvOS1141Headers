/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogTaskHandler.h>

@protocol OS_dispatch_queue;
@class IDSTransactionLogTask, NSObject;

@interface IDSTransactionLogBaseTaskHandler : IDSTransactionLogTaskHandler {

	IDSTransactionLogTask* _task;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSTransactionLogTask * task;                    //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTask:(IDSTransactionLogTask *)arg1 ;
-(IDSTransactionLogTask *)task;
-(void)perform;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
@end

