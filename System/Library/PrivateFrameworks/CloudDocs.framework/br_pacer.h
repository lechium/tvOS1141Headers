/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface br_pacer : NSObject {

	NSObject*<OS_dispatch_source> source;
	NSObject*<OS_dispatch_source> timer;
	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id event_block;
	double last_fire_time;
	double min_fire_interval;
	AB ever_resumed;

}
-(void)dealloc;
@end

