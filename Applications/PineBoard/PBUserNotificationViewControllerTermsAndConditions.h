//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVSUITextAlertController.h"

#import "PBUserNotificationViewController.h"

@class NSString, PBCFUserNotification;

@interface PBUserNotificationViewControllerTermsAndConditions : TVSUITextAlertController <PBUserNotificationViewController>
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    PBCFUserNotification *_notification;	// 16 = 0x10
}

@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000d9714
- (void)_handleHomeButton;	// IMP=0x00000001000d9564
- (void)_handleMenuButton;	// IMP=0x00000001000d9468
- (void)viewDidLoad;	// IMP=0x00000001000d8928
- (id)initWithTitle:(id)arg1 text:(id)arg2;	// IMP=0x00000001000d88a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

