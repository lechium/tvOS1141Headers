//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer;

@interface AEHighlightLine : NSObject
{
    CALayer *mLayer;	// 8 = 0x8
    struct CGRect mFullLineRect;	// 16 = 0x10
    struct CGRect mCurrentLineRect;	// 48 = 0x30
    double mUnderlinePosition;	// 80 = 0x50
    struct CGImage *mMultiplyImage;	// 88 = 0x58
    _Bool mLightenBlend;	// 96 = 0x60
    _Bool mIncludesCapSpace;	// 97 = 0x61
    _Bool mIsSingleWord;	// 98 = 0x62
    int mUnderlineDirection;	// 100 = 0x64
    CALayer *mContentLayer;	// 104 = 0x68
}

@property(nonatomic) _Bool isSingleWord; // @synthesize isSingleWord=mIsSingleWord;
@property(nonatomic) _Bool includesCapSpace; // @synthesize includesCapSpace=mIncludesCapSpace;
@property(nonatomic) _Bool lightenBlend; // @synthesize lightenBlend=mLightenBlend;
@property(nonatomic) struct CGImage *multiplyImage; // @synthesize multiplyImage=mMultiplyImage;
@property(nonatomic) int underlineDirection; // @synthesize underlineDirection=mUnderlineDirection;
@property(nonatomic) double underlinePosition; // @synthesize underlinePosition=mUnderlinePosition;
@property(nonatomic) struct CGRect currentLineRect; // @synthesize currentLineRect=mCurrentLineRect;
@property(nonatomic) struct CGRect fullLineRect; // @synthesize fullLineRect=mFullLineRect;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=mContentLayer;
- (void)dealloc;	// IMP=0x00000001002265d4

@end
