//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewCell.h"

@class UISwitch;

@interface MTSwitchCell : MTTableViewCell
{
    CDUnknownBlockType _toggleChanged;	// 24 = 0x18
    UISwitch *_toggle;	// 32 = 0x20
}

+ (id)titleFont;	// IMP=0x0000000100034d78
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
@property(copy, nonatomic) CDUnknownBlockType toggleChanged; // @synthesize toggleChanged=_toggleChanged;
- (void).cxx_destruct;	// IMP=0x0000000100034e28
- (void)toggleChanged:(id)arg1;	// IMP=0x0000000100034d98
- (void)setupCell;	// IMP=0x0000000100034bec
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000100034b6c
- (void)toggleOn:(_Bool)arg1;	// IMP=0x0000000100034b24

@end

