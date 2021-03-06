/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKCloudServiceSetupRemoteViewControllerDelegate <NSObject>
@required
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 didFinishLoadingWithSuccess:(BOOL)arg2 error:(id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissalWithAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsDismissingSafariViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)cloudServiceSetupRemoteViewController:(id)arg1 requestsPresentingSafariViewControllerWithURL:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;

@end

