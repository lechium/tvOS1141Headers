//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSAsynchronousWorkToken.h"

@class NSOperation, NSString;

@interface TVHJSAsynchronousWorkToken : IKJSObject <TVHJSAsynchronousWorkToken>
{
    NSOperation *_operation;	// 8 = 0x8
}

@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;	// IMP=0x000000010003c1bc
- (void)cancel;	// IMP=0x000000010003c158
- (id)initWithOperation:(id)arg1 appContext:(id)arg2;	// IMP=0x000000010003c084
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000010003bffc
- (id)init;	// IMP=0x000000010003bf74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
