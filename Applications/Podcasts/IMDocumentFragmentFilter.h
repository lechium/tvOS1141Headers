//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class IMBloomFilter, NSString;

@interface IMDocumentFragmentFilter : NSObject <NSCoding>
{
    IMBloomFilter *_filter;	// 8 = 0x8
    CDStruct_92de0e9e _specification;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x000000010027c74c
@property(readonly) NSString *usageDescription;
- (long long)indexSize;	// IMP=0x000000010027c71c
- (_Bool)mightContainFragment:(id)arg1;	// IMP=0x000000010027c4f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010027c438
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010027c3d0
- (id)initWithDocument:(id)arg1 filterSpecification:(CDStruct_92de0e9e)arg2;	// IMP=0x000000010027c1ec

@end

