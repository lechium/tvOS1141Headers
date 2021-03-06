//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDashboardCollectionViewController.h"

#import "GKComposeControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class GKChallenge, NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UITextField, UIView, UIViewController;

@interface GKDashboardChallengePlayerPickerViewController : GKDashboardCollectionViewController <UITextFieldDelegate, UISearchBarDelegate, GKComposeControllerDelegate>
{
    _Bool _shouldIgnoreClearSelection;	// 8 = 0x8
    _Bool _shouldApplyInitialOffset;	// 9 = 0x9
    NSString *_message;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    GKChallenge *_challenge;	// 32 = 0x20
    NSArray *_initiallySelectedPlayers;	// 40 = 0x28
    UILabel *_descriptionLabel;	// 48 = 0x30
    UIButton *_sendButton;	// 56 = 0x38
    UIButton *_customizeMessageButton;	// 64 = 0x40
    UITextField *_messageField;	// 72 = 0x48
    UIView *_scrollingHeader;	// 80 = 0x50
    NSLayoutConstraint *_scrollingHeaderTopConstraint;	// 88 = 0x58
    double _scrollingHeaderTopConstraintConstant;	// 96 = 0x60
    NSLayoutConstraint *_customizeMessageBottomConstraint;	// 104 = 0x68
    double _initialCustomizeMessageBottomConstraintConstant;	// 112 = 0x70
    UIViewController *_composeController;	// 120 = 0x78
    struct UIEdgeInsets _initialInsets;	// 128 = 0x80
}

@property(retain, nonatomic) UIViewController *composeController; // @synthesize composeController=_composeController;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) _Bool shouldApplyInitialOffset; // @synthesize shouldApplyInitialOffset=_shouldApplyInitialOffset;
@property(nonatomic) struct UIEdgeInsets initialInsets; // @synthesize initialInsets=_initialInsets;
@property(nonatomic) double scrollingHeaderTopConstraintConstant; // @synthesize scrollingHeaderTopConstraintConstant=_scrollingHeaderTopConstraintConstant;
@property(nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint; // @synthesize scrollingHeaderTopConstraint=_scrollingHeaderTopConstraint;
@property(nonatomic) UIView *scrollingHeader; // @synthesize scrollingHeader=_scrollingHeader;
@property(nonatomic) UITextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) UIButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) _Bool shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(retain, nonatomic) NSArray *initiallySelectedPlayers; // @synthesize initiallySelectedPlayers=_initiallySelectedPlayers;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010002915c
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000010002910c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000290bc
- (void)setSearchText:(id)arg1;	// IMP=0x0000000100028f28
- (void)_updateButtonEnableState;	// IMP=0x0000000100028e74
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100028d9c
- (void)cancel:(id)arg1;	// IMP=0x0000000100028d4c
- (void)addMessage:(id)arg1;	// IMP=0x0000000100028b58
- (void)send:(id)arg1;	// IMP=0x0000000100028a9c
- (void)clearSelection;	// IMP=0x0000000100028a20
- (id)preferredFocusEnvironments;	// IMP=0x000000010002896c
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x00000001000288b0
- (void)selectPlayersAtIndexPaths:(id)arg1;	// IMP=0x0000000100028708
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000010002848c
- (void)loadData;	// IMP=0x0000000100028390
- (void)applyInitialContentOffset;	// IMP=0x0000000100028228
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000100028168
- (void)adjustCustomizeMessageConstraint;	// IMP=0x0000000100028088
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100027ff0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100027e08
- (void)viewDidLoad;	// IMP=0x00000001000279d4
- (void)dealloc;	// IMP=0x0000000100027928
- (id)initWithChallenge:(id)arg1 initiallySelectedPlayers:(id)arg2;	// IMP=0x00000001000277a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

