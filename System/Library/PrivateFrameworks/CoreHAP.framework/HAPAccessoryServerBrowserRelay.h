/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser {

	NSMutableArray* _discoveredAccessoryServers;
	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) NSMutableArray * discoveredAccessoryServers;                      //@synthesize discoveredAccessoryServers=_discoveredAccessoryServers - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                         //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id<HAPAccessoryServerBrowserDelegate>)delegate;
-(void)setDelegate:(id<HAPAccessoryServerBrowserDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_setDelegate:(id)arg1 queue:(id)arg2 ;
-(long long)linkType;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 ;
-(void)removeAccessoryServerWithStream:(id)arg1 ;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(NSMutableArray *)discoveredAccessoryServers;
@end

