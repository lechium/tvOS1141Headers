//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PBSOSUpdateServiceDelegate.h"

@class NSString, TVSUIOSUpdateView, UITapGestureRecognizer;

@interface TVSettingsOSRestoreViewController : UIViewController <PBSOSUpdateServiceDelegate>
{
    _Bool _cancelOnExit;	// 8 = 0x8
    TVSUIOSUpdateView *_progressView;	// 16 = 0x10
    UITapGestureRecognizer *_menuRecognizer;	// 24 = 0x18
}

@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(nonatomic) _Bool cancelOnExit; // @synthesize cancelOnExit=_cancelOnExit;
@property(retain, nonatomic) TVSUIOSUpdateView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;	// IMP=0x000000010002e98c
- (void)_menuButtonAction:(id)arg1;	// IMP=0x000000010002e578
- (void)osUpdateServiceDidFinishApplyWithData:(id)arg1;	// IMP=0x000000010002e418
- (void)osUpdateServiceDidEncounterSlowUpdateWithData:(id)arg1;	// IMP=0x000000010002e414
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(id)arg1;	// IMP=0x000000010002e410
- (void)osUpdateServiceDidStartApplyWithData:(id)arg1;	// IMP=0x000000010002e350
- (void)osUpdateServiceDidStartRedownloadWithData:(id)arg1;	// IMP=0x000000010002e34c
- (void)osUpdateServiceDidFinishDownloadWithData:(id)arg1;	// IMP=0x000000010002e1c8
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x000000010002dda8
- (void)osUpdateServiceDidStartDownloadWithData:(id)arg1;	// IMP=0x000000010002dda4
- (void)osUpdateServiceDidFinishCheckWithData:(id)arg1;	// IMP=0x000000010002dc24
- (void)osUpdateServiceDidStartCheckWithData:(id)arg1;	// IMP=0x000000010002db7c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010002da9c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010002d96c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010002d734

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

