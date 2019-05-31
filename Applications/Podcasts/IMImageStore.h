//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMCache.h"

@class IMImageDiskCache, IMMemoryCache, NSOperationQueue, NSString;

@interface IMImageStore : NSObject <IMCache>
{
    NSString *_name;	// 8 = 0x8
    NSOperationQueue *_fetchOperationQueue;	// 16 = 0x10
    IMMemoryCache *_memoryCache;	// 24 = 0x18
    IMImageDiskCache *_diskCache;	// 32 = 0x20
}

+ (unsigned long long)_memorySize;	// IMP=0x00000001002230ec
+ (int)defaultImageResizeOptions;	// IMP=0x00000001002207fc
+ (double)defaultMaxImageSize;	// IMP=0x00000001002207f0
+ (id)defaultBasePath;	// IMP=0x00000001002207dc
+ (id)defaultName;	// IMP=0x00000001002207b0
+ (id)defaultStore;	// IMP=0x00000001002206f8
@property(readonly, nonatomic) IMImageDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(readonly, nonatomic) IMMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) NSOperationQueue *fetchOperationQueue; // @synthesize fetchOperationQueue=_fetchOperationQueue;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;	// IMP=0x00000001002237e8
- (id)_loadDiskCacheImageForKey:(id)arg1;	// IMP=0x00000001002236f0
- (void)_addImage:(id)arg1 toMemoryCacheWithKey:(id)arg2;	// IMP=0x000000010022361c
- (void)memoryWarning;	// IMP=0x00000001002235dc
- (id)_keyForSize:(struct CGSize)arg1 baseKey:(id)arg2 modifier:(id)arg3;	// IMP=0x0000000100223128
- (id)_keyForSize:(struct CGSize)arg1 baseKey:(id)arg2;	// IMP=0x0000000100223118
- (_Bool)isEmpty;	// IMP=0x00000001002230a0
- (void)removeItemForKey:(id)arg1;	// IMP=0x0000000100222ffc
- (void)removeItemsWithPrefx:(id)arg1;	// IMP=0x0000000100222e7c
- (_Bool)hasItemForKey:(id)arg1;	// IMP=0x0000000100222cc8
- (_Bool)hasItemForKey:(id)arg1 size:(struct CGSize)arg2 modifier:(id)arg3;	// IMP=0x0000000100222b6c
- (_Bool)hasItemForKey:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100222b5c
- (void)clearCache;	// IMP=0x0000000100222ae8
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100222734
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize)arg2 modifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100222670
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize)arg2 resizeOptions:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001002225fc
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100222558
- (void)asyncImageForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100222210
- (id)imageInMemoryForKey:(id)arg1 size:(struct CGSize)arg2 modifier:(id)arg3;	// IMP=0x000000010022208c
- (id)imageInMemoryForKey:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000010022207c
- (id)_performImagingTransactionNamed:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000100221ef8
- (id)_createScaledImageFromSourceKey:(id)arg1 newImageKey:(id)arg2 size:(struct CGSize)arg3 resizeOptions:(int)arg4;	// IMP=0x0000000100221cb0
- (id)_createModifiedImageFromSourceKey:(id)arg1 newImageKey:(id)arg2 modifier:(id)arg3 size:(struct CGSize)arg4 resizeOptions:(int)arg5;	// IMP=0x0000000100221a74
- (id)imageForKey:(id)arg1 size:(struct CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4;	// IMP=0x0000000100221858
- (id)imageForKey:(id)arg1 size:(struct CGSize)arg2 modifier:(id)arg3;	// IMP=0x00000001002217c8
- (id)imageForKey:(id)arg1 size:(struct CGSize)arg2 resizeOptions:(int)arg3;	// IMP=0x00000001002217b8
- (id)imageForKey:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000100221720
- (id)imageForKey:(id)arg1;	// IMP=0x0000000100221594
- (void)asyncAddImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000001002213e0
- (void)addImage:(id)arg1 forKey:(id)arg2 enforceSquare:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100221110
- (void)addImage:(id)arg1 forKey:(id)arg2 persist:(_Bool)arg3 discardTransparrency:(_Bool)arg4;	// IMP=0x0000000100220ff0
- (void)addImage:(id)arg1 forKey:(id)arg2 persist:(_Bool)arg3;	// IMP=0x0000000100220f94
- (void)addImage:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100220f40
- (id)fullName;	// IMP=0x0000000100220ecc
@property(nonatomic) _Bool disableMemoryCache;
- (void)configureMemoryCache;	// IMP=0x0000000100220cd4
- (id)initWithName:(id)arg1 basePath:(id)arg2 maxImageSize:(double)arg3 maxConcurrentOperations:(unsigned long long)arg4;	// IMP=0x00000001002209f4
- (id)initWithName:(id)arg1 basePath:(id)arg2 maxImageSize:(double)arg3;	// IMP=0x0000000100220984
- (id)initWithName:(id)arg1 basePath:(id)arg2;	// IMP=0x00000001002208f4
- (id)initWithName:(id)arg1;	// IMP=0x0000000100220868
- (id)init;	// IMP=0x0000000100220804

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

