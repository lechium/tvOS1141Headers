//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDetailViewController.h"

@class GKAchievement, GKAchievementIconView, UIButton, UILabel;

@interface GKDashboardAchievementDetailViewController : GKDetailViewController
{
    GKAchievementIconView *_iconView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    UILabel *_progressLabel;	// 32 = 0x20
    UILabel *_disabledLabel;	// 40 = 0x28
    UIButton *_firstButton;	// 48 = 0x30
    UIButton *_secondButton;	// 56 = 0x38
    GKAchievement *_achievement;	// 64 = 0x40
    GKAchievement *_localAchievement;	// 72 = 0x48
}

@property(retain, nonatomic) GKAchievement *localAchievement; // @synthesize localAchievement=_localAchievement;
@property(retain, nonatomic) GKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *disabledLabel; // @synthesize disabledLabel=_disabledLabel;
@property(nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) GKAchievementIconView *iconView; // @synthesize iconView=_iconView;
- (void)share:(id)arg1;	// IMP=0x0000000100009854
- (void)challenge:(id)arg1;	// IMP=0x0000000100009750
- (void)configureForAchievements;	// IMP=0x0000000100008f04
- (id)preferredFocusEnvironments;	// IMP=0x0000000100008e80
- (void)viewDidLoad;	// IMP=0x0000000100008de8
- (void)dealloc;	// IMP=0x0000000100008d78
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2;	// IMP=0x0000000100008c9c

@end

