//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface HBApplicationProxyIconCacheKey : NSObject <NSCopying>
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    double _displayScale;	// 16 = 0x10
    NSString *_lifetimeCacheKeyString;	// 24 = 0x18
    NSString *_applicationIconName;	// 32 = 0x20
}

+ (id)iconCacheKeyForApp:(id)arg1;	// IMP=0x0000000100060638
+ (id)iconCacheKeyForProxy:(id)arg1;	// IMP=0x00000001000603f0
@property(copy, nonatomic) NSString *applicationIconName; // @synthesize applicationIconName=_applicationIconName;
@property(copy, nonatomic) NSString *lifetimeCacheKeyString; // @synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString;
@property double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100060bbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100060a7c
- (unsigned long long)hash;	// IMP=0x0000000100060a64
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100060938
@property(readonly, copy, nonatomic) NSString *filesystemSafeKeyName;
- (id)_init;	// IMP=0x00000001000603bc
- (id)init;	// IMP=0x00000001000603a4

@end

