/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {

	NSMapTable* _cachedEndpoints;
	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _discoverySession;
	void* _callbackToken;

}
-(id)init;
-(void)dealloc;
-(void)setDiscoveryMode:(long long)arg1 ;
-(BOOL)devicePresenceDetected;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)discoveryMode;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endpointsDidChange:(id)arg1 ;
@end

