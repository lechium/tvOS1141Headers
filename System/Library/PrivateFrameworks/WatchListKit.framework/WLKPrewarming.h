/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface WLKPrewarming : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(void)prewarm;
-(id)init;
-(id)_init;
-(id)_connection;
@end
