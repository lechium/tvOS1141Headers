//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, TVArchivedLayeredImageProxy;

@interface TVPImageStack : NSObject <NSCopying>
{
    int _blendMode;	// 8 = 0x8
    double _flatImageCornerRadius;	// 16 = 0x10
    NSArray *_imageRepresentations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_layeredImageLoadingQueue;	// 32 = 0x20
    TVArchivedLayeredImageProxy *_layeredImageProxy;	// 40 = 0x28
    NSArray *_imageProxies;	// 48 = 0x30
    NSMutableSet *_loadingOperations;	// 56 = 0x38
    struct CGSize _naturalSize;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    _Bool _topLayerIsFixedFrame;	// 88 = 0x58
    _Bool _legacy;	// 89 = 0x59
    id _placeholderImage;	// 96 = 0x60
    id _flatImage;	// 104 = 0x68
}

+ (struct CGSize)_naturalSizeForImageStackSpecification:(id)arg1;	// IMP=0x000000010004539c
+ (id)_loadingOperationQueue;	// IMP=0x00000001000452ac
+ (id)_imageRepresentationsForImageStackSpecification:(id)arg1 fromURL:(id)arg2;	// IMP=0x0000000100044754
+ (id)_imageRepresentationsForUIImage:(id)arg1 outFlatImage:(out id *)arg2 outFlatImageCornerRadius:(out double *)arg3;	// IMP=0x0000000100044438
@property(nonatomic) _Bool legacy; // @synthesize legacy=_legacy;
@property(retain, nonatomic) id flatImage; // @synthesize flatImage=_flatImage;
@property(retain, nonatomic) id placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (void).cxx_destruct;	// IMP=0x0000000100046a48
- (void)_loadImagesAtSize:(struct CGSize)arg1 scaledSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004586c
- (void)_loadLayeredImageProxy;	// IMP=0x0000000100045520
- (void)loadImagesAtSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044424
- (void)setTopLayerIsFixedFrame:(_Bool)arg1;	// IMP=0x0000000100044414
- (_Bool)topLayerIsFixedFrame;	// IMP=0x0000000100044404
- (void)setBlendMode:(int)arg1;	// IMP=0x00000001000443f4
- (int)blendMode;	// IMP=0x00000001000443e4
- (void)setFlatImageCornerRadius:(double)arg1;	// IMP=0x00000001000443d4
- (struct CGSize)naturalSize;	// IMP=0x00000001000443c0
- (double)flatImageCornerRadius;	// IMP=0x00000001000443b0
- (id)imageProxies;	// IMP=0x00000001000443a0
- (id)layeredImageProxy;	// IMP=0x0000000100044390
- (void)cancel;	// IMP=0x00000001000442d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000441e0
- (id)initWithArchivedLayeredImageProxy:(id)arg1;	// IMP=0x0000000100044150
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100043f6c
- (id)initWithImageProxies:(id)arg1;	// IMP=0x0000000100043d58
- (id)initWithImages:(id)arg1;	// IMP=0x00000001000439cc
- (id)initWithImageURLs:(id)arg1;	// IMP=0x000000010004373c
- (id)init;	// IMP=0x0000000100043660

@end

