//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMBaseStoreService.h"

@class NSDictionary;

@interface MTLibraryLinkService : IMBaseStoreService
{
    NSDictionary *_requestParams;	// 8 = 0x8
}

@property(retain, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
- (void).cxx_destruct;	// IMP=0x00000001001abcc4
- (void)updateAdamIdForPodcast:(id)arg1 withFeedURLs:(id)arg2;	// IMP=0x00000001001ab798
- (id)requestWithParams:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab374
- (id)createURL;	// IMP=0x00000001001ab274
- (id)init;	// IMP=0x00000001001ab1c8

@end

