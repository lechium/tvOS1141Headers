//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface MTGenericSettingsFooterLabelView : UIView
{
    _Bool _topAlignLabel;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
}

+ (double)labelInset;	// IMP=0x00000001001b4b50
@property(nonatomic) _Bool topAlignLabel; // @synthesize topAlignLabel=_topAlignLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x00000001001b5120
- (void)_updateColors;	// IMP=0x00000001001b503c
- (_Bool)_isInDarkMode;	// IMP=0x00000001001b4fec
- (void)_setupLabelWithFont:(id)arg1;	// IMP=0x00000001001b4e38
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001001b4d68
- (void)layoutSubviews;	// IMP=0x00000001001b4b58
- (id)initWithFont:(id)arg1;	// IMP=0x00000001001b4a98

@end
