//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTListResultsController.h"

@class MTPlayerManifest;

@interface MTManifestResultsController : MTListResultsController
{
    MTPlayerManifest *_manifest;	// 8 = 0x8
}

@property(retain, nonatomic) MTPlayerManifest *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;	// IMP=0x00000001001b4a84
- (void)_manifestDidChange;	// IMP=0x00000001001b49fc
- (void)reloadData;	// IMP=0x00000001001b4860
- (unsigned long long)startingIndexForDisplay;	// IMP=0x00000001001b480c
- (void)dealloc;	// IMP=0x00000001001b46e8
- (id)init;	// IMP=0x00000001001b45ec

@end
