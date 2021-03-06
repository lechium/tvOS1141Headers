/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalActivatable.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate;

@interface EKTravelAdvisoryTimelinessAuthority : NSObject <CalActivatable> {

	BOOL _internalActive;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _startOfLeaveNowPeriod;
	NSDate* _startOfRunningLatePeriod;
	unsigned long long _internalPeriod;
	/*^block*/id _internalPeriodChangedCallback;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                     //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSDate * startOfLeaveNowPeriod;                          //@synthesize startOfLeaveNowPeriod=_startOfLeaveNowPeriod - In the implementation block
@property (nonatomic,retain) NSDate * startOfRunningLatePeriod;                       //@synthesize startOfRunningLatePeriod=_startOfRunningLatePeriod - In the implementation block
@property (assign,nonatomic) BOOL internalActive;                                     //@synthesize internalActive=_internalActive - In the implementation block
@property (assign,nonatomic) unsigned long long internalPeriod;                       //@synthesize internalPeriod=_internalPeriod - In the implementation block
@property (nonatomic,copy) id internalPeriodChangedCallback;                          //@synthesize internalPeriodChangedCallback=_internalPeriodChangedCallback - In the implementation block
@property (nonatomic,copy) id periodChangedCallback; 
@property (nonatomic,readonly) unsigned long long period; 
+(id)stringForPeriod:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)active;
-(void)deactivate;
-(void)activate;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)period;
-(void)_uninstallTimer;
-(BOOL)internalActive;
-(void)setInternalActive:(BOOL)arg1 ;
-(void)setStartOfLeaveNowPeriod:(NSDate *)arg1 ;
-(void)setStartOfRunningLatePeriod:(NSDate *)arg1 ;
-(NSDate *)startOfLeaveNowPeriod;
-(NSDate *)startOfRunningLatePeriod;
-(void)setInternalPeriodChangedCallback:(id)arg1 ;
-(id)internalPeriodChangedCallback;
-(unsigned long long)internalPeriod;
-(void)_refreshPeriod;
-(void)setInternalPeriod:(unsigned long long)arg1 ;
-(void)_refreshOnDate:(id)arg1 ;
-(void)updateWithHypothesis:(id)arg1 ;
-(void)setPeriodChangedCallback:(id)arg1 ;
-(id)periodChangedCallback;
-(void)_refreshTimer;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_refresh;
@end

