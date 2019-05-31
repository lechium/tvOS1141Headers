//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIApplicationDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, UIWindow;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    _Bool _isInitialized;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_acceptQueue;	// 24 = 0x18
    NSMutableSet *_activeSharingURLs;	// 32 = 0x20
    NSMutableDictionary *_activeVettingURLToVettingAcceptor;	// 40 = 0x28
}

@property(retain, nonatomic, getter=activeVettingURLToVettingAcceptor) NSMutableDictionary *activeVettingURLToVettingAcceptor; // @synthesize activeVettingURLToVettingAcceptor=_activeVettingURLToVettingAcceptor;
@property(retain, nonatomic, getter=activeSharingURLs) NSMutableSet *activeSharingURLs; // @synthesize activeSharingURLs=_activeSharingURLs;
@property(retain, nonatomic, getter=acceptQueue) NSObject<OS_dispatch_queue> *acceptQueue; // @synthesize acceptQueue=_acceptQueue;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;	// IMP=0x000000010001ac08
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010001aaa8
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010001aaa0
- (void)_handleURL:(id)arg1;	// IMP=0x000000010001a8cc
- (void)vetURL:(id)arg1;	// IMP=0x0000000100019f68
- (void)acceptShareWithMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x0000000100019ec4
- (void)acceptShareWithURL:(id)arg1;	// IMP=0x0000000100019e44
- (void)_acceptShareWithAcceptor:(id)arg1;	// IMP=0x0000000100019554
- (void)initOnce;	// IMP=0x000000010001929c
- (_Bool)_shouldLaunchAcceptFlowForShareURL:(id)arg1;	// IMP=0x0000000100019138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

