//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HBTopShelfImageStackCollectionViewCell.h"

@interface HBTopShelfBannerViewCell : HBTopShelfImageStackCollectionViewCell
{
    struct {
        unsigned int delegateDidChangeFocusDirection:1;
        unsigned int delegateDidUnfocus:1;
    } _flags;	// 8 = 0x8
    id <HBTopShelfBannerViewCellDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <HBTopShelfBannerViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010000f0bc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000efe4
- (void)_setFocusDirection:(struct CGPoint)arg1;	// IMP=0x000000010000ef38

@end

