//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface _PBScreenSaverTransitionRequest : NSObject
{
    _Bool _shouldPresent;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) _Bool shouldPresent; // @synthesize shouldPresent=_shouldPresent;
- (void).cxx_destruct;	// IMP=0x000000010009f58c

@end

