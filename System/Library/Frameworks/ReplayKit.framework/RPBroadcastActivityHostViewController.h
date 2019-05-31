/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/RPBroadcastActivityCommunicationHostProtocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol> {

	RPBroadcastActivityViewController* _broadcastActivityViewController;

}

@property (assign,nonatomic,__weak) RPBroadcastActivityViewController * broadcastActivityViewController;              //@synthesize broadcastActivityViewController=_broadcastActivityViewController - In the implementation block
-(long long)modalPresentationStyle;
-(void)viewDidLoad;
-(unsigned long long)popoverArrowDirection;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4 ;
-(CGRect)popoverControllerSourceRect;
-(oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 broadcastConfigurationData:(id)arg4 userInfo:(id)arg5 cancelled:(BOOL)arg6 ;
-(oneway void)presentationInfoWithCompletion:(/*^block*/id)arg1 ;
-(RPBroadcastActivityViewController *)broadcastActivityViewController;
-(void)setBroadcastActivityViewController:(RPBroadcastActivityViewController *)arg1 ;
@end

