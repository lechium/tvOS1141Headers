//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle, NSRegularExpression, NSString;

@interface IMLogger : NSObject
{
    NSString *_auxPath;	// 8 = 0x8
    NSFileHandle *_fileHandle;	// 16 = 0x10
    NSString *_filter;	// 24 = 0x18
    NSString *_runtimeOverride;	// 32 = 0x20
    int _pid;	// 40 = 0x28
    NSString *_procName;	// 48 = 0x30
    _Bool _logTofileOnly;	// 56 = 0x38
    NSRegularExpression *_runtimeOverrideRegex;	// 64 = 0x40
}

+ (void)deleteRolledLogsForLogPath:(id)arg1 maxAge:(double)arg2;	// IMP=0x00000001001e39c8
+ (void)rollLogPath:(id)arg1 maxSize:(unsigned long long)arg2;	// IMP=0x00000001001e384c
+ (id)rolledLogPrefix;	// IMP=0x00000001001e3840
+ (id)sharedLogger;	// IMP=0x00000001001e2d3c
@property(copy) NSString *runtimeOverride; // @synthesize runtimeOverride=_runtimeOverride;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
- (void)removeRuntimeOverride:(id)arg1;	// IMP=0x00000001001e37ec
- (void)addRuntimeOverride:(id)arg1;	// IMP=0x00000001001e3734
- (void)logString:(id)arg1;	// IMP=0x00000001001e34e8
- (void)logFunction:(const char *)arg1 format:(id)arg2;	// IMP=0x00000001001e33f8
- (void)logFile:(const char *)arg1 lineNumber:(int)arg2 format:(id)arg3;	// IMP=0x00000001001e32e4
- (_Bool)shouldOverrideCondition:(id)arg1 file:(id)arg2;	// IMP=0x00000001001e314c
- (_Bool)logTofileOnly;	// IMP=0x00000001001e313c
- (void)setLogToFileOnly:(_Bool)arg1;	// IMP=0x00000001001e312c
- (id)auxPath;	// IMP=0x00000001001e311c
- (void)setAuxPath:(id)arg1;	// IMP=0x00000001001e3008
- (void)dealloc;	// IMP=0x00000001001e2f5c
- (id)init;	// IMP=0x00000001001e2d78

@end

