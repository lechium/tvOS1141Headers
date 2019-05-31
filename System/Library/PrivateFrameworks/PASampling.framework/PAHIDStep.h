/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@interface PAHIDStep : NSObject {

	unsigned _debugid;
	int _pid;
	double _timestamp;
	unsigned long long _tid;

}

@property (readonly) unsigned debugid;                    //@synthesize debugid=_debugid - In the implementation block
@property (readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long tid;              //@synthesize tid=_tid - In the implementation block
+(id)hidStepWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(id)debugDescription;
-(double)timestamp;
-(unsigned long long)tid;
-(id)initWithTimestamp:(double)arg1 debugID:(unsigned)arg2 pid:(int)arg3 tid:(unsigned long long)arg4 ;
-(id)initWithKTraceEvent:(trace_point*)arg1 fromSession:(ktrace_sessionRef)arg2 ;
-(unsigned)debugid;
-(int)pid;
@end
