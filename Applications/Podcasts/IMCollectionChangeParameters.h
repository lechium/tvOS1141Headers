//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, UIImage, UIImageView, UIView;

@interface IMCollectionChangeParameters : NSObject
{
    UIImage *_image;	// 8 = 0x8
    UIView *_primaryView;	// 16 = 0x10
    NSArray *_secondaryViews;	// 24 = 0x18
    NSIndexPath *_indexPath;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSArray *secondaryViews; // @synthesize secondaryViews=_secondaryViews;
@property(retain, nonatomic) UIView *primaryView; // @synthesize primaryView=_primaryView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)description;	// IMP=0x00000001001d042c
- (void)dealloc;	// IMP=0x00000001001d0384
@property(readonly, retain, nonatomic) UIImageView *imageView;

@end

