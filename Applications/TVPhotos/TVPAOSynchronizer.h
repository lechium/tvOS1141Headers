//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVPAOSynchronizer : NSObject
{
    id _accessObject;	// 8 = 0x8
}

+ (id)syncAccessObjectWithFactory:(CDUnknownBlockType)arg1;	// IMP=0x0000000100064030
+ (void)flushWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100063f88
+ (void)initialize;	// IMP=0x0000000100063f28
@property(retain, nonatomic) id accessObject; // @synthesize accessObject=_accessObject;
- (void).cxx_destruct;	// IMP=0x00000001000644c0
- (void)queuePostOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000100064494
- (void)queueOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000010006435c
- (void)tearDownWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000641d8
- (id)initWithFactory:(CDUnknownBlockType)arg1;	// IMP=0x00000001000640ac
- (id)init;	// IMP=0x0000000100064094

@end

