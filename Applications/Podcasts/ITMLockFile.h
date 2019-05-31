//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ITMLockFile : NSObject
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
    _Bool _locked;	// 20 = 0x14
}

@property(readonly, nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)unlock;	// IMP=0x00000001001e2c1c
- (_Bool)tryLock:(_Bool)arg1;	// IMP=0x00000001001e2c0c
- (_Bool)lock:(_Bool)arg1;	// IMP=0x00000001001e2bfc
- (_Bool)_lock:(_Bool)arg1 blocking:(_Bool)arg2;	// IMP=0x00000001001e2ae0
- (void)dealloc;	// IMP=0x00000001001e2a7c
- (id)initWithPath:(id)arg1;	// IMP=0x00000001001e2a10

@end

