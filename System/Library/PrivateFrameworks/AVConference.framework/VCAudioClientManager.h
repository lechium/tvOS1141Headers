/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:07 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCAudioClientManager : NSObject {

	NSMutableDictionary* _clientList;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)unregisterBlocksForService;
-(id)getAudioClientWithProcessId:(id)arg1 create:(BOOL)arg2 ;
@end
