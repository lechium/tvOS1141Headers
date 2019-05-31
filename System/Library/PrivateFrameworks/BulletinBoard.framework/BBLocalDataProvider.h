/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue, BBDataProvider, OS_dispatch_source;
@class NSObject;

@interface BBLocalDataProvider : BBDataProvider {

	NSObject*<OS_dispatch_queue> _localQueue;
	NSObject*<OS_dispatch_queue> _remoteQueue;
	id<BBDataProvider> _dataProvider;
	NSObject*<OS_dispatch_source> _watchdogTimer;
	BOOL _unresponsive;
	BOOL _invalidated;

}

@property (nonatomic,retain) id<BBDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(/*^block*/id)arg3 ;
+(id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(void)setDataProvider:(id<BBDataProvider>)arg1 ;
-(id<BBDataProvider>)dataProvider;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformMigration;
-(id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(/*^block*/id)arg3 ;
-(id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2 ;
-(id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(/*^block*/id)arg4 ;
-(void)_watchdogFired;
-(void)_ping;
-(id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)_doSynchronousRemoteRequest:(/*^block*/id)arg1 conditionalOn:(/*^block*/id)arg2 ;
-(void)_doAsynchronousRemoteRequest:(/*^block*/id)arg1 conditionalOn:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(void)dataProviderDidLoad;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
@end

