//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKViewController.h"

@class TVSettingsDiagnosticLogsFacade;

@interface TVSettingsPrivacyDataViewController : TSKViewController
{
    TVSettingsDiagnosticLogsFacade *_logsFacade;	// 8 = 0x8
}

@property(retain, nonatomic) TVSettingsDiagnosticLogsFacade *logsFacade; // @synthesize logsFacade=_logsFacade;
- (void).cxx_destruct;	// IMP=0x000000010000788c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000077b0
- (id)loadSettingGroups;	// IMP=0x00000001000072bc
- (void)dealloc;	// IMP=0x0000000100007250
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000071a8

@end

