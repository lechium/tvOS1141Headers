//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL, SSURLBag;

@interface IMUPPBagContext : NSObject <NSCopying>
{
    _Bool _UPPDisabled;	// 8 = 0x8
    SSURLBag *_bag;	// 16 = 0x10
    NSURL *_baseURLForGETAll;	// 24 = 0x18
    NSURL *_baseURLForPUTAll;	// 32 = 0x20
    double _pollingInterval;	// 40 = 0x28
}

+ (double)defaultPollingInterval;	// IMP=0x000000010005aec4
+ (void)loadBagContextFromURLBag:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a3a8
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(readonly, nonatomic) _Bool UPPDisabled; // @synthesize UPPDisabled=_UPPDisabled;
@property(copy, nonatomic) NSURL *baseURLForPUTAll; // @synthesize baseURLForPUTAll=_baseURLForPUTAll;
@property(copy, nonatomic) NSURL *baseURLForGETAll; // @synthesize baseURLForGETAll=_baseURLForGETAll;
@property(retain, nonatomic) SSURLBag *bag; // @synthesize bag=_bag;
@property(readonly, copy, nonatomic) NSString *domain;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005af54
- (void)dealloc;	// IMP=0x000000010005aed0

@end

