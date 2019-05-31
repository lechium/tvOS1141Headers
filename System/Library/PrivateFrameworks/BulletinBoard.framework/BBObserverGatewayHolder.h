/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PCPersistentTimer, NSMutableArray, BBObserverClientProxy, NSString, BBMaskedSet;

@interface BBObserverGatewayHolder : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	PCPersistentTimer* _timeoutTimer;
	NSMutableArray* _timeouts;
	BBObserverClientProxy* _gateway;
	unsigned long long _gatewayPriority;
	unsigned long long _feed;
	NSString* _name;
	BBMaskedSet* _observerFeedSet;

}

@property (nonatomic,retain) BBObserverClientProxy * gateway;                 //@synthesize gateway=_gateway - In the implementation block
@property (assign,nonatomic) unsigned long long gatewayPriority;              //@synthesize gatewayPriority=_gatewayPriority - In the implementation block
@property (assign,nonatomic) unsigned long long feed;                         //@synthesize feed=_feed - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BBMaskedSet * observerFeedSet;                 //@synthesize observerFeedSet=_observerFeedSet - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)feed;
-(unsigned long long)gatewayPriority;
-(BBMaskedSet *)observerFeedSet;
-(void)sendObserversAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned long long)arg3 ;
-(id)initWithQueue:(id)arg1 name:(id)arg2 ;
-(void)setGateway:(BBObserverClientProxy *)arg1 ;
-(void)setGatewayPriority:(unsigned long long)arg1 ;
-(void)setFeed:(unsigned long long)arg1 ;
-(void)sendAddBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 forFeeds:(unsigned long long)arg3 withTimeout:(double)arg4 handler:(/*^block*/id)arg5 ;
-(void)_startNextTimer;
-(id)_addTimeout:(double)arg1 forBulletinID:(id)arg2 inSectionID:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_invalidateTimeout:(id)arg1 ;
-(void)sendObserver:(id)arg1 addBulletin:(id)arg2 playLightsAndSirens:(BOOL)arg3 forFeeds:(unsigned long long)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)_handleTimeout;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(BBObserverClientProxy *)gateway;
-(void)_invalidateTimer;
@end

