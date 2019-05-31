//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVHSAsynchronousOperation.h"

@class NSError, TVHAnalyzedImageColors, TVHKMediaEntity, TVImageProxy;

@interface TVHImageColorAnalyzerOperation : TVHSAsynchronousOperation
{
    _Bool _analyzesCachedImageOnly;	// 24 = 0x18
    _Bool _handledImageProxyCompletion;	// 25 = 0x19
    TVHAnalyzedImageColors *_analyzedImageColors;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    TVHKMediaEntity *_mediaEntity;	// 48 = 0x30
    TVImageProxy *_imageProxy;	// 56 = 0x38
    struct CGSize _scaleSize;	// 64 = 0x40
}

@property(nonatomic) _Bool handledImageProxyCompletion; // @synthesize handledImageProxyCompletion=_handledImageProxyCompletion;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) TVHKMediaEntity *mediaEntity; // @synthesize mediaEntity=_mediaEntity;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHAnalyzedImageColors *analyzedImageColors; // @synthesize analyzedImageColors=_analyzedImageColors;
@property(nonatomic) _Bool analyzesCachedImageOnly; // @synthesize analyzesCachedImageOnly=_analyzesCachedImageOnly;
@property(nonatomic) struct CGSize scaleSize; // @synthesize scaleSize=_scaleSize;
- (void).cxx_destruct;	// IMP=0x000000010000f86c
- (void)cancel;	// IMP=0x000000010000f70c
- (void)executionDidBegin;	// IMP=0x000000010000f36c
- (id)initWithMediaEntity:(id)arg1;	// IMP=0x000000010000f2b4
- (id)init;	// IMP=0x000000010000f22c

@end

