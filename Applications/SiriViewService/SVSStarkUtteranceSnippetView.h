//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface SVSStarkUtteranceSnippetView : UIView
{
    UILabel *_label;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_label) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;	// IMP=0x00000001000473cc
- (void)layoutSubviews;	// IMP=0x0000000100047230
@property(copy, nonatomic) NSString *prompt;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100046f10
- (_Bool)canBecomeFirstResponder;	// IMP=0x0000000100046f08

@end

