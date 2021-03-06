/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXClientDelegateProtocol <NSObject>
@required
-(oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldResumeWithUUID:(id)arg1;
-(oneway void)_client_coordinatorShouldPauseWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)arg1;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_coordinatorWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;
-(oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)arg1;
-(oneway void)_client_promiseWithUUID:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3;

@end

