//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AEAnnotationSidecarProducer.h"

@class NSArray, NSMutableSet, NSString;

@interface AEAnnotationSidecarConsumer : AEAnnotationSidecarProducer
{
    NSArray *_bookmarks;	// 32 = 0x20
    NSString *_timestamp;	// 40 = 0x28
    NSMutableSet *_acknowledgedMismatchingAssetIDs;	// 48 = 0x30
}

+ (id)doesNotExistTimestamp;	// IMP=0x0000000100253918
+ (id)modificationDatesFromDictionaryRepresentations:(id)arg1;	// IMP=0x0000000100252b1c
+ (id)annotationUuidsFromDictionaryRepresentations:(id)arg1;	// IMP=0x000000010025298c
- (_Bool)acknowledgeMergingAnnotationsWithAssetVersionMismatch:(id)arg1 assetID:(id)arg2 provider:(id)arg3;	// IMP=0x0000000100253e6c
- (void)read;	// IMP=0x0000000100253bfc
- (void)cacheTimestamp;	// IMP=0x0000000100253adc
- (_Bool)isChangedGeneration;	// IMP=0x0000000100253ad4
- (_Bool)isChangedTimestamp;	// IMP=0x0000000100253acc
- (id)fileTimestamp;	// IMP=0x0000000100253960
- (id)timestampCacheKey;	// IMP=0x0000000100253924
- (void)mergeIntoAnnotationProvider:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100252cb4
- (void)dealloc;	// IMP=0x00000001002528f4

@end

