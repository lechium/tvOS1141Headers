//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UILabel;

@interface MTTVNoContentTableViewCell : UITableViewCell
{
    NSString *_message;	// 8 = 0x8
    UILabel *_messageLabel;	// 16 = 0x10
}

+ (id)messageFont;	// IMP=0x000000010009c86c
+ (double)marginBottomForStyle:(unsigned long long)arg1;	// IMP=0x000000010009c858
+ (double)heightForStyle:(unsigned long long)arg1;	// IMP=0x000000010009c7d8
+ (id)reuseIdentifier;	// IMP=0x000000010009c7ac
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;	// IMP=0x000000010009cf4c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010009cea0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010009cdd0
- (void)layoutSubviews;	// IMP=0x000000010009cc94
- (void)updateTextColors;	// IMP=0x000000010009cc24
- (void)configureSubviews;	// IMP=0x000000010009ca44
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010009c968
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000010009c950
- (id)initWithMessage:(id)arg1;	// IMP=0x000000010009c8f0
- (id)init;	// IMP=0x000000010009c88c

@end
