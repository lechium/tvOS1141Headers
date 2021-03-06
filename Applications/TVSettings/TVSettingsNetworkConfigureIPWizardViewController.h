//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TVSettingsIPEntryViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, TVSEthernetInterface, TVSettingsIPEntryViewController;

@interface TVSettingsNetworkConfigureIPWizardViewController : UIViewController <TVSettingsIPEntryViewControllerDelegate, UIGestureRecognizerDelegate>
{
    NSString *_ipAddress;	// 8 = 0x8
    NSString *_subnetMask;	// 16 = 0x10
    NSString *_routerAddress;	// 24 = 0x18
    NSString *_primaryDNSAddress;	// 32 = 0x20
    TVSEthernetInterface *_interface;	// 40 = 0x28
    long long _currentState;	// 48 = 0x30
    TVSettingsIPEntryViewController *_currentViewController;	// 56 = 0x38
}

@property(retain, nonatomic) TVSettingsIPEntryViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) TVSEthernetInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;	// IMP=0x0000000100070ce8
- (void)_transitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000010007089c
- (id)_configureDNSAddressVC;	// IMP=0x0000000100070734
- (id)_configureRouterAddressVC;	// IMP=0x00000001000705cc
- (id)_configureSubnetMaskVC;	// IMP=0x0000000100070464
- (id)_configureIPAddressVC;	// IMP=0x00000001000702fc
- (id)_viewControllerForState:(long long)arg1;	// IMP=0x0000000100070268
- (void)_setAutomaticConfigurationEnabled:(_Bool)arg1;	// IMP=0x0000000100070018
- (long long)_initialState;	// IMP=0x0000000100070010
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010006ffcc
- (void)_menuPressed:(id)arg1;	// IMP=0x000000010006fef0
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x000000010006fd4c
- (id)preferredFocusEnvironments;	// IMP=0x000000010006fd34
- (_Bool)becomeFirstResponder;	// IMP=0x000000010006fd1c
- (void)viewDidLoad;	// IMP=0x000000010006fa8c
- (id)initWithInterface:(id)arg1;	// IMP=0x000000010006f8b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

