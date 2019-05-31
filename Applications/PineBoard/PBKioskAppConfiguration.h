//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface PBKioskAppConfiguration : NSObject <NSCopying>
{
    unsigned long long _mode;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
}

+ (id)_singleAppOptionsForMCPayloadOptions:(id)arg1;	// IMP=0x0000000100004cf4
+ (id)_defaultSystemAppOptions;	// IMP=0x0000000100004ad0
+ (id)singleAppModeConfigurationWithBundleIdentifier:(id)arg1 payloadOptions:(id)arg2;	// IMP=0x0000000100004a3c
+ (id)defaultSystemConfigurationWithBundleIdentifier:(id)arg1;	// IMP=0x00000001000049ac
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;	// IMP=0x0000000100005668
- (id)description;	// IMP=0x00000001000048a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000047dc
- (unsigned long long)hash;	// IMP=0x0000000100004770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000046b0
- (id)initWithMode:(unsigned long long)arg1 bundleIdentifier:(id)arg2 options:(id)arg3;	// IMP=0x00000001000045d0

@end

