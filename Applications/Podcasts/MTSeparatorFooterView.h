//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class UIView;

@interface MTSeparatorFooterView : UITableViewHeaderFooterView
{
    UIView *_dividerView;	// 8 = 0x8
    struct UIEdgeInsets _separatorInsets;	// 16 = 0x10
    struct CGRect _floatingRect;	// 48 = 0x30
}

+ (double)heightForSeparatorInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000010016444c
+ (id)reuseIdentifier;	// IMP=0x0000000100164448
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(nonatomic) struct CGRect floatingRect; // @synthesize floatingRect=_floatingRect;
@property(nonatomic) struct UIEdgeInsets separatorInsets; // @synthesize separatorInsets=_separatorInsets;
- (void).cxx_destruct;	// IMP=0x00000001001648c4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000100164760
- (void)layoutSubviews;	// IMP=0x000000010016460c
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000001001644c4

@end

