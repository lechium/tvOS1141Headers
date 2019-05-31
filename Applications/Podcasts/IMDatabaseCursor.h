//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IMDatabaseCursor : NSObject
{
    NSMutableArray *_results;	// 8 = 0x8
    int _numColumns;	// 16 = 0x10
    struct sqlite3_stmt *_statement;	// 24 = 0x18
    id *_columnNames;	// 32 = 0x20
    id *_columnTypes;	// 40 = 0x28
    _Bool _closed;	// 48 = 0x30
}

- (id)columnTypeAtIndex:(long long)arg1;	// IMP=0x00000001001d95c4
- (id)columnNameAtIndex:(long long)arg1;	// IMP=0x00000001001d95b0
- (long long)rowCount;	// IMP=0x00000001001d958c
- (long long)columnCount;	// IMP=0x00000001001d957c
- (_Bool)reset;	// IMP=0x00000001001d94e4
- (_Bool)close;	// IMP=0x00000001001d945c
- (id)results;	// IMP=0x00000001001d93c4
- (id)nextRowAsArray;	// IMP=0x00000001001d9008
- (id)nextRowAsDictionary;	// IMP=0x00000001001d8f7c
- (struct sqlite3_stmt *)statement;	// IMP=0x00000001001d8f6c
- (void)dealloc;	// IMP=0x00000001001d8e9c
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001d8bf8
- (id)initWithQuery:(id)arg1 databaseHandle:(id)arg2;	// IMP=0x00000001001d8b48
- (id)_undeclaredTypeForColumnIndex:(int)arg1;	// IMP=0x00000001001d95d8

@end
