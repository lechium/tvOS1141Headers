//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TVSBSLevelBarView : UIView
{
    NSArray *_boxes;	// 8 = 0x8
    unsigned long long _numLevels;	// 16 = 0x10
    unsigned long long _level;	// 24 = 0x18
}

+ (struct CGRect)_boundsForNumLevels:(unsigned long long)arg1;	// IMP=0x0000000100005e08
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned long long numLevels; // @synthesize numLevels=_numLevels;
- (void).cxx_destruct;	// IMP=0x0000000100005fc0
- (void)_updateLevels;	// IMP=0x0000000100005e34
- (void)layoutSubviews;	// IMP=0x0000000100005c98
- (id)initWithNumLevels:(unsigned long long)arg1;	// IMP=0x0000000100005ac4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100005a78
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100005a34

@end

