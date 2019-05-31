//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVApplicationControllerDelegate.h"
#import "TVWNViewServicePresenter.h"

@class NSString, TVApplicationController, TVStoreApplicationSetupHelper;

@interface TVWhatsNewViewController : UIViewController <TVWNViewServicePresenter, TVApplicationControllerDelegate>
{
    TVApplicationController *_appController;	// 8 = 0x8
    TVStoreApplicationSetupHelper *_setupHelper;	// 16 = 0x10
    CDUnknownBlockType _messageReplyBlock;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100003f68
+ (id)_exportedInterface;	// IMP=0x0000000100003e18
- (void).cxx_destruct;	// IMP=0x0000000100004020
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100003854
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000037c4
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100003420
- (void)_executeRemoteMethod:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000032c4
- (void)_markAsSeenAndDismiss;	// IMP=0x0000000100003238
- (void)_handleDismissNotification:(id)arg1;	// IMP=0x0000000100003194
- (void)_loadWithBootURL:(id)arg1;	// IMP=0x0000000100002f94
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100002e94
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100002d38
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100002ca4
- (void)_presetLaunchErrorDialog;	// IMP=0x0000000100002ac4
- (void)_setupContentViewWithAppCntroller:(id)arg1;	// IMP=0x00000001000029ac
- (void)loadView;	// IMP=0x0000000100002910
- (void)dealloc;	// IMP=0x0000000100002898
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100002574

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

