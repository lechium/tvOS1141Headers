/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFServiceMaintenance.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface CFBackgroundActionService : NSObject <AFServiceMaintenance> {

	NSObject*<OS_dispatch_queue> _queue;

}
+(void)handleBackgroundActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)handleBackgroundAction:(id)arg1 onDispatchGroup:(id)arg2 ;
-(void)performMaintenanceWithCompletion:(/*^block*/id)arg1 ;
@end
