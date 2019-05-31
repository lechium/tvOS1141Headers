//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSBulletinPresenter.h"

@class NSString, PBSBulletin, TVSUIBulletinView;

@interface TVSBBulletinViewController : UIViewController <PBSBulletinPresenter>
{
    PBSBulletin *_bulletin;	// 8 = 0x8
    TVSUIBulletinView *_bulletinView;	// 16 = 0x10
}

+ (id)_exportedInterface;	// IMP=0x0000000100004c84
@property(retain, nonatomic) TVSUIBulletinView *bulletinView; // @synthesize bulletinView=_bulletinView;
@property(retain, nonatomic) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (void).cxx_destruct;	// IMP=0x00000001000059f4
- (id)_bulletinImageForItem:(id)arg1;	// IMP=0x0000000100005650
- (void)_configureBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x00000001000053c4
- (id)_bulletinViewForBulletin:(id)arg1;	// IMP=0x0000000100005288
- (void)_hideBulletinViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000050d8
- (void)_showBulletinView:(_Bool)arg1;	// IMP=0x0000000100004f28
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004f18
- (void)bulletinServiceUpdateWithBulletin:(id)arg1;	// IMP=0x0000000100004e94
- (void)bulletinServiceBeginPresentationWithBulletin:(id)arg1;	// IMP=0x0000000100004d80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
