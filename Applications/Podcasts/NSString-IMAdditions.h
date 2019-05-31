//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (IMAdditions)
+ (id)stringWithBytesize:(unsigned long long)arg1 countStyle:(long long)arg2;	// IMP=0x00000001001ef2b8
+ (id)stringWithBytesize:(unsigned long long)arg1;	// IMP=0x00000001001ef2a8
+ (double)durationWithHMSString:(id)arg1;	// IMP=0x00000001001ef0a8
+ (id)stringWithDuration:(double)arg1;	// IMP=0x00000001001eee2c
+ (id)UUID;	// IMP=0x00000001001ee858
+ (id)durationFormatter;	// IMP=0x00000001001ee784
- (_Bool)hasHTML;	// IMP=0x00000001001efdd4
- (_Bool)imIsVerticalWritingMode;	// IMP=0x00000001001efdc0
- (_Bool)imIsHorizontalWritingMode;	// IMP=0x00000001001efdac
- (_Bool)imIsDefaultWritingMode;	// IMP=0x00000001001efd64
- (unsigned long long)unsignedLongLongValue;	// IMP=0x00000001001efd40
- (id)stringByRemovingEnclosingQuotations;	// IMP=0x00000001001efbec
- (id)im_uppercaseStringWithLocale:(id)arg1;	// IMP=0x00000001001efb50
- (id)stringByEnclosingInQuotes;	// IMP=0x00000001001efacc
- (id)stringByTruncatingToLength:(unsigned long long)arg1 options:(unsigned long long)arg2 truncationString:(id)arg3;	// IMP=0x00000001001ef8c0
- (unsigned long long)tokenCountWithEnumerationOptions:(unsigned long long)arg1 maxTokenCount:(unsigned long long)arg2 outLimitLength:(unsigned long long *)arg3;	// IMP=0x00000001001ef75c
- (id)stringByRemovingInsignificantPrefix;	// IMP=0x00000001001ef720
- (struct _NSRange)rangeOfSignificantSubstring;	// IMP=0x00000001001ef4ac
- (id)dictionaryByDecomposingQueryStringWithURLDecode:(_Bool)arg1;	// IMP=0x00000001001ef2cc
- (id)iTunesSortString;	// IMP=0x00000001001eee08
- (_Bool)isNotWhitespace;	// IMP=0x00000001001eede8
- (_Bool)isWhitespace;	// IMP=0x00000001001eed90
- (_Bool)containsSubstring:(id)arg1;	// IMP=0x00000001001eed64
- (id)stringByStrippingHTML;	// IMP=0x00000001001eec14
- (id)stringByRemovingPercentEscapes;	// IMP=0x00000001001eebdc
- (id)stringWithPercentEscape;	// IMP=0x00000001001eeba0
- (id)stringByConvertingNewlineCharacterSetToSpace;	// IMP=0x00000001001eea80
- (id)stringByConvertingControlCharactersToSpace;	// IMP=0x00000001001ee960
- (id)stringByRemovingURLFragment;	// IMP=0x00000001001ee900
- (id)URLFragmentString;	// IMP=0x00000001001ee8a4
- (id)stringValue;	// IMP=0x00000001001ee8a0
@end

