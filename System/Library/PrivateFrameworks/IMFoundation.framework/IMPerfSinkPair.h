/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;
@interface IMPerfSinkPair : NSObject {

	id<IMPerfProfilerBehavior> _behavior;
	id<IMPerfProfilerSink> _sink;

}

@property (nonatomic,readonly) id<IMPerfProfilerBehavior> behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) id<IMPerfProfilerSink> sink;                      //@synthesize sink=_sink - In the implementation block
-(void)dealloc;
-(id<IMPerfProfilerBehavior>)behavior;
-(id)initWithBehavior:(id)arg1 sink:(id)arg2 ;
-(id<IMPerfProfilerSink>)sink;
@end

