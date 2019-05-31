/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMGestureManagerInternal : NSObject {

	int fPriority;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fGestureHandler;
	NSObject*<OS_dispatch_source> fWatchDogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;

}
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startGestureUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopGestureUpdatesPrivate;
-(void)dealloc;
-(id)initWithPriority:(int)arg1 ;
@end

