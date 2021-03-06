//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UISearchBar;

@interface MTSearchCollectionViewCell : UICollectionViewCell
{
    _Bool _editing;	// 8 = 0x8
    UISearchBar *_searchBar;	// 16 = 0x10
    unsigned long long _style;	// 24 = 0x18
}

+ (double)searchCellHeight;	// IMP=0x000000010008921c
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;	// IMP=0x00000001000894c8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100089474
- (void)layoutSubviews;	// IMP=0x000000010008925c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100089228

@end

