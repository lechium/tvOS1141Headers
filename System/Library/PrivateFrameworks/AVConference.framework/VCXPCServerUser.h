/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VCXPCServerUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;
	int _eventLogLevel;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
@property (assign,nonatomic) int eventLogLevel;                               //@synthesize eventLogLevel=_eventLogLevel - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(int)eventLogLevel;
-(void)setEventLogLevel:(int)arg1 ;
@end

