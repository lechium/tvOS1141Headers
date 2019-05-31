//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface TVMusicPlaylistImageRequest : NSObject
{
    NSString *_requestIdentifier;	// 8 = 0x8
    NSMutableDictionary *_images;	// 16 = 0x10
    NSMutableDictionary *_pendingProxies;	// 24 = 0x18
    _Bool _cancelled;	// 32 = 0x20
    NSArray *_imageProxies;	// 40 = 0x28
    NSString *_playlistStyle;	// 48 = 0x30
    double _upscaleAdjustment;	// 56 = 0x38
    double _cornerRadius;	// 64 = 0x40
    CDUnknownBlockType _completionHandler;	// 72 = 0x48
    struct CGSize _scaleToSize;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double upscaleAdjustment; // @synthesize upscaleAdjustment=_upscaleAdjustment;
@property(nonatomic) struct CGSize scaleToSize; // @synthesize scaleToSize=_scaleToSize;
@property(readonly, copy, nonatomic) NSString *playlistStyle; // @synthesize playlistStyle=_playlistStyle;
@property(readonly, copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
- (void).cxx_destruct;	// IMP=0x000000010003efec
- (void)loadImagesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003e744
- (id)identifier;	// IMP=0x000000010003e168
- (id)initWithImageProxies:(id)arg1 playlistStyle:(id)arg2;	// IMP=0x000000010003e098

@end

