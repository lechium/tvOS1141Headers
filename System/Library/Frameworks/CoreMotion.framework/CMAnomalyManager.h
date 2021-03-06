/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CMAnomalyDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMAnomalyManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	CLConnectionClient* fLocationdConnection;
	id<CMAnomalyDelegate> _delegate;

}

@property (assign,nonatomic) id<CMAnomalyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAnomalyDetectionAvailable;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)stopAnomalyDetection;
-(void)startStopAnomalyDetection:(BOOL)arg1 ;
-(void)startAnomalyDetection;
-(void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(id)init;
-(id<CMAnomalyDelegate>)delegate;
-(void)setDelegate:(id<CMAnomalyDelegate>)arg1 ;
-(void)dealloc;
@end

