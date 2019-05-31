//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TVSettingsFeatureOptionsFacade : NSObject
{
    _Bool _loadingDomainOptions;	// 8 = 0x8
    NSArray *_featureOptionsCollectedByDomain;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000b19b8
@property(nonatomic) _Bool loadingDomainOptions; // @synthesize loadingDomainOptions=_loadingDomainOptions;
@property(copy, nonatomic) NSArray *featureOptionsCollectedByDomain; // @synthesize featureOptionsCollectedByDomain=_featureOptionsCollectedByDomain;
- (void).cxx_destruct;	// IMP=0x00000001000b2b80
- (id)_loadFeatureOptionsFromBundleURL:(id)arg1;	// IMP=0x00000001000b2510
- (void)_loadFeatureOptions;	// IMP=0x00000001000b1a84

@end

