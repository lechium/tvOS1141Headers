/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CKDOperationPipelining <NSObject>
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@required
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(id)arg1;
-(NSString *)pipeliningDescription;

@end

