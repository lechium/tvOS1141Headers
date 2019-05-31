/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface SFAnalyticsSampler : NSObject {

	double _samplingInterval;
	NSObject*<OS_dispatch_source> _timer;
	NSString* _name;
	/*^block*/id _block;
	int _notificationToken;
	Class _clientClass;
	BOOL _oncePerReport;
	BOOL _activeTimer;

}

@property (assign,nonatomic) double samplingInterval;              //@synthesize samplingInterval=_samplingInterval - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
-(void)pauseSampling;
-(void)setupOnceTimer;
-(void)setupPeriodicTimer;
-(id)initWithName:(id)arg1 interval:(double)arg2 block:(/*^block*/id)arg3 clientClass:(Class)arg4 ;
-(id)sampleNow;
-(void)resumeSampling;
-(void)setSamplingInterval:(double)arg1 ;
-(double)samplingInterval;
-(void)newTimer;
-(void)dealloc;
-(NSString *)name;
@end

