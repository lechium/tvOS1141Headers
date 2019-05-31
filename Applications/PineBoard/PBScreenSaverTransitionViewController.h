//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class PBRemoteViewController;

@interface PBScreenSaverTransitionViewController : UIViewController
{
    _Bool _isPresented;	// 8 = 0x8
    PBRemoteViewController *_screenSaverViewController;	// 16 = 0x10
}

@property(readonly, nonatomic) PBRemoteViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
- (void).cxx_destruct;	// IMP=0x00000001000a1c44
- (id)_wallpaperViewForTransitionFromAppWithIdentifier:(id)arg1;	// IMP=0x00000001000a1af8
- (id)_santizedViewServiceOptions:(id)arg1;	// IMP=0x00000001000a1908
- (void)_animatePresentation:(_Bool)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a0270
- (void)_animatePresentationOverSystem:(_Bool)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009fefc
- (void)dismissScreenSaverViewControllerWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009fabc
- (void)presentScreenSaverViewControllerWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009f5cc

@end
