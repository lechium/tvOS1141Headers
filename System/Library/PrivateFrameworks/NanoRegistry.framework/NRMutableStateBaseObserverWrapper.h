/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NRMutableStateBaseObserverWrapper : NSObject {

	/*^block*/id _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) id observer;                                       //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObserver:(id)arg1 ;
-(id)observer;
@end

