/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPBroadcastControllerDelegate;
@class NSDictionary, NSString, RPBroadcastViewController, NSURL;

@interface RPBroadcastController : NSObject {

	NSDictionary* _serviceInfo;
	id<RPBroadcastControllerDelegate> _delegate;
	NSString* _broadcastExtensionBundleID;
	RPBroadcastViewController* _broadcastViewController;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                                         //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL; 
@property (nonatomic,readonly) RPBroadcastViewController * broadcastViewController;              //@synthesize broadcastViewController=_broadcastViewController - In the implementation block
@property (getter=isBroadcasting,nonatomic,readonly) BOOL broadcasting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic,__weak) id<RPBroadcastControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * broadcastExtensionBundleID;                            //@synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID - In the implementation block
-(id)init;
-(id<RPBroadcastControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isPaused;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceInfo;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSURL *)broadcastURL;
-(id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 broadcastViewController:(id)arg3 ;
-(id)initWithCurrentSession;
-(BOOL)isBroadcasting;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)finishBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSString *)broadcastExtensionBundleID;
-(RPBroadcastViewController *)broadcastViewController;
@end

