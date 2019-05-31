/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class RPBroadcastHandler, NSString;

@interface RPBroadcastExtensionViewController : UIViewController <NSXPCListenerDelegate> {

	RPBroadcastHandler* _broadcastHandler;

}

@property (nonatomic,retain) RPBroadcastHandler * broadcastHandler;              //@synthesize broadcastHandler=_broadcastHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBroadcastHandler:(RPBroadcastHandler *)arg1 ;
-(RPBroadcastHandler *)broadcastHandler;
-(id)broadcastExtensionContext;
-(void)completeSetupWithBroadcastURL:(id)arg1 ;
-(id)initWithBroadcastHandler:(id)arg1 ;
-(void)updateBroadcastHandlerListenerEndpoint:(/*^block*/id)arg1 ;
@end

