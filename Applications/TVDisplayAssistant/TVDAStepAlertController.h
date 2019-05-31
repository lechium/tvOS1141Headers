//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSUITextAlertController.h"

@class NSString, TVDAStep, TVSUITextAlertButton, UILabel;

@interface TVDAStepAlertController : TVSUITextAlertController
{
    TVSUITextAlertButton *_timerButton;	// 8 = 0x8
    NSString *_initialTimerButtonTitle;	// 16 = 0x10
    UILabel *_debugModeLabel;	// 24 = 0x18
    TVDAStep *_step;	// 32 = 0x20
    CDUnknownBlockType _actionFlowHandler;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType actionFlowHandler; // @synthesize actionFlowHandler=_actionFlowHandler;
@property(readonly, nonatomic) TVDAStep *step; // @synthesize step=_step;
- (void).cxx_destruct;	// IMP=0x00000001000124a4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100012348
- (void)_updateInternalLabelWithMode:(id)arg1;	// IMP=0x0000000100012278
- (void)_handleActionTimerStatusChange:(double)arg1;	// IMP=0x0000000100012144
- (void)_triggerActionHandlerWithAction:(id)arg1;	// IMP=0x00000001000120e0
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000100012048
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100011edc
- (void)viewDidLoad;	// IMP=0x0000000100011ba4
- (void)dealloc;	// IMP=0x0000000100011b04
- (id)initWithStep:(id)arg1 actionFlowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100011258
- (id)initWithTitle:(id)arg1 text:(id)arg2 footers:(id)arg3;	// IMP=0x0000000100011244

@end

