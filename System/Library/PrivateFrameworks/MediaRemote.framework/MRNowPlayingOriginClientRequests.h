/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, _MRDeviceInfoMessageProtobuf, NSMutableArray, NSMutableDictionary, _MROriginProtobuf;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	NSMutableArray* _nowPlayingClients;
	NSMutableDictionary* _transactionCallbacks;
	_MROriginProtobuf* _origin;

}

@property (nonatomic,readonly) _MROriginProtobuf * origin;                         //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) _MRDeviceInfoMessageProtobuf * deviceInfo; 
-(id)initWithOrigin:(id)arg1 ;
-(id)debugDescription;
-(_MROriginProtobuf *)origin;
-(void)removeClient:(id)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)_handleDeviceInfoDidChange:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(id)nowPlayingClients;
-(id)nowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1 ;
-(void)setTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(/*^block*/id)transactionCallbackForName:(unsigned long long)arg1 ;
@end

