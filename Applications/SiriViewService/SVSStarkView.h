//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVSStarkGatekeeperHeaderView, UIButton, UILabel;

@interface SVSStarkView : UIView
{
    id <SVSStarkViewDataSource> _dataSource;	// 8 = 0x8
    id <SVSStarkViewDelegate> _delegate;	// 16 = 0x10
    UIView *_snippetView;	// 24 = 0x18
    SVSStarkGatekeeperHeaderView *_gatekeeperHeader;	// 32 = 0x20
    UIView *_dismisserView;	// 40 = 0x28
    UIButton *_selectButton;	// 48 = 0x30
    UILabel *_assistantVersionLabel;	// 56 = 0x38
}

+ (_Bool)_shouldShowBugReportUI;	// IMP=0x00000001000620e0
@property(retain, nonatomic) UILabel *assistantVersionLabel; // @synthesize assistantVersionLabel=_assistantVersionLabel;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic, getter=_dismisserView) UIView *dismisserView; // @synthesize dismisserView=_dismisserView;
@property(retain, nonatomic) SVSStarkGatekeeperHeaderView *gatekeeperHeader; // @synthesize gatekeeperHeader=_gatekeeperHeader;
@property(retain, nonatomic) UIView *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak id <SVSStarkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSStarkViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x0000000100062324
- (void)_destroyAssistantVersionLabelIfNecessary;	// IMP=0x000000010006220c
- (void)_createAssistantVersionLabelIfNecessary;	// IMP=0x00000001000621a4
- (void)_preferencesDidChange;	// IMP=0x0000000100062144
- (void)layoutSubviews;	// IMP=0x0000000100061dd0
- (id)preferredFocusEnvironments;	// IMP=0x0000000100061cd4
- (void)reloadData;	// IMP=0x0000000100061b64
- (void)_selectButtonTapped:(id)arg1;	// IMP=0x00000001000612f8
- (void)dealloc;	// IMP=0x0000000100061270
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000610ec

@end

