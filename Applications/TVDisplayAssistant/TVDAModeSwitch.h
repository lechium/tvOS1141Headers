//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBSDisplayMode;

@interface TVDAModeSwitch : NSObject
{
    PBSDisplayMode *_source;	// 8 = 0x8
    PBSDisplayMode *_destination;	// 16 = 0x10
}

+ (id)from:(id)arg1 to:(id)arg2;	// IMP=0x000000010000a708
@property(readonly, nonatomic) PBSDisplayMode *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) PBSDisplayMode *source; // @synthesize source=_source;
- (void).cxx_destruct;	// IMP=0x000000010000ad68
- (long long)change;	// IMP=0x000000010000a8c0
@property(readonly) _Bool isVirtualModeSwitch;
- (id)initWithSource:(id)arg1 destination:(id)arg2;	// IMP=0x000000010000a7a4
- (id)init;	// IMP=0x000000010000a78c

@end

