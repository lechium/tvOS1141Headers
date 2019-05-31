//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDatabaseHandle;

@interface IMAdminTable : NSObject
{
    IMDatabaseHandle *_db;	// 8 = 0x8
}

- (id)numberValueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x00000001001d708c
- (id)stringValueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x00000001001d6ff4
- (id)blobValueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x00000001001d6f5c
- (void)setProperty:(id)arg1 forKey:(id)arg2 domain:(id)arg3;	// IMP=0x00000001001d6cc4
- (id)lastAccessDate;	// IMP=0x00000001001d6c6c
- (void)setLastAccessDate:(id)arg1;	// IMP=0x00000001001d6be4
- (_Bool)hasDatabaseVersion;	// IMP=0x00000001001d6b44
- (void)setDatabaseVersion:(long long)arg1;	// IMP=0x00000001001d6af4
- (long long)databaseVersion;	// IMP=0x00000001001d6a3c
- (id)initWithDatabaseHandle:(id)arg1;	// IMP=0x00000001001d696c

@end

