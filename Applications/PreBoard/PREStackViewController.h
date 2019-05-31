//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, UIView;

@interface PREStackViewController : UIViewController
{
    struct NSArray *_viewControllers;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
}

@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;	// IMP=0x0000000100008600
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000085bc
- (void)viewDidLoad;	// IMP=0x0000000100008474
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x0000000100008418
- (void)replaceViewController:(id)arg1 withViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100008344
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000082ac
- (void)popToViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000822c
- (void)popToRootViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000001000081bc
- (void)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100008134
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000807c
@property(readonly, nonatomic) UIViewController *visibleViewController;
@property(readonly, nonatomic) UIViewController *topViewController;
- (void)_setViewControllers:(struct NSArray *)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007478
- (void)setViewControllers:(struct NSArray *)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100007468
- (void)loadView;	// IMP=0x00000001000073b0
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000010000733c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000072d0

@end

