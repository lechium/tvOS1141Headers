/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(NSError *)error;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)submitWithTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id)arg1;
-(void)setAccountInfoProvider:(id)arg1;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;

@end

