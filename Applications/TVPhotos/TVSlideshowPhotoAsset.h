//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVMutablePhotoAsset.h"

@class PHAsset;

@interface TVSlideshowPhotoAsset : TVMutablePhotoAsset
{
    int _pendingRequestID;	// 8 = 0x8
    PHAsset *_photoAsset;	// 16 = 0x10
}

@property(nonatomic) int pendingRequestID; // @synthesize pendingRequestID=_pendingRequestID;
@property(retain, nonatomic) PHAsset *photoAsset; // @synthesize photoAsset=_photoAsset;
- (void).cxx_destruct;	// IMP=0x0000000100033fac

@end

