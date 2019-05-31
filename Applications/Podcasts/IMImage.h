//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface IMImage : UIImage
{
    double _capWidth;	// 8 = 0x8
    UIImage *_left;	// 16 = 0x10
    UIImage *_right;	// 24 = 0x18
    UIImage *_middle;	// 32 = 0x20
}

+ (id)imageNamed:(id)arg1;	// IMP=0x0000000100232d9c
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x0000000100233174
- (void)drawInRect:(struct CGRect)arg1 blendMode:(int)arg2 alpha:(double)arg3;	// IMP=0x0000000100233004
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000100232f04
- (id)stretchableImageWithLeftCapWidth:(long long)arg1 topCapHeight:(long long)arg2;	// IMP=0x0000000100232ee8
- (void)dealloc;	// IMP=0x0000000100232e64
- (id)initWithCGImage:(struct CGImage *)arg1 capWidth:(double)arg2 scale:(double)arg3 orientation:(long long)arg4;	// IMP=0x0000000100232b78

@end

